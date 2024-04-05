//
// Created by Aubrey 4/3/2024
//

#ifndef NIFTYDSC_UIELEMENT_HPP
#define NIFTYDSC_UIELEMENT_HPP

#include <Adafruit_GFX.h>
#include <cstdint>

class UIElement
{
protected:
    Adafruit_GFX*  display;
    int16_t        x;
    int16_t        y;
    int16_t        w;
    int16_t        h;
    const uint8_t* select_icon;
    uint16_t       select_color;
    uint16_t       default_color;
    uint16_t       background_color;
    bool           selected;

    virtual void drawValue(uint16_t color, uint16_t background_color) = 0;

public:
    UIElement();
    void init(Adafruit_GFX*  _display,
              int16_t        _x,
              int16_t        _y,
              int16_t        _w,
              int16_t        _h,
              const uint8_t* _select_icon,
              uint16_t       _select_color,
              uint16_t       _default_color,
              uint16_t       _background_color);

    void draw();
    void select();
    void deselect();

    bool    isSelected() const;
    int16_t getWidth() const;
    int16_t getHeight() const;
    int16_t getXCoord() const;
    int16_t getYCoord() const;
};

#endif  // NIFTYDSC_UIELEMENT_HPP