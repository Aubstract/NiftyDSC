//
// Created by Aubrey on 4/2/2024
//

#include "Page.hpp"

Page::Page() : select_index(0), in_scope(false), return_scope_to_parent(false)
{
}

void Page::init(Adafruit_GFX*               _display,
                int16_t                     _x,
                int16_t                     _y,
                int16_t                     _page_w,
                int16_t                     _page_h,
                uint16_t                    _default_color,
                uint16_t                    _background_color,
                uint16_t                    _select_color,
                const uint8_t*              _page_icon,
                std::vector<const uint8_t*> _button_icons,
                std::vector<UIElement*>     _elements)
{
    display          = _display;
    x                = _x;
    y                = _y;
    page_w           = _page_w;
    page_h           = _page_h;
    default_color    = _default_color;
    background_color = _background_color;
    select_color     = _select_color;
    page_icon        = _page_icon;
    button_icons     = _button_icons;
    elements         = _elements;
}

void Page::setScope()
{
    in_scope = true;
}