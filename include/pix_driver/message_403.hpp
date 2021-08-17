#ifndef PIX_DRIVER__MESSAGE_403_HPP_
#define PIX_DRIVER__MESSAGE_403_HPP_

#include <iostream>
#include <cstring>
#include "canbus_basic.hpp"

namespace autoware
{
namespace drivers
{
namespace pix_driver
{
struct Message_data_403{
    int emergency_stop_feedback_403;
    int vehicle_mode_feedback_403;
    int vehicle_status_feedback_403;
    int braking_light_feedback_403;
    int tail_light_feedback_403;
    int r_steer_light_feedback_403;
    int l_steer_light_feedback_403;
    int mode_feedback_403;
    int gear_feedback_403;
    int braking_feedback_403;
    int f_steer_feedback_403;
    int speed_feedback_403;
};


class Auto_data_feedback_403
{
    public:
        Auto_data_feedback_403();

        Message_data_403 data_403;
        
        void decoded_signal();

        // decode signals of frame 387 using functions below
        void decode_Vehicle_status_feedback_403();
        void decode_R_steer_light_feedback_403();
        void decode_mode_feedback_403();
        void decode_Braking_light_feedback_403();
        void decode_Braking_feedback_403();
        void decode_L_steer_light_feedback_403();
        void decode_Speed_feedback_403();
        void decode_F_steer_feedback_403();
        void decode_Gear_feedback_403();
        void decode_Tail_light_feedback_403();
        void decode_Vehicle_mode_feedback_403();
        void decode_Emergency_stop_feedback_403();

        // set signal values for 387 frame
        void set_Emergency_stop_feedback_403();
        void set_Vehicle_mode_feedback_403();
        void set_Vehicle_status_feedback_403();
        void set_Braking_light_feedback_403();
        void set_Tail_light_feedback_403();
        void set_R_steer_light_feedback_403();
        void set_L_steer_light_feedback_403();
        void set_mode_feedback_403();
        void set_Gear_feedback_403();
        void set_Braking_feedback_403();
        void set_F_steer_feedback_403();
        void set_Speed_feedback_403();

        // get data from data_matrix
        uint8_t * get_matrix_data();
        //reset data_matrix as all 0
        void reset_data();

        void update_data(uint8_t can_data[8]);
    
    private:
        uint8_t data_matrix[8];

        Signal Emergency_stop_feedback_403;
        Signal Vehicle_mode_feedback_403;
        Signal Vehicle_status_feedback_403;
        Signal Braking_light_feedback_403;
        Signal Tail_light_feedback_403;
        Signal R_steer_light_feedback_403;
        Signal L_steer_light_feedback_403;
        Signal mode_feedback_403;
        Signal Gear_feedback_403;
        Signal Braking_feedback_403;
        Signal F_steer_feedback_403;
        Signal Speed_feedback_403;
};


} // pix_driver
} // drivers
} // autoware


#endif PIX_DRIVER__MESSAGE_403_HPP_