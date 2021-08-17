#include "pix_driver_read.hpp"

using namespace std::chrono_literals;

namespace autoware
{
namespace drivers
{
namespace pix_driver
{
Auto_data_feedback_403 auto_data_feedback;

class PixDriverRead : public rclcpp::Node
{
    public:
        PixDriverRead() : Node("pix_driver_read")
        {
            sub_ = this->create_subscription<can_msgs::msg::Frame>(
            "from_can_bus", 10, std::bind(&PixDriverRead::topic_callback, this, std::placeholders::_1));
            pub_ = this->create_publisher<pix_driver_msg::msg::PixloopFeedback>("pixloop_feedback", 500);
        }
    private:
        void topic_callback(const can_msgs::msg::Frame::SharedPtr msg)
        {
            //auto message = can_msgs::msg::Frame(rosidl_runtime_cpp::MessageInitialization::ZERO);
            auto message = pix_driver_msg::msg::PixloopFeedback();
            if(msg->id == 403){
                uint8_t can_message[8];
                for(uint i=0;i<8;i++)
                {
                    can_message[i] = msg->data[i];
                }
                auto_data_feedback.update_data(can_message);
                if(auto_data_feedback.data_403.emergency_stop_feedback_403==1)
                {
                   message.emergency_stop_feedback = true; 
                }
                else{
                    message.emergency_stop_feedback = false;
                }
                if(auto_data_feedback.data_403.vehicle_mode_feedback_403==1)
                {
                   message.vehicle_mode_feedback = true; 
                }
                else{
                    message.vehicle_mode_feedback = false;
                }
                if(auto_data_feedback.data_403.vehicle_status_feedback_403==1)
                {
                    message.vehicle_status_feedback = true;
                }
                else{
                    message.vehicle_status_feedback = false;
                }
                if(auto_data_feedback.data_403.braking_light_feedback_403==1)
                {
                    message.braking_light_feedback = true; 
                }
                else{
                    message.braking_light_feedback = false;
                }
                if(auto_data_feedback.data_403.tail_light_feedback_403==1)
                {
                    message.tail_light_feedback = true;
                }
                else{
                    message.tail_light_feedback = false;
                }
                if(auto_data_feedback.data_403.r_steer_light_feedback_403==1)
                {
                    message.r_steer_light_feedback = true; 
                }
                else{
                    message.r_steer_light_feedback = false;
                }
                if(auto_data_feedback.data_403.l_steer_light_feedback_403==1)
                {
                    message.l_steer_light_feedback = true; 
                }
                else{
                    message.l_steer_light_feedback = false;
                }
                message.mode_feedback = auto_data_feedback.data_403.mode_feedback_403;
                message.gear_feedback = auto_data_feedback.data_403.gear_feedback_403;
                message.braking_feedback = auto_data_feedback.data_403.braking_feedback_403;
                message.f_steer_feedback = auto_data_feedback.data_403.f_steer_feedback_403;
                message.speed_feedback = auto_data_feedback.data_403.speed_feedback_403;

                pub_->publish(message);
            }
            else{
                return;
            }

        }

        rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr sub_;
        rclcpp::Publisher<pix_driver_msg::msg::PixloopFeedback>::SharedPtr pub_;
};

} // pix_driver
} // drivers
} // autoware

// RCLCPP_COMPONENTS_REGISTER_NODE(autoware::drivers::pix_driver_ros2::PixDriverSubscriber)
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<autoware::drivers::pix_driver::PixDriverRead>());
    rclcpp::shutdown();
    return 0;
}
