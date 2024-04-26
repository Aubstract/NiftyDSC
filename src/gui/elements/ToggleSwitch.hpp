//
// Created by Aubrey on 4/4/2024
//

#ifndef NIFTYDSC_TOGGLESWITCH_H
#define NIFTYDSC_TOGGLESWITCH_H

#include "UIElement.hpp"
#include "compile_conditions.hpp"

class ToggleSwitch : public UIElement
{
private:
    bool           isOn;
    const uint8_t* on_icon;
    const uint8_t* off_icon;

    void drawValue(uint16_t color);

public:
    ToggleSwitch();
    void init(Adafruit_GFX*  _display,
              int16_t        _x,
              int16_t        _y,
              int16_t        _w,
              int16_t        _h,
              const uint8_t* _select_icon,
              uint16_t       _select_color,
              uint16_t       _default_color,
              uint16_t       _background_color,
              const uint8_t* _on_icon,
              const uint8_t* _off_icon);

    void drawToggleSwitch();

    void setOn();
    void setOff();

    void interact() override;

    bool getState() const;
};

#endif  // NIFTYDSC_TOGGLESWITCH_H