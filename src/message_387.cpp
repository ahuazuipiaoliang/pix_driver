#include "message_387.hpp"

namespace autoware
{
namespace drivers
{
namespace pix_driver
{
Auto_control_387::Auto_control_387(void)
{
    decode_right_light_387();
    decode_left_light_387();
    decode_self_driving_enable_387();
    decode_EPB_387();
    decode_Gear_shift_387();
    decode_Braking_387();
    decode_Speed_387();
    decode_Steering_387();
    decode_mode_selection_387();
    decode_Front_light_387();
    decode_State_control_387();
    decode_Advanced_mode_387();
    decode_Speed_mode_387();
}

void Auto_control_387::decode_right_light_387()
{
    strcpy(right_light_387.signal_name, "right_light");
    right_light_387.position = 58;
    right_light_387.length = 1;
    right_light_387.mode = 1;
    right_light_387.is_signed = 0;
    right_light_387.factor = 1.0;
    right_light_387.bias = 0.0;
    right_light_387.low = 0.0;
    right_light_387.high = 0.0;
    strcpy(right_light_387.unit, "");
}

void Auto_control_387::decode_left_light_387()
{
    strcpy(left_light_387.signal_name, "left_light");
    left_light_387.position = 56;
    left_light_387.length = 1;
    left_light_387.mode = 1;
    left_light_387.is_signed = 0;
    left_light_387.factor = 1.0;
    left_light_387.bias = 0.0;
    left_light_387.low = 0.0;
    left_light_387.high = 1.0;
    strcpy(left_light_387.unit, "");
}

void Auto_control_387::decode_self_driving_enable_387()
{
    strcpy(self_driving_enable_387.signal_name, "self_driving_enable");
    self_driving_enable_387.position = 63;
    self_driving_enable_387.length = 1;
    self_driving_enable_387.mode = 1;
    self_driving_enable_387.is_signed = 0;
    self_driving_enable_387.factor = 1.0;
    self_driving_enable_387.bias = 0.0;
    self_driving_enable_387.low = 0.0;
    self_driving_enable_387.high = 1.0;
    strcpy(self_driving_enable_387.unit, "");
}

void Auto_control_387::decode_EPB_387()
{
    strcpy(EPB_387.signal_name, "EPB");
    EPB_387.position = 59;
    EPB_387.length = 1;
    EPB_387.mode = 1;
    EPB_387.is_signed = 0;
    EPB_387.factor = 1.0;
    EPB_387.bias = 0.0;
    EPB_387.low = 0.0;
    EPB_387.high = 0.0;
    strcpy(EPB_387.unit, "");
}

void Auto_control_387::decode_Gear_shift_387()
{
    strcpy(Gear_shift_387.signal_name, "Gear_shift");
    Gear_shift_387.position = 48;
    Gear_shift_387.length = 4;
    Gear_shift_387.mode = 1;
    Gear_shift_387.is_signed = 0;
    Gear_shift_387.factor = 1.0;
    Gear_shift_387.bias = 0.0;
    Gear_shift_387.low = 0.0;
    Gear_shift_387.high = 15.0;
    strcpy(Gear_shift_387.unit, "");
}

void Auto_control_387::decode_Braking_387()
{
    strcpy(Braking_387.signal_name, "Braking");
    Braking_387.position = 16;
    Braking_387.length = 16;
    Braking_387.mode = 1;
    Braking_387.is_signed = 0;
    Braking_387.factor = 1.0;
    Braking_387.bias = 0.0;
    Braking_387.low = -1024.0;
    Braking_387.high = 1024.0;
    strcpy(Braking_387.unit, "");
}

void Auto_control_387::decode_Speed_387()
{
    strcpy(Speed_387.signal_name, "Speed");
    Speed_387.position = 0;
    Speed_387.length = 16;
    Speed_387.mode = 1;
    Speed_387.is_signed = 0;
    Speed_387.factor = 1.0;
    Speed_387.bias = 0.0;
    Speed_387.low = 0.0;
    Speed_387.high = 1024.0;
    strcpy(Speed_387.unit, "");
}

void Auto_control_387::decode_Steering_387()
{
    strcpy(Steering_387.signal_name, "Steering");
    Steering_387.position = 32;
    Steering_387.length = 16;
    Steering_387.mode = 1;
    Steering_387.is_signed = 1;
    Steering_387.factor = 1.0;
    Steering_387.bias = 0.0;
    Steering_387.low = -32768.0;
    Steering_387.high = 32767.0;
    strcpy(Steering_387.unit, "");
}

void Auto_control_387::decode_mode_selection_387()
{
    strcpy(mode_selection_387.signal_name, "mode_selection");
    mode_selection_387.position = 52;
    mode_selection_387.length = 4;
    mode_selection_387.mode = 1;
    mode_selection_387.is_signed = 0;
    mode_selection_387.factor = 1.0;
    mode_selection_387.bias = 0.0;
    mode_selection_387.low = 0.0;
    mode_selection_387.high = 15.0;
    strcpy(mode_selection_387.unit, "");
}

void Auto_control_387::decode_Front_light_387()
{
    strcpy(Front_light_387.signal_name, "Front_light");
    Front_light_387.position = 60;
    Front_light_387.length = 1;
    Front_light_387.mode = 1;
    Front_light_387.is_signed = 0;
    Front_light_387.factor = 1.0;
    Front_light_387.bias = 0.0;
    Front_light_387.low = 0.0;
    Front_light_387.high = 0.0;
    strcpy(Front_light_387.unit, "");
}

void Auto_control_387::decode_State_control_387()
{
    strcpy(State_control_387.signal_name, "State_control");
    State_control_387.position = 57;
    State_control_387.length = 1;
    State_control_387.mode = 1;
    State_control_387.is_signed = 0;
    State_control_387.factor = 1.0;
    State_control_387.bias = 0.0;
    State_control_387.low = 0.0;
    State_control_387.high = 0.0;
    strcpy(State_control_387.unit, "");
}

void Auto_control_387::decode_Advanced_mode_387()
{
    strcpy(Advanced_mode_387.signal_name, "Advanced_mode");
    Advanced_mode_387.position = 61;
    Advanced_mode_387.length = 1;
    Advanced_mode_387.mode = 1;
    Advanced_mode_387.is_signed = 0;
    Advanced_mode_387.factor = 1.0;
    Advanced_mode_387.bias = 0.0;
    Advanced_mode_387.low = 0.0;
    Advanced_mode_387.high = 1.0;
    strcpy(Advanced_mode_387.unit, "");
}

void Auto_control_387::decode_Speed_mode_387()
{
    strcpy(Speed_mode_387.signal_name, "Speed_mode");
    Speed_mode_387.position = 62;
    Speed_mode_387.length = 1;
    Speed_mode_387.mode = 1;
    Speed_mode_387.is_signed = 0;
    Speed_mode_387.factor = 1.0;
    Speed_mode_387.bias = 0.0;
    Speed_mode_387.low = 0.0;
    Speed_mode_387.high = 0.0;
    strcpy(Speed_mode_387.unit, "");
}

void Auto_control_387::set_right_light_387(double data)
{
    int signal_value = static_cast<int>((data-right_light_387.bias)/right_light_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 2;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_left_light_387(double data)
{
    int signal_value = static_cast<int>((data-left_light_387.bias)/left_light_387.factor);
    uint8_t t_0;
    t_0 = signal_value >> 0;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_self_driving_enable_387(double data)
{
    int signal_value = static_cast<int>((data-self_driving_enable_387.bias)/self_driving_enable_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 7;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_EPB_387(double data)
{
    int signal_value = static_cast<int>((data-EPB_387.bias)/EPB_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 3;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_Gear_shift_387(double data)
{
    int signal_value = static_cast<int>((data-Gear_shift_387.bias)/Gear_shift_387.factor);
    uint8_t t_0;
    t_0 = signal_value;
    data_matrix[6] += t_0;
}

void Auto_control_387::set_Braking_387(double data)
{
    int signal_value = static_cast<int>((data-Braking_387.bias)/Braking_387.factor);
    uint8_t t_0, t_1;
    t_0 = signal_value;
    t_1 = signal_value >> 8;
    data_matrix[2] += t_0;
    data_matrix[3] += t_1;
}

void Auto_control_387::set_Speed_387(double data)
{
    int signal_value = static_cast<int>((data-Speed_387.bias)/Speed_387.factor);
    uint8_t t_0, t_1;
    t_0 = signal_value;
    t_1 = signal_value >> 8;
    data_matrix[0] += t_0;
    data_matrix[1] += t_1;
}

void Auto_control_387::set_Steering_387(double data)
{
    int signal_value = static_cast<int>((data-Steering_387.bias)/Steering_387.factor);
    uint8_t t_0, t_1;
    t_0 = signal_value;
    t_1 = signal_value >> 8;
    data_matrix[4] += t_0;
    data_matrix[5] += t_1;
}

void Auto_control_387::set_mode_selection_387(double data)
{
    int signal_value = static_cast<int>((data-mode_selection_387.bias)/mode_selection_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 4;
    data_matrix[6] += t_0;
}

void Auto_control_387::set_Front_light_387(double data)
{
    int signal_value = static_cast<int>((data-Front_light_387.bias)/Front_light_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 4;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_State_control_387(double data)
{
    int signal_value = static_cast<int>((data-State_control_387.bias)/State_control_387.factor);
    uint8_t t_0;
    t_0 = signal_value >> 1;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_Advanced_mode_387(double data)
{
    int signal_value = static_cast<int>((data-Advanced_mode_387.bias)/Advanced_mode_387.factor);
    uint8_t t_0;
    t_0 = signal_value << 5;
    data_matrix[7] += t_0;
}

void Auto_control_387::set_Speed_mode_387(double data)
{
    int signal_value = static_cast<int>((data-Speed_mode_387.bias)/Speed_mode_387.factor);
    uint8_t t_0;
    t_0 = static_cast<unsigned char>(signal_value << 6);
    data_matrix[7] += t_0;
}

uint8_t * Auto_control_387::get_matrix_data()
{
    return data_matrix;
}

void Auto_control_387::reset_data()
{
    for(uint i=0;i<8;i++)
    {
        data_matrix[i] = 0;
    }
}

void Auto_control_387::set_message_data(
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
    int Speed_mode_387)
    {
        data_387.right_light_387 = right_light_387;
        data_387.left_light_387 = left_light_387;
        data_387.self_driving_enable_387 = self_driving_enable_387;
        data_387.EPB_387 = EPB_387;
        data_387.Gear_shift_387 = Gear_shift_387;
        data_387.Braking_387 = Braking_387;
        data_387.Speed_387 = Speed_387;
        data_387.Steering_387 = Steering_387;
        data_387.mode_selection_387 = mode_selection_387;
        data_387.Front_light_387 = Front_light_387;
        data_387.State_control_387 = State_control_387;
        data_387.Advanced_mode_387 = Advanced_mode_387;
        data_387.Speed_mode_387 = Speed_mode_387;
    }

void Auto_control_387::encode_data()
{
    reset_data();
    set_right_light_387(data_387.right_light_387);
    set_left_light_387(data_387.left_light_387);
    set_self_driving_enable_387(data_387.self_driving_enable_387);
    set_EPB_387(data_387.EPB_387);
    set_Gear_shift_387(data_387.Gear_shift_387);
    set_Braking_387(data_387.Braking_387);
    set_Speed_387(data_387.Speed_387);
    set_Steering_387(data_387.Steering_387);
    set_mode_selection_387(data_387.mode_selection_387);
    set_Front_light_387(data_387.Front_light_387);
    set_State_control_387(data_387.State_control_387);
    set_Advanced_mode_387(data_387.Advanced_mode_387);
    set_Speed_mode_387(data_387.Speed_387);
}
} // pix_driver
} // drivers
} // autoware