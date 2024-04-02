//
// Created by Aubrey on 3/30/2024.
//

#include "Spinner.hpp"

Spinner::Spinner() : index(0), selected(false)
{
}

void Spinner::init(Adafruit_GFX*  _display,
                   int16_t        _x,
                   int16_t        _y,
                   uint16_t       _default_color,
                   uint16_t       _background_color,
                   uint16_t       _select_color,
                   const uint8_t* _select_icon,
                   int16_t        _select_icon_w,
                   int16_t        _select_icon_h,
                   uint8_t        _value_list_len,
                   int16_t        _value_x_offset,
                   int16_t        _value_y_offset)
{
    display          = _display;
    x                = _x;
    y                = _y;
    default_color    = _default_color;
    background_color = _background_color;
    select_color     = _select_color;
    select_icon      = _select_icon;
    select_icon_w    = _select_icon_w;
    select_icon_h    = _select_icon_h;
    value_list_len   = _value_list_len;
    value_x_offset   = _value_x_offset;
    value_y_offset   = _value_y_offset;
}

void Spinner::draw()
{
    if (selected)
    {
        display->fillRect(x, y, select_icon_w, select_icon_h, background_color);
        drawValue(select_color, background_color);
        display->drawBitmap(x, y, select_icon, select_icon_w, select_icon_h, default_color);
    }
    else
    {
        display->fillRect(x, y, select_icon_w, select_icon_h, background_color);
        drawValue(default_color, background_color);
    }
}

void Spinner::select()
{
    selected = true;
    this->draw();
}

void Spinner::deselect()
{
    selected = false;
    this->draw();
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

uint8_t Spinner::getIndex()
{
    return index;
}
