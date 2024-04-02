//
// Created by Aubrey on 3/30/2024.
//

#ifndef NIFTYDSC_SPINNER_HPP
#define NIFTYDSC_SPINNER_HPP

#include <cstdint>
#include <Adafruit_GFX.h>

class Spinner
{
protected:
    Adafruit_GFX*  display;
    int16_t        x;
    int16_t        y;
    uint16_t       default_color;
    uint16_t       background_color;
    uint16_t       select_color;
    const uint8_t* select_icon;
    int16_t        select_icon_w;
    int16_t        select_icon_h;
    uint8_t        value_list_len;
    int16_t        value_x_offset;
    int16_t        value_y_offset;
    uint8_t        index;
    bool           selected;

    virtual void drawValue(uint16_t color, uint16_t background_color) = 0;

public:
    Spinner();
    void init(Adafruit_GFX*  _display,
              int16_t        _x,
              int16_t        _y,
              uint16_t       _default_color,
              uint16_t       _background_color,
              uint16_t       _select_color,
              const uint8_t* _select_icon,
              int16_t        _select_icon_w,
              int16_t        _select_icon_h,
              uint8_t        _value_list_len,
              int16_t        _value_x_offset = 0,
              int16_t        _value_y_offset = 0);

    void draw();
    void select();
    void deselect();
    void increment();
    void decrement();

    uint8_t getIndex();
};

#endif  // NIFTYDSC_SPINNER_HPP
