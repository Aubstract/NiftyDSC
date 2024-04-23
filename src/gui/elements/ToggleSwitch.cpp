//
// Created by Aubrey on 4/4/2024
//

#include "ToggleSwitch.hpp"

ToggleSwitch::ToggleSwitch() : UIElement(), isOn(false)
{
}

void ToggleSwitch::init(Adafruit_GFX*  _display,
                        int16_t        _x,
                        int16_t        _y,
                        int16_t        _w,
                        int16_t        _h,
                        const uint8_t* _select_icon,
                        uint16_t       _select_color,
                        uint16_t       _default_color,
                        uint16_t       _background_color,
                        const uint8_t* _on_icon,
                        const uint8_t* _off_icon)
{
    UIElement::init(
        _display, _x, _y, _w, _h, _select_icon, _select_color, _default_color, _background_color);
    on_icon  = _on_icon;
    off_icon = _off_icon;
}

void ToggleSwitch::drawValue(uint16_t color, uint16_t background_color)
{
    if (isOn)
    {
        display->drawBitmap(x, y, on_icon, w, h, color);
    }
    else
    {
        display->drawBitmap(x, y, off_icon, w, h, color);
    }
}

void ToggleSwitch::interact()
{
    isOn = !isOn;
    this->draw();
}

void ToggleSwitch::setOn()
{
    isOn = true;
    this->draw();
}
void ToggleSwitch::setOff()
{
    isOn = false;
    this->draw();
}

bool ToggleSwitch::getState() const
{
    return isOn;
}