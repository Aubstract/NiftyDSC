// Created by Aubrey on 4/29/2024

#include "catalogs/packed_ra_dec.hpp"
#include <cstdint>
#include <cmath>

double calculate_julian_date(int16_t  year,
                             uint8_t  month,
                             uint8_t  day,
                             uint8_t  hour,
                             uint8_t  minute,
                             uint8_t  second,
                             uint16_t millisecond)
{
    int16_t a = (14 - month) / 12;
    int16_t y = year + 4800 - a;
    int16_t m = month + 12 * a - 3;

    int32_t jdn = day + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;

    double jd = (double) jdn + ((double) hour - 12.0) / 24.0 + (double) minute / 1440.0
                + (double) second / 86400.0 + (double) millisecond / 86400000.0;

    return jd;
}

void ra_dec_to_alt_az(
    double lat, double lon, double jd, uint32_t ra_sec, int32_t dec_sec, int32_t& alt, uint32_t& az)
{
    // Convert RA and Dec from seconds to degrees
    double ra  = ra_sec * 360.0 / 86400.0;
    double dec = dec_sec * 360.0 / 1296000.0;

    // Convert angles from degrees to radians
    double ra_rad  = ra * M_PI / 180.0;
    double dec_rad = dec * M_PI / 180.0;
    double lat_rad = lat * M_PI / 180.0;
    double lon_rad = lon * M_PI / 180.0;

    // Calculate the local sidereal time (LST)
    double lst = (100.46 + 0.985647 * (jd - 2451545.0) + lon_rad) * M_PI / 12.0;

    // Calculate the hour angle (HA)
    double ha = lst - ra_rad;

    // Calculate the altitude (Alt)
    double sin_alt = sin(dec_rad) * sin(lat_rad) + cos(dec_rad) * cos(lat_rad) * cos(ha);
    alt            = asin(sin_alt) * 180.0 / M_PI;

    // Calculate the azimuth (Az)
    double cos_az = (sin(dec_rad) - sin(lat_rad) * sin_alt) / (cos(lat_rad) * cos(asin(sin_alt)));
    az            = acos(cos_az) * 180.0 / M_PI;

    // Adjust the azimuth based on the hour angle
    if (sin(ha) < 0)
        az = 360.0 - az;
}