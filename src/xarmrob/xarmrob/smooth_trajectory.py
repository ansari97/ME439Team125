#!/usr/bin/env python3

# ROS node to command an Endpoint to a HiWonder xArm 1S 
# Peter Adamczyk, University of Wisconsin - Madison
# Updated 2024-11-12

import rclpy
from rclpy.node import Node 
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup 
from rclpy.executors import MultiThreadedExecutor
import threading
import numpy as np
import traceback
import time
# from sensor_msgs.msg import JointState
# from xarmrob_interfaces.srv import ME439XArmInverseKinematics #, ME439XArmForwardKinematics
from xarmrob_interfaces.msg import ME439PointXYZ

import xarmrob.smooth_interpolation as smoo 


## Define a temporary function using Python "lambda" functionality to print colored text
# see https://stackoverflow.com/questions/287871/how-do-i-print-colored-text-to-the-terminal/3332860#3332860
# search that page for "CircuitSacul" to find that answer
coloredtext = lambda r, g, b, text: f'\033[38;2;{r};{g};{b}m{text}\033[38;2;255;255;255m'



class SmoothTrajectory(Node): 
    def __init__(self): 
        super().__init__('smooth_trajectory')
        
        
        self.xyz_goal = [0.165, 0.0, 0.155] # roughly upright neutral with wrist at 45 degrees. Formally: [0.1646718829870224, 0.0, 0.1546700894832611]
        self.old_xyz_goal = [0.165, 0.0, 0.155]
        self.xyz_traj = [self.old_xyz_goal]
        self.disp_traj = self.xyz_traj 
        self.gripper = 0
        self.idx = 0

        ### Subscriber
        self.sub_endpoint_desired = self.create_subscription(ME439PointXYZ,'/R5_endpoint_desired',self.endpoints_requests, 1)

        # =============================================================================
        #   # Publisher for the Endpoint goal. 
        # =============================================================================
        self.pub_endpoint_desired = self.create_publisher(ME439PointXYZ,'endpoint_desired',1,callback_group=ReentrantCallbackGroup())
        # Create the message, with a nominal pose
        self.endpoint_desired_msg = ME439PointXYZ()
        self.endpoint_desired_msg.xyz = self.xyz_goal 

        # command frequency parameter: how often we expect it to be updated    
        self.command_frequency = self.declare_parameter('command_frequency',10).value
        self.movement_time_ms = round(1000/self.command_frequency)  # milliseconds for movement time. 
        self.endpoint_speed = self.declare_parameter('endpoint_speed',0.05).value  # nominal speed for continuous movement among points. 
        
        # Set up a timer to send the commands at the specified rate. 
        self.timer = self.create_timer(self.movement_time_ms/1000, self.send_endpoint_desired,callback_group=ReentrantCallbackGroup())


    # Callback to publish the endpoint at the specified rate. 
    def send_endpoint_desired(self):
        print(self.idx)
        if self.idx>=len(self.disp_traj):
            self.idx = len(self.disp_traj) - 1
        self.xyz_goal = self.disp_traj[self.idx]
        self.idx += 1
        self.endpoint_desired_msg.xyz = self.xyz_goal 
        self.pub_endpoint_desired.publish(self.endpoint_desired_msg)



    def endpoint_requests(self, msg_in):
        # Run a loop that gets input from the user
        prnttmpl = coloredtext(50,255,50,'\n\tEndpoint Goal Input was [' + '{:.3f}, '*2 + '{:.3f}]')
        self.new_xyz_goal = msg_in.xyz
        
        # Do linear or minimum jerk interpolation
        self.t,self.disp_traj = smoo.minimum_jerk_interpolation(np.array(self.old_xyz_goal), np.array(self.new_xyz_goal), self.endpoint_speed, self.command_frequency)
        
        # Reset counter and wait until the trajectory has been played
        self.idx = 0
        while(self.idx<len(self.disp_traj)):
            # print(self.idx)
            rclpy.spin_once(self)
            # time.sleep(0.08)
            
        self.old_xyz_goal = self.new_xyz_goal



def main(args=None):
   
    rclpy.init(args=args)

    smooth_trajectory = SmoothTrajectory()
    rclpy.spin(smooth_trajectory)
        
        

if __name__ == '__main__':
    main()


