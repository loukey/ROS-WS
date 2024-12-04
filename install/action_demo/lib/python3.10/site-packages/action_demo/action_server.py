import rclpy
from rclpy.node import Node
import time
from interface_demo.action import MoveCircle  # 导入自定义的Action接口
from rclpy.action import ActionServer  # 导入ActionServer类

class MoveCircleServer(Node):
    def __init__(self, name):
        super().__init__(name)
        # 创建Action服务器
        # 参数1: self (node)
        # 参数2: MoveCircle (Action类型)
        # 参数3: 'move_circle' (Action名称，需要与客户端一致)
        # 参数4: execute_callback (执行回调函数)
        self.action_server = ActionServer(
            self, 
            MoveCircle, 
            'move_circle', 
            self.execute_callback
        )   
    
    def execute_callback(self, goal_handle):
        """
        执行回调函数，处理客户端发来的目标请求
        参数 goal_handle: 目标处理器，用于管理目标的执行状态和发送反馈
        """
        self.get_logger().info('Executing goal...')
        
        # 创建反馈消息对象
        feedback_msg = MoveCircle.Feedback()
        
        # 模拟圆周运动，每30度发送一次反馈
        for i in range(0, 360, 30):
            # 更新反馈消息
            feedback_msg.state = i
            # 发布反馈信息给客户端
            goal_handle.publish_feedback(feedback_msg)
            # 模拟执行时间
            time.sleep(1)

        # 任务完成，标记为成功
        goal_handle.succeed()
        
        # 创建并返回结果消息
        result = MoveCircle.Result()
        result.finish = True
        return result

def main():
    # 初始化ROS2
    rclpy.init()
    
    # 创建服务器节点
    server = MoveCircleServer('move_circle_server')
    
    # 保持节点运行，处理回调
    rclpy.spin(server)
    
    # 清理资源
    server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
