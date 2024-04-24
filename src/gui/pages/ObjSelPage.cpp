//
// Created by Aubrey on 4/5/2024
//

#include "ObjSelPage.hpp"

void ObjSelPage::init(Adafruit_GFX*               _display,
                      int16_t                     _x,
                      int16_t                     _y,
                      int16_t                     _page_w,
                      int16_t                     _page_h,
                      uint16_t                    _default_color,
                      uint16_t                    _background_color,
                      uint16_t                    _select_color,
                      const uint8_t*              _page_icon,
                      std::vector<const uint8_t*> _button_icons)
{
    const uint8_t NUM_DIGITS = 4;
    CharSpinner   cat_num[NUM_DIGITS];
    StringSpinner cat_sel;

    std::vector<UIElement*> _elements
        = { &cat_sel, &cat_num[0], &cat_num[1], &cat_num[2], &cat_num[3] };

    Page::init(_display,
               _x,
               _y,
               _page_w,
               _page_h,
               _default_color,
               _background_color,
               _select_color,
               _page_icon,
               _button_icons,
               _elements);

    std::vector<std::string> string_list;

    for (size_t i = 0; i < catalog_list.size(); i++)
    {
        string_list.push_back(catalog_list[i].name);
    }

    const std::vector<char> char_list = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    int16_t x_start = x;
    int16_t y_start = (page_h / 2) - 12 + y;
    int16_t offset  = -2;

    cat_sel.init(display,
                 x_start,
                 y_start,
                 72,
                 24,
                 cat_sel_icon,
                 select_color,
                 default_color,
                 background_color,
                 3,
                 18,
                 string_list,
                 1,
                 false);

    cat_num[0].init(display,
                    x_start + cat_sel.getWidth(),
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    select_color,
                    default_color,
                    background_color,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[1].init(display,
                    cat_num[0].getXCoord() + cat_num[0].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    select_color,
                    default_color,
                    background_color,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[2].init(display,
                    cat_num[1].getXCoord() + cat_num[1].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    select_color,
                    default_color,
                    background_color,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[3].init(display,
                    cat_num[2].getXCoord() + cat_num[2].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    select_color,
                    default_color,
                    background_color,
                    2,
                    18,
                    char_list,
                    1);

    Serial.printf("x: %d y: %d w: %d h %d bck_clr: %u\n", x, y, page_w, page_h, background_color);
    Serial.printf("dflt_clr: %u slct_clr: %u slct_indx: %u elmnts_sz: %u\n",
                  default_color,
                  select_color,
                  select_index,
                  elements.size());
}

void ObjSelPage::handleUserInput(std::vector<bool> buttons)
{
    if (in_scope)
    {
        return_scope_to_parent = false;

        if (buttons[0])
        {
            elements[select_index]->interact();
        }

        if (buttons[1])
        {
            elements.at(select_index)->deselect();
            decSelectIndex();
            if (in_scope)
            {
                elements.at(select_index)->select();
            }
        }

        if (buttons[2])
        {
            elements.at(select_index)->deselect();
            incSelectIndex();
            elements.at(select_index)->select();
        }
    }
}

void ObjSelPage::draw()
{
    display->fillRect(x, y, page_w, page_h, background_color);

    for (size_t i = 0; i < elements.size(); i++)
    {
        Serial.printf("Drawing element: %u", i);
        elements[i]->draw();
    }
}

void ObjSelPage::incSelectIndex()
{
    if (select_index < elements.size() - 1)
    {
        select_index++;
    }
}

void ObjSelPage::decSelectIndex()
{
    if (select_index)
    {
        select_index--;
    }
    else
    {
        in_scope               = false;
        return_scope_to_parent = true;
    }
}

uint16_t ObjSelPage::getCatNum()
{
    uint16_t cat_num    = 0;
    uint16_t multiplier = 1;

    // The catalog number CharSpinners are the last elements in the vector,
    // with the least significant digit at the end of the vector
    for (size_t i = elements.size() - 1; i > 0; i--)
    {
        CharSpinner* char_spin_ptr = dynamic_cast<CharSpinner*>(elements[i]);
        if (char_spin_ptr)
        {
            cat_num += char_spin_ptr->getIndex() * multiplier;
        }
        multiplier *= 10;
    }

    return cat_num;
}
