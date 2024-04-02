//
// Created by Aubrey 3/31/2024
//

#ifndef NIFTYDSC_CHARSPINNER_HPP
#define NIFTYDSC_CHARSPINNER_HPP

#include <vector>
#include "Spinner.hpp"

class CharSpinner : public Spinner
{
private:
    std::vector<char> char_value_list;
    uint8_t           char_size_multiplier;

    void drawValue(uint16_t color, uint16_t background_color);

public:
    void init(Adafruit_GFX*     _display,
              int16_t           _x,
              int16_t           _y,
              uint16_t          _default_color,
              uint16_t          _background_color,
              uint16_t          _select_color,
              const uint8_t*    _select_icon,
              int16_t           _select_icon_w,
              int16_t           _select_icon_h,
              std::vector<char> _char_value_list,
              uint8_t           _char_size_multiplier,
              int16_t           _value_x_offset,
              int16_t           _value_y_offset);
};

#endif  // NIFTYDSC_CHARSPINNER_HPP