#include "message_403.hpp"

namespace autoware
{
namespace drivers
{
namespace pix_driver
{
Auto_data_feedback_403::Auto_data_feedback_403(void)
{
    decode_Vehicle_status_feedback_403();
    decode_R_steer_light_feedback_403();
    decode_mode_feedback_403();
    decode_Braking_light_feedback_403();
    decode_Braking_feedback_403();
    decode_L_steer_light_feedback_403();
    decode_Speed_feedback_403();
    decode_F_steer_feedback_403();
    decode_Gear_feedback_403();
    decode_Tail_light_feedback_403();
    decode_Vehicle_mode_feedback_403();
    decode_Emergency_stop_feedback_403();
}

void Auto_data_feedback_403::decode_Vehicle_status_feedback_403()
{
    strcpy(Vehicle_status_feedback_403.signal_name, "Vehicle_status_feedback");
    Vehicle_status_feedback_403.position = 60;
    Vehicle_status_feedback_403.length = 1;
    Vehicle_status_feedback_403.mode = 1;
    Vehicle_status_feedback_403.is_signed = 0;
    Vehicle_status_feedback_403.factor = 1.0;
    Vehicle_status_feedback_403.bias = 0.0;
    Vehicle_status_feedback_403.low = 0.0;
    Vehicle_status_feedback_403.high = 0.0;
    strcpy(Vehicle_status_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_R_steer_light_feedback_403()
{
    strcpy(R_steer_light_feedback_403.signal_name, "R_steer_light_feedback");
    R_steer_light_feedback_403.position = 57;
    R_steer_light_feedback_403.length = 1;
    R_steer_light_feedback_403.mode = 1;
    R_steer_light_feedback_403.is_signed = 0;
    R_steer_light_feedback_403.factor = 1.0;
    R_steer_light_feedback_403.bias = 0.0;
    R_steer_light_feedback_403.low = 0.0;
    R_steer_light_feedback_403.high = 0.0;
    strcpy(R_steer_light_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_mode_feedback_403()
{
    strcpy(mode_feedback_403.signal_name, "mode_feedback");
    mode_feedback_403.position = 52;
    mode_feedback_403.length = 2;
    mode_feedback_403.mode = 1;
    mode_feedback_403.is_signed = 0;
    mode_feedback_403.factor = 1.0;
    mode_feedback_403.bias = 0.0;
    mode_feedback_403.low = 0.0;
    mode_feedback_403.high = 0.0;
    strcpy(mode_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Braking_light_feedback_403()
{
    strcpy(Braking_light_feedback_403.signal_name, "Braking_light_feedback");
    Braking_light_feedback_403.position = 59;
    Braking_light_feedback_403.length = 1;
    Braking_light_feedback_403.mode = 1;
    Braking_light_feedback_403.is_signed = 0;
    Braking_light_feedback_403.factor = 1.0;
    Braking_light_feedback_403.bias = 0.0;
    Braking_light_feedback_403.low = 0.0;
    Braking_light_feedback_403.high = 0.0;
    strcpy(Braking_light_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Braking_feedback_403()
{
    strcpy(Braking_feedback_403.signal_name, "Braking_feedback");
    Braking_feedback_403.position = 32;
    Braking_feedback_403.length = 16;
    Braking_feedback_403.mode = 1;
    Braking_feedback_403.is_signed = 0;
    Braking_feedback_403.factor = 0.01;
    Braking_feedback_403.bias = 0.0;
    Braking_feedback_403.low = 0.0;
    Braking_feedback_403.high = 655.35;
    strcpy(Braking_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_L_steer_light_feedback_403()
{
    strcpy(L_steer_light_feedback_403.signal_name, "L_steer_light_feedback");
    L_steer_light_feedback_403.position = 56;
    L_steer_light_feedback_403.length = 1;
    L_steer_light_feedback_403.mode = 1;
    L_steer_light_feedback_403.is_signed = 0;
    L_steer_light_feedback_403.factor = 1.0;
    L_steer_light_feedback_403.bias = 0.0;
    L_steer_light_feedback_403.low = 0.0;
    L_steer_light_feedback_403.high = 0.0;
    strcpy(L_steer_light_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Speed_feedback_403()
{
    strcpy(Speed_feedback_403.signal_name, "Speed_feedback");
    Speed_feedback_403.position = 0;
    Speed_feedback_403.length = 16;
    Speed_feedback_403.mode = 1;
    Speed_feedback_403.is_signed = 1;
    Speed_feedback_403.factor = 1.0;
    Speed_feedback_403.bias = 0.0;
    Speed_feedback_403.low = -600.0;
    Speed_feedback_403.high = 600.0;
    strcpy(Speed_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_F_steer_feedback_403()
{
    strcpy(F_steer_feedback_403.signal_name, "F_steer_feedback");
    F_steer_feedback_403.position = 16;
    F_steer_feedback_403.length = 16;
    F_steer_feedback_403.mode = 1;
    F_steer_feedback_403.is_signed = 1;
    F_steer_feedback_403.factor = 1.0;
    F_steer_feedback_403.bias = 750.0;
    F_steer_feedback_403.low = 650.0;
    F_steer_feedback_403.high = 850.0;
    strcpy(F_steer_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Gear_feedback_403()
{
    strcpy(Gear_feedback_403.signal_name, "Gear_feedback");
    Gear_feedback_403.position = 48;
    Gear_feedback_403.length = 2;
    Gear_feedback_403.mode = 1;
    Gear_feedback_403.is_signed = 0;
    Gear_feedback_403.factor = 1.0;
    Gear_feedback_403.bias = 0.0;
    Gear_feedback_403.low = 0.0;
    Gear_feedback_403.high = 3.0;
    strcpy(Gear_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Tail_light_feedback_403()
{
    strcpy(Tail_light_feedback_403.signal_name, "Tail_light_feedback");
    Tail_light_feedback_403.position = 58;
    Tail_light_feedback_403.length = 1;
    Tail_light_feedback_403.mode = 1;
    Tail_light_feedback_403.is_signed = 0;
    Tail_light_feedback_403.factor = 1.0;
    Tail_light_feedback_403.bias = 0.0;
    Tail_light_feedback_403.low = 0.0;
    Tail_light_feedback_403.high = 0.0;
    strcpy(Tail_light_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Vehicle_mode_feedback_403()
{
    strcpy(Vehicle_mode_feedback_403.signal_name, "Vehicle_mode_feedback");
    Vehicle_mode_feedback_403.position = 61;
    Vehicle_mode_feedback_403.length = 1;
    Vehicle_mode_feedback_403.mode = 1;
    Vehicle_mode_feedback_403.is_signed = 0;
    Vehicle_mode_feedback_403.factor = 1.0;
    Vehicle_mode_feedback_403.bias = 0.0;
    Vehicle_mode_feedback_403.low = 0.0;
    Vehicle_mode_feedback_403.high = 0.0;
    strcpy(Vehicle_mode_feedback_403.unit, "");
}

void Auto_data_feedback_403::decode_Emergency_stop_feedback_403()
{
    strcpy(Emergency_stop_feedback_403.signal_name, "Emergency_stop_feedback");
    Emergency_stop_feedback_403.position = 62;
    Emergency_stop_feedback_403.length = 1;
    Emergency_stop_feedback_403.mode = 1;
    Emergency_stop_feedback_403.is_signed = 0;
    Emergency_stop_feedback_403.factor = 1.0;
    Emergency_stop_feedback_403.bias = 0.0;
    Emergency_stop_feedback_403.low = 0.0;
    Emergency_stop_feedback_403.high = 0.0;
    strcpy(Emergency_stop_feedback_403.unit, "");
}

void Auto_data_feedback_403::reset_data()
{
    for(uint i=0;i<8;i++)
    {
        data_matrix[i] = 0;
    }
}

void Auto_data_feedback_403::set_Emergency_stop_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 1;
    t0 >>= 7;

    int signal_value = t0;
    data_403.emergency_stop_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Vehicle_mode_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 2;
    t0 >>= 7;

    int signal_value = t0;
    data_403.vehicle_mode_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Vehicle_status_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 3;
    t0 >>= 7;

    int signal_value = t0;
    data_403.vehicle_status_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Braking_light_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 4;
    t0 >>= 7;

    int signal_value = t0;
    data_403.braking_light_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Tail_light_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 5;
    t0 >>= 7;

    int signal_value = t0;
    data_403.tail_light_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_R_steer_light_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 6;
    t0 >>= 7;

    int signal_value = t0;
    data_403.r_steer_light_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_L_steer_light_feedback_403()
{
    uint8_t t0 = data_matrix[7];

    t0 <<= 7;
    t0 >>= 7;

    int signal_value = t0;
    data_403.l_steer_light_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_mode_feedback_403()
{
    uint8_t t0 = data_matrix[6];

    t0 <<= 2;
    t0 >>= 6;

    int signal_value = t0;

    data_403.mode_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Gear_feedback_403()
{
    uint8_t t0 = data_matrix[6];

    t0 <<= 6;
    t0 >>= 6;

    int signal_value = t0;
    data_403.gear_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_Braking_feedback_403()
{
    int32_t t1 = data_matrix[5];
    int32_t t0 = data_matrix[4];

    t1 <<= 8;
    t1 |= t0;
    t1 <<= 16;
    t1 >>= 16;

    int signal_value = t1;
    data_403.braking_feedback_403 = signal_value;
}
void Auto_data_feedback_403::set_F_steer_feedback_403()
{
    int32_t t1 = data_matrix[3];
    int32_t t0 = data_matrix[2];

    t1 <<= 8;
    t1 |= t0;
    t1 <<= 16;
    t1 >>= 16;

    int signal_value = t1;
    data_403.f_steer_feedback_403 = signal_value;
}

void Auto_data_feedback_403::set_Speed_feedback_403()
{
    int32_t t1 = data_matrix[1];
    int32_t t0 = data_matrix[0];

    t1 <<= 8;
    t1 |= t0;
    t1 <<= 16;
    t1 >>= 16;

    int signal_value = t1;
    data_403.speed_feedback_403 = signal_value;
}

uint8_t * Auto_data_feedback_403::get_matrix_data()
{
    return data_matrix;
}

void Auto_data_feedback_403::update_data(uint8_t can_data[8])
{
    for(uint i=0;i<8;i++)
    {
        data_matrix[i] = can_data[i];
    }

    set_Emergency_stop_feedback_403();
    set_Vehicle_mode_feedback_403();
    set_Vehicle_status_feedback_403();
    set_Braking_light_feedback_403();
    set_Tail_light_feedback_403();
    set_R_steer_light_feedback_403();
    set_L_steer_light_feedback_403();
    set_mode_feedback_403();
    set_Gear_feedback_403();
    set_Braking_feedback_403();
    set_F_steer_feedback_403();
    set_Speed_feedback_403();
}

} // pix_driver
} // drivers
} // autoware