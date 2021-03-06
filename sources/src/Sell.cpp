/**
 * Copyright (C) JoyStream - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Bedeho Mender <bedeho.mender@gmail.com>, June 26 2015
 */

#include <protocol_wire/Sell.hpp>

namespace joystream {
namespace protocol_wire {

    Sell::Sell()
        :Sell(SellerTerms(), 0) {
    }

    Sell::Sell(const SellerTerms & terms, uint32_t index)
        : _terms(terms)
        , _index(index) {
    }

    bool Sell::operator==(const Sell & rhs) const {
        return _terms == rhs.terms() &&
               _index == rhs.index();
    }

    SellerTerms Sell::terms() const  {
        return _terms;
    }

    void Sell::setTerms(const SellerTerms & terms) {
        _terms = terms;
    }

    uint32_t Sell::index() const {
        return _index;
    }

    void Sell::setIndex(uint32_t index) {
        _index = index;
    }

    std::ostream& operator<<(std::ostream &os, const Sell &obj)
    {
        return os << "Sales terms = " << obj.terms() << "\tTerms index = " << obj.index();
    }
}
}
