# action server to move the robot arm to a specified point

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import traceback 
import numpy as np

# import messages and actions: 
from std_msgs.msg import String
from xarmrob_interfaces.action import ME439MoveToTarget

# define node
class MoveToPointActionServer(Node):

    def __init__(self):
        super().__init__("move_to_point_server")

        # action server for moving the robot to a point
        self.action_server = ActionServer(self, ME439MoveToTarget, "move_to_target???", self.callback)
 
    def callback(self, goal_handle):
        goal_request = goal_handle.request.xyz
        self.get_logger().info("goal: " + str(goal_request) + "received by robot ???")

        # verify good point coordinates

        # do inverse kinematics and move arm to point using topics and other hardware nodes

        # what will be the result

        result = ME439MoveToTarget.Result()  
        goal_handle.succeed()

        return result


def main(args=None):
    rclpy.init(args=args)

    move_to_point_server = MoveToPointActionServer()

    rclpy.spin(move_to_point_server)

if __name__ == '__main__':
    main()