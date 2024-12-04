import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Subscriber_Node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.subscription = self.create_subscription(String, "topic", self.listener_callback, 10)

    def listener_callback(self, msg):
        self.get_logger().info("Received message: %s" % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = Subscriber_Node("subscriber_node")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
