//
// Created by Aubrey 3/31/2024
//

#ifndef NIFTYDSC_ICONSPINNER_HPP
#define NIFTYDSC_ICONSPINNER_HPP

#include <vector>
#include "Spinner.hpp"

class IconSpinner : public Spinner
{
private:
    std::vector<const uint8_t*> icon_value_list;
    int16_t                     icon_value_w;
    int16_t                     icon_value_h;

    void drawValue(uint16_t color, uint16_t background_color);

public:
    void init(Adafruit_GFX*               _display,
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
              int16_t                     _value_y_offset);
};

#endif  // NIFTYDSC_ICONSPINNER_HPP