import rclpy
from rclpy.node import Node


class NodeTest(Node):
    def __init__(self):
        super().__init__("node_test")
        self.timer = self.create_timer(1, self.timer_callback)
    
    def timer_callback(self):
        self.get_logger().info("Hello, ROS 2!")

def main(args=None):
    rclpy.init(args=args)
    node = NodeTest()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("KeyboardInterrupt (SIGINT)")
    finally:
        node.destroy_node()
        rclpy.shutdown()
