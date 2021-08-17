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