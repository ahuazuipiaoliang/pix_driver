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


These classes are a thin wrapper around C functions to manage some extra book-keeping.

A typed interface for sending is also provided for compile-time checking of data sizes.

A helper class following the named parameter idiom is provided to wrap the CAN ID.

Sending and receiving are separate concerns and thus contained in separate classes.

Finally, care is taken to avoid exposing C/POSIX headers.

## Assumptions / Known limits
<!-- Required -->

The concern for sender is only simple book-keeping and sending of data.

The same is true for the receiver.

Any complex error handling which would require receiving data is outside the concern of this class,
and should be a part of a higher level class which contains an instance of this class.

# Inputs / Outputs / API
<!-- Required -->
<!-- Things to consider:
    - How do you use the package / API? -->

See the [sender API docs](@ref drivers::socketcan::SocketCanSender).
and the [receiver API docs](@ref drivers::socketcan::SocketCanReceiver).

# Inner-workings / Algorithms
<!-- If applicable -->

These classes have no substantive logic.

Unix's select() function was used to wait for resource availability. On any error, an exception is
thrown.

# Error detection and handling
<!-- Required -->

Both the receiver and the sender classes throw exceptions in the following cases:
1. On construction if the specified interface is invalid or cannot be bound
2. If the file descriptor is unavailable within the timeout period for sending
3. Any other Unix error is raised during the sending process

Message-level error checking mechanisms a part of the CAN standard are outside the scope of this
class.

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
