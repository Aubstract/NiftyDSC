//
// Created by Aubrey 3/31/2024
//

#ifndef NIFTYDSC_CHARSPINNER_HPP
#define NIFTYDSC_CHARSPINNER_HPP

#include "Spinner.hpp"
#include "compile_conditions.hpp"
#include <vector>

class CharSpinner : public Spinner
{
private:
    std::vector<char> char_value_list;
    uint8_t           char_size_multiplier;
    void              drawValue(uint16_t);

public:
    CharSpinner();
    void init(Adafruit_GFX*     _display,
              int16_t           _x,
              int16_t           _y,
              int16_t           _w,
              int16_t           _h,
              const uint8_t*    _select_icon,
              uint16_t          _select_color,
              uint16_t          _default_color,
              uint16_t          _background_color,
              int16_t           _value_x_offset,
              int16_t           _value_y_offset,
              std::vector<char> _char_value_list,
              uint8_t           _char_size_multiplier);
    void drawCharSpinner();
};

#endif  // NIFTYDSC_CHARSPINNER_HPP