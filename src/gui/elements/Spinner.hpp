//
// Created by Aubrey on 3/30/2024.
//

#ifndef NIFTYDSC_SPINNER_HPP
#define NIFTYDSC_SPINNER_HPP

#include "UIElement.hpp"
#include <Adafruit_GFX.h>
#include <cstdint>

class Spinner : public UIElement
{
protected:
    uint8_t value_list_len;
    int16_t value_x_offset;
    int16_t value_y_offset;
    uint8_t index;

public:
    Spinner();
    void init(Adafruit_GFX*  _display,
              int16_t        _x,
              int16_t        _y,
              int16_t        _w,
              int16_t        _h,
              const uint8_t* _select_icon,
              uint16_t       _select_color,
              uint16_t       _default_color,
              uint16_t       _background_color,
              uint8_t        _value_list_len,
              int16_t        _value_x_offset = 0,
              int16_t        _value_y_offset = 0);

    void increment();
    void decrement();

    uint8_t getIndex() const;
    void    setIndex(uint8_t _index);
};

#endif  // NIFTYDSC_SPINNER_HPP
