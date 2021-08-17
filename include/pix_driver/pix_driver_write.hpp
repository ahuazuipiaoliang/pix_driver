#ifndef PIX_DRIVER__PIX_DRIVER_WRITE_HPP_
#define PIX_DRIVER__PIX_DRIVER_WRITE_HPP_
#include <iostream>
#include <string>
#include <memory>
#include <chrono>

#include "message_387.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int8.hpp"
#include "pix_driver_msg/msg/pixloop_control.hpp"
#include "can_msgs/msg/frame.hpp"

namespace autoware
{
namespace drivers
{
namespace pix_driver
{

class PixDriverWrite : public rclcpp::Node
{
    public:
        PixDriverWrite();
    private:
        Auto_control_387 auto_control;
        void topic_callback(const pix_driver_msg::msg::PixloopControl::SharedPtr msg);

        rclcpp::Subscription<pix_driver_msg::msg::PixloopControl>::SharedPtr sub_;
        rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr pub_;
};

} // namespace pix_driver
} // namespace drivers
} // namespace autoware


#endif // PIX_DRIVER__PIX_DRIVER_WRITE_HPP_