// Created by Aubrey on 5/12/2024

#include "packed_ra_dec.hpp"

uint32_t ra_to_uint(uint32_t hour, uint32_t min, uint32_t sec)
{
    return hour * 3600 + min * 60 + sec;
}

uint32_t dec_to_uint(int32_t deg, uint32_t min, uint32_t sec)
{
    bool deg_neg = false;
    if (deg < 0)
    {
        deg_neg = true;
        deg *= -1;
    }

    auto udeg = (uint32_t)(deg);

    return (udeg * 3600 + min * 60 + sec) | uint32_t(deg_neg) << (DEC_SIG_BITS - 1);
}

uint32_t get_ra_uint(packed_ra_dec& packed)
{
    static const uint8_t RA_UPPER_BITS_SHIFT_AMT = 32 - DEC_SIG_BITS;
    return packed.upper << RA_UPPER_BITS_SHIFT_AMT | packed.lower >> DEC_SIG_BITS;
}

int32_t get_dec_int(packed_ra_dec& packed)
{
    static const uint32_t sign_bit_bitmask = uint32_t(1) << (DEC_SIG_BITS - 1);
    static const uint32_t value_bitmask    = sign_bit_bitmask - 1;

    auto sdec = (int32_t)(packed.lower & value_bitmask);

    return packed.lower & sign_bit_bitmask ? sdec * -1 : sdec;
}

void unpack_ra(packed_ra_dec& packed, uint32_t& ra_hour, uint32_t& ra_min, uint32_t& ra_sec)
{
    uint32_t ra = get_ra_uint(packed);

    ra_hour = ra / 3600;
    ra %= 3600;
    ra_min = ra / 60;
    ra_sec = ra % 60;
}

void unpack_dec(packed_ra_dec& packed, int32_t& dec_deg, uint32_t& dec_min, uint32_t& dec_sec)
{
    int32_t dec = get_dec_int(packed);

    bool is_neg = dec < 0;
    if (is_neg)
    {
        dec *= -1;
    }

    dec_deg = dec / 3600;
    dec %= 3600;
    dec_min = dec / 60;
    dec_sec = dec % 60;

    if (is_neg)
    {
        dec_deg *= -1;
    }
}

void init_packed_ra_dec(packed_ra_dec& packed,
                        uint32_t       ra_hour,
                        uint32_t       ra_min,
                        uint32_t       ra_sec,
                        int32_t        dec_deg,
                        uint32_t       dec_min,
                        uint32_t       dec_sec)
{
    static const uint8_t RA_UPPER_BITS_SHIFT_AMT = 32 - DEC_SIG_BITS;

    uint32_t ra  = ra_to_uint(ra_hour, ra_min, ra_sec);
    uint32_t dec = dec_to_uint(dec_deg, dec_min, dec_sec);

    packed.lower = dec;
    packed.lower |= ra << DEC_SIG_BITS;
    packed.upper = ra >> RA_UPPER_BITS_SHIFT_AMT;
}