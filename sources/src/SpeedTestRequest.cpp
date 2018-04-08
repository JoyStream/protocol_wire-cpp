/**
 * Copyright (C) JoyStream - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Bedeho Mender <bedeho.mender@gmail.com>, June 26 2015
 */

#include <protocol_wire/SpeedTestRequest.hpp>

namespace joystream {
namespace protocol_wire {

    SpeedTestRequest::SpeedTestRequest() :
      _payloadSize(0) {

    }

    SpeedTestRequest::SpeedTestRequest(const uint32_t payloadSize)
        : _payloadSize(payloadSize) {
    }

    bool SpeedTestRequest::operator==(const SpeedTestRequest & o) const {
        return _payloadSize == o.payloadSize();
    }

    uint32_t SpeedTestRequest::payloadSize() const {
        return _payloadSize;
    }

    void SpeedTestRequest::setPayloadSize(const uint32_t payloadSize) {
        _payloadSize = payloadSize;
    }

    std::ostream& operator<<(std::ostream &os, const SpeedTestRequest &obj)
    {
        return os << "SpeedTestRequest payloadSize = " << obj.payloadSize();
    }
}
}
