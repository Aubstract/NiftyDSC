#include "PackedRaDec.hpp"


PackedRaDec::PackedRaDec(uint32_t ra_hour,
                         uint32_t ra_min,
                         uint32_t ra_sec,
                         int32_t  dec_deg,
                         uint32_t dec_min,
                         uint32_t dec_sec)
{
    static const uint8_t RA_UPPER_BITS_SHIFT_AMT = 32 - DEC_SIG_BITS;

    uint32_t ra  = raToUint(ra_hour, ra_min, ra_sec);
    uint32_t dec = decToUint(dec_deg, dec_min, dec_sec);

    lower = dec;
    lower |= ra << DEC_SIG_BITS;
    upper = ra >> RA_UPPER_BITS_SHIFT_AMT;
}

uint32_t PackedRaDec::getRa() const
{
    static const uint8_t RA_UPPER_BITS_SHIFT_AMT = 32 - DEC_SIG_BITS;

    return upper << RA_UPPER_BITS_SHIFT_AMT | lower >> DEC_SIG_BITS;
}

int32_t PackedRaDec::getDec() const
{
    static const uint32_t sign_bit_bitmask = uint32_t(1) << (DEC_SIG_BITS - 1);
    static const uint32_t value_bitmask    = sign_bit_bitmask - 1;

    auto sdec = static_cast<int32_t>(lower & value_bitmask);

    return lower & sign_bit_bitmask ? sdec * -1 : sdec;
}

uint32_t PackedRaDec::raToUint(uint32_t hour, uint32_t min, uint32_t sec)
{
#ifndef NDEBUG
    assert(hour < 24 && min < 60 && sec < 60);
#endif
    return hour * 3600 + min * 60 + sec;
}

uint32_t PackedRaDec::decToUint(int32_t deg, uint32_t min, uint32_t sec)
{
#ifndef NDEBUG
    assert(deg < 91 && deg > -91 && min < 60 && sec < 60);
#endif
    bool deg_neg = false;
    if (deg < 0)
    {
        deg_neg = true;
        deg *= -1;
    }

    uint32_t udeg = static_cast<uint32_t>(deg);

    return (udeg * 3600 + min * 60 + sec) | uint32_t(deg_neg) << (DEC_SIG_BITS - 1);
}
