import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from finalproj125_interfaces.action import ReturnDouble


class DemoActionServer(Node):

    def __init__(self, node_name):
        super().__init__(node_name)
        self._action_server = ActionServer(
            self,
            ReturnDouble,
            'double_action',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        print("goal received")
        goal_request = goal_handle.request.order
        result = ReturnDouble.Result()

        goal_handle.succeed()

        # return same as goal_request
        result.double_result = goal_request*2
        return result



def main(args=None):
    rclpy.init(args=args)

    demo_action_server = DemoActionServer("demo_action_server")

    print("node initialized")

    rclpy.spin(demo_action_server)


if __name__ == '__main__':
    main()