//
// Created by Aubrey on 4/2/2024
//

#ifndef NIFTYDSC_OBJSELPAGE_H
#define NIFTYDSC_OBJSELPAGE_H

#include "Page.hpp"
#include "gui/elements/CharSpinner.hpp"
#include "gui/elements/StringSpinner.hpp"
#include "gui/elements/Spinner.hpp"
#include <vector>

class ObjSelPage : public Page
{
private:
    std::vector<Spinner*> elements;

    void drawElements() override;

public:
    ObjSelPage();

    uint8_t  getCatName();
    uint16_t getCatNum();
};

#endif  // NIFTYDSC_OBJSELPAGE_H