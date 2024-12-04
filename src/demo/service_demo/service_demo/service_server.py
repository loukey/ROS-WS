import rclpy
from rclpy.node import Node
from interface_demo.srv import AddThreeInts

class ServiceServer(Node):
    def __init__(self, name):
        super().__init__(name)
        self.srv = self.create_service(AddThreeInts, 'add_three_ints', self.add_three_ints_callback)

    def add_three_ints_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info(f'Incoming request: a={request.a}, b={request.b}, c={request.c}')
        return response
    
def main():
    rclpy.init()
    server = ServiceServer('service_server')
    rclpy.spin(server)
    server.destroy_node()
    rclpy.shutdown()
