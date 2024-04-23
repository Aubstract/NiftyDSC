//
// Created by Aubrey on 3/26/2024.
//

#ifndef NIFTYDSC_PACKEDRADEC_HPP
#define NIFTYDSC_PACKEDRADEC_HPP

#include <string>
#include <cassert>
#include <cstdint>

class PackedRaDec
{
private:
    uint8_t  upper;
    uint32_t lower;
    // static const uint8_t RA_SIG_BITS = 17;
    static const uint8_t DEC_SIG_BITS = 20;

    static uint32_t raToUint(uint32_t, uint32_t, uint32_t);
    static uint32_t decToUint(int32_t, uint32_t, uint32_t);

public:
    PackedRaDec(uint32_t, uint32_t, uint32_t, int32_t, uint32_t, uint32_t);

    uint32_t getRa() const;
    int32_t  getDec() const;
};

#endif  // NIFTYDSC_PACKEDRADEC_HPP
