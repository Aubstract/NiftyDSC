//
// Created by Aubrey on 4/2/2024
//

#include "Page.hpp"

void Page::draw()
{
    display->fillRect(x, y, page_w, page_h, background_color);
    drawElements();
}