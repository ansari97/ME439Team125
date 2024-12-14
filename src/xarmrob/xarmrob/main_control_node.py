# Main control node for the two xarms

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient, ActionServer
import traceback
import numpy as np

# IMPORT the messages:
from sensor_msgs.msg import JointState
from std_msgs.msg import String
from xarmrob_interfaces.action import OperateGripper
from xarmrob_interfaces.msg import ME439PointXYZ

import time

# define node
class ControlNode(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        self.initialization_point = self.declare_parameter('initialization_point', [0.10, 0.10, 0.15]).value

        # action client for operating gripper
        self.operate_R5_gripper_client = ActionClient(
            self, OperateGripper, "/R5/operate_gripper_action"
        )
        self.operate_R12_gripper_client = ActionClient(
            self, OperateGripper, "/R12/operate_gripper_action"
        )

        # publisher for endpoints desired
        self.pub_R5_endpoint_desired = self.create_publisher(
            ME439PointXYZ, "/R5/endpoint_desired_cmd", 1
        )

        # publisher for endpoints desired
        self.pub_R12_endpoint_desired = self.create_publisher(
            ME439PointXYZ, "/R12/endpoint_desired_cmd", 1
        )

        # state topic for reading sta te of both the robots
        # states could be moving, picking, hand-off ready etc.

    def send_goal_to_gripper(self, robot, order):
        goal_message = OperateGripper.Goal()
        goal_message.order = order

        #R5_server_available = True
        R5_server_available = self.operate_R5_gripper_client.wait_for_server(10)
        R12_server_available = self.operate_R12_gripper_client.wait_for_server(10)
        # R12_server_available = True
        
        if not (R5_server_available and R12_server_available):
            self.get_logger().info("Gripper servers not available, status: " + str(R5_server_available) + ", " + str(R12_server_available))
            return
            # do something: return??

        if robot == 5:
            return self.operate_R5_gripper_client.send_goal_async(goal_message)
        else:  # robot == 12
            return self.operate_R12_gripper_client.send_goal_async(goal_message)
        
    def send_endpoint_to_robot(self, robot, end_xyz):
        msg = ME439PointXYZ()
        msg.xyz = end_xyz
        self.get_logger().info("publishing endpoints")
        if robot == 5:
            self.pub_R5_endpoint_desired.publish(msg)
            self.get_logger().info("publishing endpoints to R5")
        else:  # robot == 12
            self.pub_R12_endpoint_desired.publish(msg)
            self.get_logger().info("publishing endpoints to R12")

    def transform_5_to_12(self, xyz_5):
        
        self.xyz_12 = 0

        return self.xyz_12
    
    def get_user_input(self, handoff_point_idx):
        # get user input
        
        if handoff_point_idx == 1:
            self.handoff_point_R12 = [0.20, 0.0, 0.15] # x, y, z coordinates in base 12 frame
            self.handoff_point_R5 = [0.2143, -0.01, 0.2088] # x, y, z coordinates in base 5 frame
            # self.dropoff_point = [0.03, 0.28, 0.07]
            self.out_of_way_point_R12 = [0.12, 0, 0.15] # x, y, z coordinates in base 5 frame
            self.out_of_way_point_R5 = [0.133, -0.01, 0.2088] # x, y, z coordinates in base 5 frame
        elif handoff_point_idx == 2:
            self.handoff_point_R12 = [0.2383, 0.1328, 0.1780] # x, y, z coordinates in base 12 frame
            self.handoff_point_R5 = [0.1627, -0.1456, 0.2308] # x, y, z coordinates in base 5 frame
            # self.dropoff_point = [0.03, 0.28, 0.07]
            scaling_var = 2
            self.out_of_way_point_R12 = [self.handoff_point_R12[0]/scaling_var, self.handoff_point_R12[1]/scaling_var, self.handoff_point_R12[2]]
            self.out_of_way_point_R5 = [self.handoff_point_R5[0]/scaling_var, self.handoff_point_R5[1]/scaling_var, self.handoff_point_R5[2]]# x, y, z coordinates in base 5 frame
        elif handoff_point_idx == 3:
            handoff_point = []
        
        # return handoff_point


def main(args=None):
    rclpy.init(args=args)

    pickup_point = [0.03, 0.32, 0.04] # x, y, z coordinates in base 12 frame

    # instantiate the control node
    control_node_instance = ControlNode("main_control_node")

# #######################
    handoff_point_idx = 1
    
# #######################
    
    # Change handoff point coordinates
    control_node_instance.get_user_input(handoff_point_idx)
    # Wait for 1 second
    time.sleep(1.0)

    control_node_instance.get_logger().info("Starting sequence...")
    time.sleep(1) 

    # Initialize both robots
    control_node_instance.get_logger().info("Robots to initialization point")

    control_node_instance.send_endpoint_to_robot(12, control_node_instance.initialization_point)
    time.sleep(0.5)
    control_node_instance.send_endpoint_to_robot(5, control_node_instance.initialization_point)
    time.sleep(2.5)

    # Open the grippers on both robots
    control_node_instance.get_logger().info("Sending open command to robots")
    future_gripper_R12 = control_node_instance.send_goal_to_gripper(12, "open")
    time.sleep(0.5)
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "open")
    time.sleep(1.0)

    # move robot 12 to known pickup_point
    control_node_instance.get_logger().info("Robot 12 to pickup point")
    control_node_instance.send_endpoint_to_robot(12, pickup_point)
    time.sleep(5.0)

    control_node_instance.get_logger().info("Sending close command to R12")

    # Close gripper on robot 12
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(12, "close")
    time.sleep(1.5)

    # Move robot 12 to initialization/intermediate
    control_node_instance.send_endpoint_to_robot(12, control_node_instance.initialization_point)
    time.sleep(2)

    control_node_instance.get_logger().info("R12 to handoff point")

    # move robots to handoff point
    control_node_instance.send_endpoint_to_robot(12, control_node_instance.handoff_point_R12)
    time.sleep(0.5)
    control_node_instance.send_endpoint_to_robot(5, control_node_instance.out_of_way_point_R5)
    time.sleep(5)
    
    control_node_instance.send_endpoint_to_robot(5, control_node_instance.handoff_point_R5)
    time.sleep(4)

    # Close R5 gripper
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "close")
    time.sleep(1)

    # Open R12 gripper
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(12, "open")
    time.sleep(1)

    # move robots to final point
    control_node_instance.get_logger().info("R5 to drop_off point")

    control_node_instance.send_endpoint_to_robot(12, control_node_instance.out_of_way_point_R12)
    time.sleep(0.5)
    control_node_instance.send_endpoint_to_robot(5, control_node_instance.initialization_point)
    time.sleep(2)
    control_node_instance.send_endpoint_to_robot(12, control_node_instance.initialization_point)
    time.sleep(5)

    # Open R5 gripper
    control_node_instance.get_logger().info("Sending open command to R5")
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "open")
    # time.sleep()

    control_node_instance.get_logger().info("Finished sequence")
 
    # while(True):
        # pass

    
if __name__ == "__main__":
    main()
