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