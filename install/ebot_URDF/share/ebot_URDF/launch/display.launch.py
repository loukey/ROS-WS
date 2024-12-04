from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import SetEnvironmentVariable
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # 设置多个环境变量
    env_vars = [
        SetEnvironmentVariable('LIBGL_ALWAYS_SOFTWARE', '1'),
        SetEnvironmentVariable('LIBGL_DRI3_DISABLE', '1'),
        SetEnvironmentVariable('MESA_GL_VERSION_OVERRIDE', '3.3')
    ]

    pkg_share = get_package_share_directory('ebot_URDF')
    
    default_model_path = os.path.join(pkg_share, 'urdf', 'ebot_URDF.urdf')
    
    # 添加rviz配置文件路径
    rviz_config_path = os.path.join(pkg_share, 'rviz', 'urdf.rviz')
    
    # 声明参数
    model_arg = DeclareLaunchArgument(
        name='model', 
        default_value=default_model_path,
        description='Absolute path to robot urdf file'
    )

    # 读取URDF内容
    robot_description = ParameterValue(
        Command(['cat ', LaunchConfiguration('model')]),
        value_type=str
    )

    # 启动robot_state_publisher节点
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}]
    )

    # 启动joint_state_publisher_gui节点
    joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui'
    )

    # 启动rviz2
    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path]  # 只加载配置文件
    )

    return LaunchDescription([
        *env_vars,  # 展开所有环境变量设置
        model_arg,
        joint_state_publisher_gui,
        robot_state_publisher,
        rviz2
    ]) 