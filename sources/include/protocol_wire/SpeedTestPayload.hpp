/**
 * Copyright (C) JoyStream - All Rights Reserved
 */

#ifndef JOYSTREAM_PROTOCOL_WIRE_SPEED_TEST_PAYLOAD_HPP
#define JOYSTREAM_PROTOCOL_WIRE_SPEED_TEST_PAYLOAD_HPP

#include <stdint.h>
#include <iostream>

namespace joystream {
namespace protocol_wire {

    class SpeedTestPayload {

    public:

        // Default constructor
        SpeedTestPayload();

        SpeedTestPayload(const uint32_t payloadSize);

        bool operator==(const SpeedTestPayload &) const;

        // Getters and setters
        uint32_t payloadSize() const;
        void setPayloadSize(const uint32_t);

        // Overload the << operator for easiness in debugging with GTest
        friend std::ostream& operator<<(std::ostream &os, const SpeedTestPayload &obj);

    private:

        // Size of the speedtest payload to send
        uint32_t _payloadSize;
    };

}
}

#endif // JOYSTREAM_PROTOCOL_WIRE_BUY_HPP
