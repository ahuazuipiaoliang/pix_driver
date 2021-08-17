#include <iostream>
#include <string>
#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "pix_driver_msg/msg/pixloop.hpp"
#include "autoware_auto_msgs/msg/vehicle_control_command.hpp"


using namespace std::chrono_literals;

float max_steering_angle = 30.0;
float steering_unit = 1024.0 / max_steering_angle;
//steering_unit = 1024.0 / max_steering_angle;
float  max_acc = 20.0;
float brake_unit = max_acc / 1000.0;



class AutowareBridgeSubscriber : public rclcpp::Node
{
    public:
    //    Node2() : Node("pipeline_step_2")
    //{
    //    pub_ = this->create_publisher<example_interfaces::msg::Float64>("data_2", 10);
     //   sub_ = this->create_subscription<example_interfaces::msg::Float64>(
     //       "data_1", 10, std::bind(&Node2::callbackData, this, std::placeholders::_1));
    //}
        AutowareBridgeSubscriber() : Node("autoware_bridge_subscriber")
        {
            sub_ = this->create_subscription<autoware_auto_msgs::msg::VehicleControlCommand>(
            "vehicle_command", 10, std::bind(&AutowareBridgeSubscriber::topic_callback, this, std::placeholders::_1));
            pub_ = this->create_publisher<pix_driver_msg::msg::Pixloop>("pix_control_cmd", 1);
        }
    private:
        void topic_callback(const autoware_auto_msgs::msg::VehicleControlCommand::SharedPtr msg) 
        {
            //auto message = can_msgs::msg::Frame(rosidl_runtime_cpp::MessageInitialization::ZERO);
            auto message = pix_driver_msg::msg::Pixloop();

            message.right_light = false;
            message.left_light = false;
            message.self_driving_enable = true;
            message.epb = false;
            message.gear_shift = 1;
            if(msg->long_accel_mps2 < 0.0)
            {
                message.braking = msg->long_accel_mps2 * brake_unit;
            }
            else
            {
                message.braking = 0;
            }
            message.speed = msg->velocity_mps * 10 * 3.6;
            message.steering =  -1* msg->front_wheel_angle_rad * 57.30 * steering_unit;
            message.mode_selection = 1;
            message.front_light = false;
            message.state_control = false;
            message.advanced_mode = false;
            message.advanced_mode = false;
            if(message.braking > 0)
            {
                message.braking = 0;
            }
            else if(message.braking < -1024)
            {
                message.braking = 1024;
            }
            if(message.speed > 600)
            {
                message.speed = 600;
            }
            else if(message.speed < 0)
            {
                message.speed = 0;
            }
            if(message.steering > 1024)
            {
                message.steering = 1024;
            }
            else if(message.steering < -1024)
            {
                message.steering = -1024;
            }

            pub_->publish(message);

        }
        rclcpp::Subscription<autoware_auto_msgs::msg::VehicleControlCommand>::SharedPtr sub_;
        rclcpp::Publisher<pix_driver_msg::msg::Pixloop>::SharedPtr pub_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AutowareBridgeSubscriber>());
    rclcpp::shutdown();
    return 0;
}
