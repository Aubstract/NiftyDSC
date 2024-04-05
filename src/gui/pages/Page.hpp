//
// Created by Aubrey on 4/1/2024.
//

#ifndef NIFTYDSC_PAGE_H
#define NIFTYDSC_PAGE_H

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
    bool                        inScope;
    bool                        returnScopeToParent;

    virtual void drawElements() = 0;

public:
    void draw();

    void incSelIndex();
    void decSelIndex();
};

#endif  // NIFTYDSC_PAGE_H