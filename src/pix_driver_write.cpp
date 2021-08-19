// Copyright PIXMOVING, INC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Co-developed by PIXMOVING, INC.
#include "pix_driver_write.hpp"

using namespace std::chrono_literals;

namespace autoware
{
namespace drivers
{
namespace pix_driver
{

PixDriverWrite::PixDriverWrite() : Node("pix_driver_write")
{
    sub_ = this->create_subscription<pix_driver_msg::msg::PixloopControl>(
    "pix_control_cmd", 10, std::bind(&PixDriverWrite::topic_callback, this, std::placeholders::_1));
    pub_ = this->create_publisher<can_msgs::msg::Frame>("to_can_bus", 500);
}

void PixDriverWrite::topic_callback(const pix_driver_msg::msg::PixloopControl::SharedPtr msg)
{
    //auto message = can_msgs::msg::Frame(rosidl_runtime_cpp::MessageInitialization::ZERO);
    auto message = can_msgs::msg::Frame();
    message.header.frame_id = "can";

    int right_light, left_light, self_driving_enable, EPB, Gear_shift, Braking,
    Speed, Steering, mode_selection, Front_light, State_control, Advanced_mode, Speed_mode;

    uint8_t *data_matrix;

    if(msg->right_light)
    {
        right_light = 1;
    }
    else
    {
        right_light = 0;
    }
    if(msg->left_light)
    {
        left_light = 1;
    }
    else
    {
        left_light = 0;
    }
    if(msg->self_driving_enable)
    {
        self_driving_enable = 1;
    }
    else
    {
        self_driving_enable = 0;
    }
    if(msg->epb)
    {
        EPB = 1;
    }
    else
    {
        EPB = 0;
    }
    Gear_shift = msg->gear_shift;
    Braking = msg->braking;
    Speed = msg->speed;
    Steering = msg->steering;
    mode_selection = msg->mode_selection;
    
    if(msg->front_light)
    {
        Front_light = 1;
    }
    else{
        Front_light = 0;
    }
    if(msg->state_control)
    {
        State_control = 1;
    }
    else
    {
        State_control = 0;
    }

    if(msg->advanced_mode)
    {
       Advanced_mode = 1;
    }
    else{
       Advanced_mode = 0;
    }

    if(msg->speed_mode)
    {
       Speed_mode = 1;
    }
    else{
       Speed_mode = 0;
    }
    auto_control.set_message_data(right_light, left_light, self_driving_enable, EPB, 
    Gear_shift, Braking, Speed, Steering, mode_selection, Front_light, State_control, Advanced_mode, Speed_mode);
    auto_control.encode_data();
    message.id = 387;
    message.dlc = 8;

    message.is_extended = false;
    

    for(uint i=0;i<8;i++)
    {
        message.data[i] = *(data_matrix+i);
    }
    pub_->publish(message);

}

} // pix_driver
} // drivers
} // autoware

// RCLCPP_COMPONENTS_REGISTER_NODE(autoware::drivers::pix_driver_ros2::PixDriverSubscriber)
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<autoware::drivers::pix_driver::PixDriverWrite>());
    rclcpp::shutdown();
    return 0;
}
