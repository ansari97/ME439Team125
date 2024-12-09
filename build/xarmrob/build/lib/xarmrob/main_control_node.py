# Main control node for the two xarms

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient, ActionServer
import traceback
import numpy as np

# IMPORT the messages:
from sensor_msgs.msg import JointState
from std_msgs.msg import String
from finalproj125_interfaces.action import ReturnSame, ReturnDouble

import time


# define node
class ControlNode(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        # action client for moving the robot to a point
        self.action_client_for_same = ActionClient(self, ReturnSame, "same_action")

        # action client for moving the robot to a point
        self.action_client_for_same_PI = ActionClient(self, ReturnSame, "same_action_PI")

        # action client for operating the gripper
        self.action_client_for_double = ActionClient(self, ReturnDouble, "double_action")

        # state topic for reading state of both the robots
        # states could be moving, picking, hand-off ready etc.

    def send_goal_to_same(self, order):
        goal_message = ReturnSame.Goal()
        goal_message.order = order

        print("here")
        server_available = self.action_client_for_same.wait_for_server(3)
        print(server_available)

        if not server_available:
            pass

        print("here1")

        return self.action_client_for_same.send_goal_async(goal_message)

    def send_goal_to_same_PI(self, order):
        goal_message = ReturnSame.Goal()
        goal_message.order = order

        print("here")
        server_available = self.action_client_for_same_PI.wait_for_server(3)
        print(server_available)

        if not server_available:
            pass

        print("here1")

        return self.action_client_for_same_PI.send_goal_async(goal_message)
    
    def send_goal_to_double(self, order):
        goal_message = ReturnDouble.Goal()
        goal_message.order = order

        print("here")

        self.action_client_for_double.wait_for_server()

        print("here1")

        return self.action_client_for_double.send_goal_async(goal_message)


def main(args=None):
    rclpy.init(args=args)

    control_node_instance = ControlNode("main_control_node")

    while True:
        future_same = control_node_instance.send_goal_to_same(10)
        future_same_PI = control_node_instance.send_goal_to_same_PI(15)
        future_double = control_node_instance.send_goal_to_double(20)
        time.sleep(1)


if __name__ == "__main__":
    main()
