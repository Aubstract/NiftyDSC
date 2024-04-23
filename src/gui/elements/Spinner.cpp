//
// Created by Aubrey on 3/30/2024.
//

#include "Spinner.hpp"

Spinner::Spinner() : UIElement(), index(0)
{
}

void Spinner::init(Adafruit_GFX*  _display,
                   int16_t        _x,
                   int16_t        _y,
                   int16_t        _w,
                   int16_t        _h,
                   const uint8_t* _select_icon,
                   uint16_t       _select_color,
                   uint16_t       _default_color,
                   uint16_t       _background_color,
                   uint8_t        _value_list_len,
                   int16_t        _value_x_offset,
                   int16_t        _value_y_offset)
{
    UIElement::init(
        _display, _x, _y, _w, _h, _select_icon, _select_color, _default_color, _background_color);

    value_list_len = _value_list_len;
    value_x_offset = _value_x_offset;
    value_y_offset = _value_y_offset;
}

void Spinner::increment()
{
    index = ++index % value_list_len;
    this->draw();
}

void Spinner::decrement()
{
    index = index ? --index : value_list_len - 1;
    this->draw();
}

void Spinner::interact()
{
    this->increment();
}

uint8_t Spinner::getIndex() const
{
    return index;
}

void Spinner::setIndex(uint8_t _index)
{
    index = _index;
}