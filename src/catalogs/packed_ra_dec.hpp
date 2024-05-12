// Created by Aubrey on 3/26/2024.

#ifndef NIFTYDSC_PACKEDRADEC_HPP
    #define NIFTYDSC_PACKEDRADEC_HPP

    #include <cstdint>

const uint8_t DEC_SIG_BITS = 20;
const uint8_t RA_SIG_BITS  = 17;

struct packed_ra_dec
{
    uint8_t  upper;
    uint32_t lower;
};

uint32_t ra_to_uint(uint32_t hour, uint32_t min, uint32_t sec);
uint32_t dec_to_uint(int32_t deg, uint32_t min, uint32_t sec);
uint32_t get_ra_uint(packed_ra_dec& packed);
int32_t  get_dec_int(packed_ra_dec& packed);
void     unpack_ra(packed_ra_dec& packed, uint32_t& ra_hour, uint32_t& ra_min, uint32_t& ra_sec);
void     unpack_dec(packed_ra_dec& packed, int32_t& dec_deg, uint32_t& dec_min, uint32_t& dec_sec);
void     init_packed_ra_dec(packed_ra_dec& packed,
                            uint32_t       ra_hour,
                            uint32_t       ra_min,
                            uint32_t       ra_sec,
                            int32_t        dec_deg,
                            uint32_t       dec_min,
                            uint32_t       dec_sec);

#endif  // NIFTYDSC_PACKEDRADEC_HPP

/*
class PackedRaDec
{
private:
    uint8_t  upper;
    uint32_t lower;

    static uint32_t raToUint(uint32_t, uint32_t, uint32_t);
    static uint32_t decToUint(int32_t, uint32_t, uint32_t);

public:
    PackedRaDec(uint32_t, uint32_t, uint32_t, int32_t, uint32_t, uint32_t);

    uint32_t getRa() const;
    int32_t  getDec() const;

    void unpackRa(uint32_t&, uint32_t&, uint32_t&) const;
    void unpackDec(int32_t&, uint32_t&, uint32_t&) const;
};
*/
