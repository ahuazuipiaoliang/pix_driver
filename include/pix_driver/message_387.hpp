#ifndef PIX_DRIVER__MESSAGE_387_HPP_
#define PIX_DRIVER__MESSAGE_387_HPP_

#include <iostream>
#include <cstring>
#include "canbus_basic.hpp"

using namespace std;

namespace autoware
{
namespace drivers
{
namespace pix_driver
{

struct Message_data_387{
    int right_light_387;
    int left_light_387;
    int self_driving_enable_387;
    int EPB_387;
    int Gear_shift_387;
    int Braking_387;
    int Speed_387;
    int Steering_387;
    int mode_selection_387;
    int Front_light_387;
    int State_control_387;
    int Advanced_mode_387;
    int Speed_mode_387;
};


class Auto_control_387
{
    public:
        Auto_control_387();
       // ~Auto_control_387();

        // decode signals of frame 387 using functions below
        void decode_right_light_387();
        void decode_left_light_387();
        void decode_self_driving_enable_387();
        void decode_EPB_387();
        void decode_Gear_shift_387();
        void decode_Braking_387();
        void decode_Speed_387();
        void decode_Steering_387();
        void decode_mode_selection_387();
        void decode_Front_light_387();
        void decode_State_control_387();
        void decode_Advanced_mode_387();
        void decode_Speed_mode_387();

        // set signal values for 387 frame
        void set_right_light_387(double data);
        void set_left_light_387(double data);
        void set_self_driving_enable_387(double data);
        void set_EPB_387(double data);
        void set_Gear_shift_387(double data);
        void set_Braking_387(double data);
        void set_Speed_387(double data);
        void set_Steering_387(double data);
        void set_mode_selection_387(double data);
        void set_Front_light_387(double data);
        void set_State_control_387(double data);
        void set_Advanced_mode_387(double data);
        void set_Speed_mode_387(double data);

        uint8_t * get_matrix_data();
        void reset_data();
        void set_message_data(
            int right_light_387,
            int left_light_387,
            int self_driving_enable_387,
            int EPB_387,
            int Gear_shift_387,
            int Braking_387,
            int Speed_387,
            int Steering_387,
            int mode_selection_387,
            int Front_light_387,
            int State_control_387,
            int Advanced_mode_387,
            int Speed_mode_387);
        void encode_data();

        Message_data_387 data_387;
        
    private:

        Signal right_light_387;
        Signal left_light_387;
        Signal self_driving_enable_387;
        Signal EPB_387;
        Signal Gear_shift_387;
        Signal Braking_387;
        Signal Speed_387;
        Signal Steering_387;
        Signal mode_selection_387;
        Signal Front_light_387;
        Signal State_control_387;
        Signal Advanced_mode_387;
        Signal Speed_mode_387;

        uint8_t data_matrix[8];



};
} // pix_driver
} // drivers
} // autoware




#endif // PIX_DRIVER__MESSAGE_387_HPP_
