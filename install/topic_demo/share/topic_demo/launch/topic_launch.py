from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """创建launch描述"""
    # 创建LaunchDescription对象
    ld = LaunchDescription()
    
    # 创建发布节点
    publisher_node = Node(
        package='topic_demo',        # 包名
        executable='topic_pub',      # 节点可执行文件名
        name='publisher_node',       # 节点名称
        output='screen'              # 输出到屏幕
    )
    
    # 创建订阅节点
    subscriber_node = Node(
        package='topic_demo',        # 包名
        executable='topic_sub',      # 节点可执行文件名
        name='subscriber_node',      # 节点名称
        output='screen'              # 输出到屏幕
    )
    
    # 将节点添加到launch描述中
    ld.add_action(publisher_node)
    ld.add_action(subscriber_node)
    
    return ld 