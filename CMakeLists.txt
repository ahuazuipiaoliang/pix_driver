# Copyright PIXMOVING, INC.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Co-developed by PIXMOVING, INC.

cmake_minimum_required(VERSION 3.5)
project(pix_driver)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(
  include/pix_driver
  )


# find dependencies
find_package(ament_cmake_auto REQUIRED)

find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(pix_driver_msg REQUIRED)
find_package(can_msgs REQUIRED)
find_package(autoware_auto_msgs REQUIRED)

ament_auto_find_build_dependencies()
ament_auto_add_library(${PROJECT_NAME} SHARED
 "include/pix_driver/canbus_basic.hpp"
 "include/pix_driver/message_387.hpp"
 "include/pix_driver/message_403.hpp"
 "include/pix_driver/pix_driver_write.hpp"
 #"src/autoware_pix_bridge.cpp"
 "src/pix_driver_write.cpp"
 "src/message_387.cpp"
 "src/message_403.cpp"
)
autoware_set_compile_options(${PROJECT_NAME})

add_executable(pix_driver_write
  src/pix_driver_write.cpp
  src/message_387.cpp
  )

add_executable(pix_driver_read
  src/pix_driver_read.cpp
  src/message_403.cpp
)

#add_executable(autoware_pix_bridge
#  src/autoware_pix_bridge.cpp
#)

#add_executable(byte_test
#  src/byte_test.cpp
#)
ament_target_dependencies(pix_driver_write rclcpp std_msgs pix_driver_msg can_msgs)
ament_target_dependencies(pix_driver_read rclcpp std_msgs pix_driver_msg can_msgs)
#ament_target_dependencies(autoware_pix_bridge rclcpp std_msgs pix_driver_msg can_msgs autoware_auto_msgs)
#ament_target_dependencies(byte_test)

install(TARGETS
 pix_driver_write 
 pix_driver_read
# autoware_pix_bridge
  DESTINATION lib/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
