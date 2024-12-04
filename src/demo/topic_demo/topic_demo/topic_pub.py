import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Publisher_Node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.publisher_ = self.create_publisher(String, "topic", 10)
        self.timer = self.create_timer(1, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = "Hello, ROS 2!"
        self.publisher_.publish(msg)
        self.get_logger().info("Published message: %s" % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = Publisher_Node("publisher_node")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
