#ifndef PIX_DRIVER__CANBUS_BASIS_HPP_
#define PIX_DRIVER__CANBUS_BASIS_HPP_

#include <iostream>

using namespace std;

namespace autoware
{
namespace drivers
{
namespace pix_driver
{
struct Message {
    char message_name[50];
    uint frame_id;
    uint frame_length;
    char node[50];
};

struct Signal
{
    char message_name[50];
    char signal_name[50];
    uint position;
    uint length;
    uint mode;
    uint is_signed;
    double factor;
    double bias;
    double low;
    double high;
    char unit[50];
};


} // namespace pix_driver
} // namespace drivers
} // namespace autoware

#endif //PIX_DRIVER__CANBUS_BASIS_HPP_