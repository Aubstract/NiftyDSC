//
// Created by Aubrey 3/31/2024
//

#include "IconSpinner.hpp"

IconSpinner::IconSpinner() : Spinner()
{
    type = ICON_SPINNER;
}

void IconSpinner::init(Adafruit_GFX*               _display,
                       int16_t                     _x,
                       int16_t                     _y,
                       int16_t                     _w,
                       int16_t                     _h,
                       const uint8_t*              _select_icon,
                       uint16_t                    _select_color,
                       uint16_t                    _default_color,
                       uint16_t                    _background_color,
                       int16_t                     _value_x_offset,
                       int16_t                     _value_y_offset,
                       std::vector<const uint8_t*> _icon_value_list,
                       int16_t                     _icon_value_w,
                       int16_t                     _icon_value_h)
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
                  _icon_value_list.size(),
                  _value_x_offset,
                  _value_y_offset);
    icon_value_list = _icon_value_list;
    icon_value_w    = _icon_value_w;
    icon_value_h    = _icon_value_h;
}

void IconSpinner::drawValue(uint16_t color)
{
    debugln("Drawing IconSpinner");
    display->drawBitmap(x + value_x_offset,
                        y + value_y_offset,
                        icon_value_list.at(index),
                        icon_value_w,
                        icon_value_h,
                        color);
}

void IconSpinner::drawIconSpinner()
{
    debugln("Drawing IconSpinner");

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