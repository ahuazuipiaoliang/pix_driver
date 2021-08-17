pix_driver {#pix_driver}
===============

# Purpose / Use cases
<!-- Required -->
<!-- Things to consider:
    - Why did we implement this feature? -->
PIXLOOP is the world’s first smart chassis with open source software and hardware, enabling rapid as well as convenient customization on your autonomous driving products.

PIXLOOP is dedicated to enhancing the innovation in autonomous driving applications and to greatly reducing the lead time for product development.

Adopting software-defined modular design, PIXLOOP provides an open source solution that is reliable, robust, extensible, easy-to-use, high-performance, and cost-effective, specifically targeted for industries, academia and developer communities.  

We want to using Autoware.auto with PIXLOOP chassis, since we develop this ros2 driver.

# Design
<!-- Required -->
<!-- Things to consider:
    - How does it work? -->
Using third party socket can driver for receiving and sending canbus messages in order to get access to the canbus interface of chassis.

These classes are a thin wrapper around C functions to convert canbus messages and signals.

Subscribe "can_msgs/Frame" message from topic "/from_can_bus" to decode 0x193 frame, which decode the feedback frame from chassis, then puiblish "pix_driver_msg/PixloopFeedback" message .

Subscribe "pix_driver_msg/PixloopControl" message from topic "/pix_control_cmd", using "pix_driver_write" to encode 0x183 canbus messages which is the control frame of chassis, then publish "can_msgs/Frame" message to topic "to_can_bus".

## Assumptions / Known limits
<!-- Required -->
Aware that this driver is only for pixloop chassis, different chassises have different dynamics.

You should calibrate dynamics of chassis before you use.

# Inputs / Outputs / API
<!-- Required -->
<!-- Things to consider:
    - How do you use the package / API? -->


# Inner-workings / Algorithms
<!-- If applicable -->



# Error detection and handling
<!-- Required -->


# Security considerations
<!-- Required -->
<!-- Things to consider:
- Spoofing (How do you check for and handle fake input?)
- Tampering (How do you check for and handle tampered input?)
- Repudiation (How are you affected by the actions of external actors?).
- Information Disclosure (Can data leak?).
- Denial of Service (How do you handle spamming?).
- Elevation of Privilege (Do you need to change permission levels during execution?) -->

This component exposes any security concerns that CAN might have.

# References / External links
<!-- Optional -->

API inspirations:
1. [python-can](https://python-can.readthedocs.io/en/master/bus.html)
2. [qtcanbus](https://doc.qt.io/qt-5.9/qcanbusdevice.html#writeFrame)
3. [rust socketcan](https://docs.rs/socketcan/1.7.0/socketcan/struct.CANSocket.html)

Implementation-specific references:
1. [SocketCAN reference](https://www.kernel.org/doc/Documentation/networking/can.txt)
2. [socket](http://man7.org/linux/man-pages/man2/socket.2.html)
3. [bind](http://man7.org/linux/man-pages/man2/bind.2.html)
4. [send](http://man7.org/linux/man-pages/man2/send.2.html)
5. [ioctl](http://man7.org/linux/man-pages/man2/ioctl.2.html)
6. [close](http://man7.org/linux/man-pages/man2/close.2.html)

CAN-related references:
1. [KVaser CAN Protocol Tour](https://www.kvaser.com/can-protocol-tutorial/)
2. [Kvaser Higher Level Protocols](https://www.kvaser.com/about-can/higher-layer-protocols/)

# Future extensions / Unimplemented parts
<!-- Optional -->

- AutoSAR/PCLint fixes around FDSET and select()
