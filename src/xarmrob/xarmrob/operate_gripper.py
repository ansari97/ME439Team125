# action server to move the robot arm to a specified point

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import traceback 
import numpy as np

# import messages and actions: 
from std_msgs.msg import String
from xarmrob_interfaces.action import OperateGripper
from xarmrob_interfaces.msg import ME439GripperCommand

# define node
class OperateGripperServer(Node):

    def __init__(self):
        super().__init__("operate_gripper_server")

        # action server for operating the gripper
        self.action_server = ActionServer(self, OperateGripper, "operate_R5_gripper_action", self.callback)

        # publisher for the gripper commands
        self.pub_operate_gripper = self.create_publisher(ME439GripperCommand, 'operate_gripper', 1)

        # gripper cmd values
        self.bus_servo_cmd_for_mapping_gripper = self.declare_parameter('bus_servo_cmd_for_mapping_gripper',[54, 570]).value
        

    def callback(self, goal_handle):
        goal_request = goal_handle.request.order
        self.get_logger().info("goal: " + str(goal_request) + "received by robot 12 gripper")   
        
        self.bus_servo_command_msg = ME439GripperCommand()

        # send command to xarm to open gripper
        if goal_request == "open":
            self.bus_servo_command_msg.command = self.bus_servo_cmd_for_mapping_gripper[0]
            self.bus_servo_command_msg.enable = True
        
        # send command to xarm to close gripper
        else:
            self.bus_servo_command_msg.command = self.bus_servo_cmd_for_mapping_gripper[1]
            self.bus_servo_command_msg.enable = True

        self.pub_operate_gripper.publish(self.bus_servo_command_msg)
        result = OperateGripper.Result()  
        
        self.get_logger().info(goal_request + " successful!")   
        
        goal_handle.succeed()

        return result

def main(args=None):
    rclpy.init(args=args)

    operate_gripper_server = OperateGripperServer()

    rclpy.spin(operate_gripper_server)

if __name__ == '__main__':
    main()
