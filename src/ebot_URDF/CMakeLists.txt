cmake_minimum_required(VERSION 3.8)
project(ebot_URDF)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY meshes urdf launch rviz
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
