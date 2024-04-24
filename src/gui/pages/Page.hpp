//
// Created by Aubrey on 4/1/2024.
//

#ifndef NIFTYDSC_PAGE_H
#define NIFTYDSC_PAGE_H

#include "gui/elements/UIElement.hpp"
#include <Adafruit_GFX.h>
#include <cstdint>
#include <vector>

class Page
{
protected:
    Adafruit_GFX*               display;
    int16_t                     x;
    int16_t                     y;
    int16_t                     page_w;
    int16_t                     page_h;
    uint16_t                    default_color;
    uint16_t                    background_color;
    uint16_t                    select_color;
    const uint8_t*              page_icon;
    std::vector<const uint8_t*> button_icons;
    uint8_t                     select_index;
    std::vector<UIElement*>     elements;
    bool                        in_scope;
    bool                        return_scope_to_parent;

public:
    Page();
    void init(Adafruit_GFX*               _display,
              int16_t                     _x,
              int16_t                     _y,
              int16_t                     _page_w,
              int16_t                     _page_h,
              uint16_t                    _default_color,
              uint16_t                    _background_color,
              uint16_t                    _select_color,
              const uint8_t*              _page_icon,
              std::vector<const uint8_t*> _button_icons,
              std::vector<UIElement*>     _elements);

    virtual void draw() = 0;

    virtual void handleUserInput(std::vector<bool>) = 0;
    void         setScope();

    virtual void decSelectIndex() = 0;
    virtual void incSelectIndex() = 0;
};

#endif  // NIFTYDSC_PAGE_H