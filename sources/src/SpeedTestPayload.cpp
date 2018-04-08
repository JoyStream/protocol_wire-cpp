/**
 * Copyright (C) JoyStream - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Bedeho Mender <bedeho.mender@gmail.com>, June 26 2015
 */

#include <protocol_wire/SpeedTestPayload.hpp>

namespace joystream {
namespace protocol_wire {

    SpeedTestPayload::SpeedTestPayload() :
      _payloadSize(0) {

    }

    SpeedTestPayload::SpeedTestPayload(const uint32_t payloadSize)
        : _payloadSize(payloadSize) {
    }

    bool SpeedTestPayload::operator==(const SpeedTestPayload & o) const {
        return _payloadSize == o.payloadSize();
    }

    uint32_t SpeedTestPayload::payloadSize() const {
        return _payloadSize;
    }

    void SpeedTestPayload::setPayloadSize(const uint32_t payloadSize) {
        _payloadSize = payloadSize;
    }

    std::ostream& operator<<(std::ostream &os, const SpeedTestPayload &obj)
    {
        return os << "SpeedTestPayload payloadSize = " << obj.payloadSize();
    }
}
}
