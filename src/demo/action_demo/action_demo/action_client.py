import rclpy
from rclpy.node import Node
from interface_demo.action import MoveCircle
from rclpy.action import ActionClient

class MoveCircleClient(Node):
    def __init__(self, name):
        super().__init__(name)
        self.action_client = ActionClient(self, MoveCircle, 'move_circle')

    def send_goal(self, enable):
        # 创建目标消息
        goal_msg = MoveCircle.Goal()
        goal_msg.enable = enable
        
        self.get_logger().info('Waiting for action server...')
        self.action_client.wait_for_server()
        
        # 发送目标并获取Future对象
        self.get_logger().info('Sending goal...')
        send_goal_future = self.action_client.send_goal_async(
            goal_msg, 
            feedback_callback=self.feedback_callback
        )
        
        # Future完成时（收到服务器响应），会自动调用goal_response_callback
        # 并将send_goal_future作为参数传入
        send_goal_future.add_done_callback(self.goal_response_callback)
        self.get_logger().info('Goal sent, waiting for response...')

    def goal_response_callback(self, future):
        """
        此函数会在服务器响应目标请求时被自动调用
        future参数由ROS2运行时自动传入，包含服务器的响应
        """
        # 获取目标句柄
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected by server')
            return

        self.get_logger().info('Goal accepted by server')
        
        # 请求最终结果
        result_future = goal_handle.get_result_async()
        # 同样，为结果Future添加回调
        result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        """
        此函数会在收到最终结果时被自动调用
        future参数同样由ROS2运行时自动传入
        """
        result = future.result().result
        self.get_logger().info(f'Final result: {result.finish}')

    def feedback_callback(self, feedback_msg):
        """
        此函数会在收到周期性反馈时被自动调用
        feedback_msg由ROS2运行时自动传入
        """
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: {feedback.state}')

def main():
    rclpy.init()
    client = MoveCircleClient('move_circle_client')
    client.send_goal(True)
    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
