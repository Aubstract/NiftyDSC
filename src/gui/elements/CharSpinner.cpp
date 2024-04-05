//
// Created by Aubrey 3/31/2024
//

#include "CharSpinner.hpp"

void CharSpinner::init(Adafruit_GFX*     _display,
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
                       int16_t           _value_y_offset)
{
    Spinner::init(_display,
                  _x,
                  _y,
                  _default_color,
                  _background_color,
                  _select_color,
                  _select_icon,
                  _select_icon_w,
                  _select_icon_h,
                  _char_value_list.size(),
                  _value_x_offset,
                  _value_y_offset);
    char_value_list      = _char_value_list;
    char_size_multiplier = _char_size_multiplier;
}

void CharSpinner::drawValue(uint16_t color, uint16_t background_color)
{
    display->drawChar(x + value_x_offset,
                      y + value_y_offset,
                      char_value_list.at(index),
                      color,
                      background_color,
                      char_size_multiplier);
}