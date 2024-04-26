//
// Created by Aubrey on 4/2/2024
//

#ifndef NIFTYDSC_OBJSELPAGE_H
#define NIFTYDSC_OBJSELPAGE_H

#include "Page.hpp"
#include "gui/elements/CharSpinner.hpp"
#include "gui/elements/StringSpinner.hpp"
#include "gui/GUIConstants.hpp"
#include "gui/icons/icons.h"
#include "catalogs/catalog_list.hpp"
#include "compile_conditions.hpp"
#include <vector>
#include <string>

class ObjSelPage : public Page
{
public:
    ObjSelPage();
    void init(Adafruit_GFX*  _display,
              int16_t        _x,
              int16_t        _y,
              int16_t        _page_w,
              int16_t        _page_h,
              uint16_t       _default_color,
              uint16_t       _background_color,
              uint16_t       _select_color,
              const uint8_t* _page_icon);

    friend void drawObjSel(Page&);

    void handleUserInput(std::vector<bool>) override;
    void incSelectIndex() override;
    void decSelectIndex() override;

    uint8_t  getCatName();
    uint16_t getCatNum();
};

#endif  // NIFTYDSC_OBJSELPAGE_H