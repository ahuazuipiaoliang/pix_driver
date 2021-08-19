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
#ifndef PIX_DRIVER__PIX_DRIVER_READ_HPP_
#define PIX_DRIVER__PIX_DRIVER_READ_HPP_
#include <iostream>
#include <string>
#include <memory>
#include <chrono>

#include "message_403.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int8.hpp"
#include "pix_driver_msg/msg/pixloop_feedback.hpp"
#include "can_msgs/msg/frame.hpp"

namespace autoware
{
namespace drivers
{
namespace pix_driver
{

class PixDriverRead : public rclcpp::Node
{
    public:
        PixDriverRead();
        Auto_data_feedback_403 auto_data_feedback;
    
    private:
        void topic_callback(const can_msgs::msg::Frame::SharedPtr msg);
        rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr sub_;
        rclcpp::Publisher<pix_driver_msg::msg::PixloopFeedback>::SharedPtr pub_;
};

} // namespace pix_driver
} // namespace drivers
} // namespace autoware


#endif // PIX_DRIVER__PIX_DRIVER_READ_HPP_