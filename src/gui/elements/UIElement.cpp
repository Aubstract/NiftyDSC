//
// Created by Aubrey on 4/2/2024
//

#include "UIElement.hpp"

UIElement::UIElement() : selected(false)
{
}

void UIElement::draw()
{
    if (selected)
    {
        display->fillRect(x, y, w, h, background_color);
        drawValue(select_color, background_color);
        display->drawBitmap(x, y, select_icon, w, h, default_color);
    }
    else
    {
        display->fillRect(x, y, w, h, background_color);
        drawValue(default_color, background_color);
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
