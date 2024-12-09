from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    # Find the URDF file for the robot and get a robot description from it. 
    urdf_file_name = 'robot-xarm.urdf'
    urdf = os.path.join(
        get_package_share_directory('xarmrob'),
        'urdf',
        urdf_file_name
    )
    with open(urdf, 'r') as infp:
        robot_desc = infp.read()
        
    # Find the YAML file of parameters
    params_file_name = 'robot_xarm_info.yaml'
    params_file = os.path.join(
        get_package_share_directory('xarmrob'),
        'config',
        params_file_name
    )
    
    # Create the Launch Description
    launch_descr = LaunchDescription([
        Node(
            package='xarmrob',
            executable='command_xarm',
            name='command_xarm',
            output='screen',  # Enable output to screen
            parameters=[params_file]
        ),
        Node(
            package='xarmrob',
            executable='xarm_kinematics',
            name='xarm_kinematics',
            output='screen',  # Enable output to screen
            parameters=[params_file]
        ),
        Node(
            package='xarmrob',
            executable='endpoint_keyboard_smooth',
            name='endpoint_keyboard_smooth',
            output='screen',  # Enable input and output to screen
            parameters=[params_file],
            prefix='x-terminal-emulator -e "ros2 run xarmrob endpoint_keyboard_smooth; read"'  # Open in a new terminal and keep it open
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',  # Enable output to screen
            parameters=[{'robot_description': robot_desc}],
            arguments=[urdf]
        )
    ])
    
    return launch_descr