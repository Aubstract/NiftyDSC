//
// Created by Aubrey 3/31/2024
//

#include "CharSpinner.hpp"

void CharSpinner::init(Adafruit_GFX*     _display,
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
                       uint8_t           _char_size_multiplier)
{
    Spinner::init(_display,
                  _x,
                  _y,
                  _w,
                  _h,
                  _select_icon,
                  _select_color,
                  _default_color,
                  _background_color,
                  _char_value_list.size(),
                  _value_x_offset,
                  _value_y_offset);
    char_value_list      = _char_value_list;
    char_size_multiplier = _char_size_multiplier;
}

void CharSpinner::drawValue(uint16_t color)
{
    display->drawChar(x + value_x_offset,
                      y + value_y_offset,
                      char_value_list.at(index),
                      color,
                      background_color,
                      char_size_multiplier);
}

void CharSpinner::draw()
{
    if (selected)
    {
        display->fillRect(x, y, w, h, background_color);
        drawValue(select_color);
        display->drawBitmap(x, y, select_icon, w, h, default_color);
    }
    else
    {
        display->fillRect(x, y, w, h, background_color);
        drawValue(default_color);
    }
}