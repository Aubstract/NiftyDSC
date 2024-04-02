//
// Created by Aubrey 3/31/2024
//

#include "IconSpinner.hpp"

void IconSpinner::init(Adafruit_GFX*               _display,
                       int16_t                     _x,
                       int16_t                     _y,
                       uint16_t                    _default_color,
                       uint16_t                    _background_color,
                       uint16_t                    _select_color,
                       const uint8_t*              _select_icon,
                       int16_t                     _select_icon_w,
                       int16_t                     _select_icon_h,
                       std::vector<const uint8_t*> _icon_value_list,
                       int16_t                     _icon_value_w,
                       int16_t                     _icon_value_h,
                       int16_t                     _value_x_offset,
                       int16_t                     _value_y_offset)
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
                  _icon_value_list.size(),
                  _value_x_offset,
                  _value_y_offset);
    icon_value_list = _icon_value_list;
    icon_value_w    = _icon_value_w;
    icon_value_h    = _icon_value_h;
}

void IconSpinner::drawValue(uint16_t color, uint16_t background_color)
{
    display->drawBitmap(x + value_x_offset,
                        y + value_y_offset,
                        icon_value_list.at(index),
                        icon_value_w,
                        icon_value_h,
                        color);
}