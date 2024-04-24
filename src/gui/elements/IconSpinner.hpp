//
// Created by Aubrey 3/31/2024
//

#ifndef NIFTYDSC_ICONSPINNER_HPP
#define NIFTYDSC_ICONSPINNER_HPP

#include "Spinner.hpp"
#include <vector>

class IconSpinner : public Spinner
{
private:
    std::vector<const uint8_t*> icon_value_list;
    int16_t                     icon_value_w;
    int16_t                     icon_value_h;

    void drawValue(uint16_t color);

public:
    void init(Adafruit_GFX*               _display,
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
              int16_t                     _icon_value_h);

    void draw() override;
};

#endif  // NIFTYDSC_ICONSPINNER_HPP