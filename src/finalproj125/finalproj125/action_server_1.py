# Main control node for the two xarms

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import traceback 
import numpy as np
# IMPORT the messages: 
from std_msgs.msg import String
from finalproj125_interfaces.action import ReturnSame

# define node
class ActionServer1(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        # demo action server for moving the robot to a point
        self.action_server = ActionServer(self, ReturnSame, "same_action", self.callback_1)

        # action client for operating the gripper
         
         
        # state topic for reading state of both the robots
        # states could be moving, picking, hand-off ready etc.
        # 
        #    
    def callback_1(self, goal_handle):
        print("goal received")
        goal_request = goal_handle.request.order
        result = ReturnSame.Result()

        goal_handle.s
        goal_handle.succeed()

        # return same as goal_request
        result.action_result = goal_request
        return result


def main(args=None):
    rclpy.init(args=args)

    action_server1_instance = ActionServer1("same_action_server1")

    print("node initialized")

    rclpy.spin(action_server1_instance)

if __name__ == '__main__':
    main()