import rclpy
from rclpy.node import Node
from interface_demo.srv import AddThreeInts

class ServiceClient(Node):
    def __init__(self, name):
        super().__init__(name)
        self.client = self.create_client(AddThreeInts, 'add_three_ints')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = AddThreeInts.Request()

    def send_request(self, a, b, c):
        self.req.a = a
        self.req.b = b
        self.req.c = c
        self.future = self.client.call_async(self.req)

def main():
    rclpy.init()
    client = ServiceClient('service_client')
    client.send_request(2, 3, 4)
    
    while rclpy.ok():   
        rclpy.spin_once(client)
        if client.future.done():
            try:
                response = client.future.result()
                client.get_logger().info(f'Result: {response.sum}')
                break  # 添加break语句，收到响应后立即退出循环
            except Exception as e:
                client.get_logger().error(f'Service call failed: {e}')
                break  # 发生异常时也要退出循环
            
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
