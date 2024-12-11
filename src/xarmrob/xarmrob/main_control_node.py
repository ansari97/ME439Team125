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

        R5_server_available = self.operate_R5_gripper_client.wait_for_server(10)
        #R12_server_available = self.operate_R12_gripper_client.wait_for_server(10)
        R12_server_available = True
        
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
        
        if robot == 5:
            self.pub_R5_endpoint_desired.publish(msg)
        else:  # robot == 12
            self.pub_R12_endpoint_desired.publish(msg)

    def transform_5_to_12(self, xyz_5):
        
        self.xyz_12 = 0

        return self.xyz_12
    
    def get_user_input(self):
        # get user input
        # handoff point is in base 5 coordinates

        handoff_point_idx = input("select index from the following...")

        if handoff_point_idx == 1:
            handoff_point = []
        elif handoff_point_idx == 2:
            handoff_point = []
        elif handoff_point_idx == 3:
            handoff_point = []
        
        return handoff_point


def main(args=None):
    rclpy.init(args=args)

    ###
    pickup_point = [0.145, 0.0, 0.155]; # x, y, z coordinates in base 5 frame
    dropoff_point = []; # x, y, z coordinates in base 5 frame
    out_of_way_point = [] # x, y, z coordinates in base 5 frame

    # 1 instantiate the control node
    control_node_instance = ControlNode("main_control_node")

    # 2 Initialize both robots: done by the control xarm and the endpoint nodes
    control_node_instance.get_logger().info("Starting sequence...")

    # 3 Open R5 gripper so it doesn't topple the cargo when going to point
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "open")
    time.sleep(5) # waits for gripper to operate; adjust as required

    control_node_instance.get_logger().info("opened")

    # Testing
    future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "close")
    time.sleep(5)

    control_node_instance.get_logger().info("closed")
    control_node_instance.get_logger().info("Sending pickup point to R5")

    # 4 move robot 5 to known pickup_point
    control_node_instance.send_endpoint_to_robot(5, pickup_point)
    time.sleep(1)

    control_node_instance.get_logger().info("Finished sequence")
 
    while(True):
        pass

    # # 5 close R5 gripper after it reaches the desired endpoint
    # future_gripper_R5 = control_node_instance.send_goal_to_gripper(5, "close")
    # time.sleep(1)

    # # 6 get user input for handoff point
    # handoff_point = control_node_instance.get_user_input() 
    
    # # 7 move robot 5 to handoff_point
    # control_node_instance.send_endpoint_to_robot(5, handoff_point)
    # time.sleep(1)
    
    # # 8 Open R12 gripper so it doesn't topple the cargo when going to point
    # future_gripper_R12 = control_node_instance.send_goal_to_gripper(12, "open")
    # time.sleep(1)

    # # 9 move robot 12 to hand off point (+ some vertical offset)
    # control_node_instance.send_endpoint_to_robot(12, control_node_instance.transform_5_to_12(handoff_point))
    # time.sleep(1)

    # # 10 close R5 gripper after it reaches the desired endpoint
    # future_gripper_R12 = control_node_instance.send_goal_to_gripper(12, "close")
    # time.sleep(1)

    # # 11 R12 gets out of the way
    # control_node_instance.send_endpoint_to_robot(12, control_node_instance.transform_5_to_12(out_of_way_point))
    # time.sleep(1)
    
    # # 12 move robot 12 to drop_off
    # control_node_instance.send_endpoint_to_robot(12, control_node_instance.transform_5_to_12(dropoff_point))
    # time.sleep(1)

    # # 13 Open R12 gripper and drop cargo
    # future_gripper_R12 = control_node_instance.send_goal_to_gripper(12, "open")
    # time.sleep(1)
    
if __name__ == "__main__":
    main()
