//
// Created by Aubrey on 4/2/2024
//

#include "UIElement.hpp"
#include "gui/elements/CharSpinner.hpp"
#include "gui/elements/IconSpinner.hpp"
#include "gui/elements/StringSpinner.hpp"
#include "gui/elements/ToggleSwitch.hpp"

UIElement::UIElement() : selected(false)
{
}

void UIElement::init(Adafruit_GFX*  _display,
                     int16_t        _x,
                     int16_t        _y,
                     int16_t        _w,
                     int16_t        _h,
                     const uint8_t* _select_icon,
                     uint16_t       _select_color,
                     uint16_t       _default_color,
                     uint16_t       _background_color)
{
    display          = _display;
    x                = _x;
    y                = _y;
    w                = _w;
    h                = _h;
    select_icon      = _select_icon;
    select_color     = _select_color;
    default_color    = _default_color;
    background_color = _background_color;
}

void UIElement::draw()
{
    debugln("Drawing UIElement...");
    debugf("this->getType(): %u\n", this->getType());
    debugf("this->type: %u\n", this->type);
    debugf("type: %u\n", type);

    CharSpinner*   cs = nullptr;
    IconSpinner*   is = nullptr;
    StringSpinner* ss = nullptr;
    ToggleSwitch*  ts = nullptr;

    switch (type)
    {
        case CHAR_SPINNER:
            debugln("Case CharSpinner...");
            cs = static_cast<CharSpinner*>(this);
            cs->drawCharSpinner();
            break;
        case ICON_SPINNER:
            debugln("Case IconSpinner...");
            is = static_cast<IconSpinner*>(this);
            is->drawIconSpinner();
            break;
        case STRING_SPINNER:
            debugln("Case StringSpinner...");
            ss = static_cast<StringSpinner*>(this);
            ss->drawStringSpinner();
            break;
        case TOGGLE_SWITCH:
            debugln("Case ToggleSwitch...");
            ts = static_cast<ToggleSwitch*>(this);
            ts->drawToggleSwitch();
            break;
        default:
            debugln("UNRECOGNIZED ENUM TYPE!");
    }
}

void UIElement::select()
{
    selected = true;
    this->draw();
}

void UIElement::deselect()
{
    selected = false;
    this->draw();
}

bool UIElement::isSelected() const
{
    return selected;
}

UIType UIElement::getType() const
{
    return type;
}

int16_t UIElement::getWidth() const
{
    return w;
}

int16_t UIElement::getHeight() const
{
    return h;
}

int16_t UIElement::getXCoord() const
{
    return x;
}
int16_t UIElement::getYCoord() const
{
    return y;
}
