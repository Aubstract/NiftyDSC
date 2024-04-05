//
// Created by Aubrey on 3/27/2024.
//

#include "gui/GUIConstants.hpp"
#include "gui/fonts/zero4b11a12pt7b.h"
#include "gui/icons/icons.h"
#include "gui/elements/CharSpinner.hpp"
#include "gui/elements/Spinner.hpp"
#include "gui/elements/StringSpinner.hpp"
#include <Adafruit_GFX.h>     // Core graphics library
#include <Adafruit_ST7789.h>  // Hardware-specific library for ST7789
#include <Arduino.h>
#include <cstdint>
#include <vector>

#define VERSION 0.1
#define DISP_W 240
#define DISP_H 135

const std::vector<const uint8_t*> test = { obj_sel_icon, webUI };

const std::vector<char> char_list = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

const std::vector<std::string> string_list = { "  M", "NGC", "SH2", "UGC" };

Adafruit_ST7789 tft(TFT_CS, TFT_DC, TFT_RST);
GFXcanvas16     canvas(240, 135);

const uint8_t num_digits = 4;
CharSpinner   cat_num[num_digits];
StringSpinner cat_sel;

void setup()
{
    Serial.begin(115200);

    // turn on backlite
    pinMode(TFT_BACKLITE, OUTPUT);
    digitalWrite(TFT_BACKLITE, HIGH);

    // turn on the TFT / I2C power supply
    pinMode(TFT_I2C_POWER, OUTPUT);
    digitalWrite(TFT_I2C_POWER, HIGH);
    delay(10);

    // initialize TFT
    tft.init(DISP_H, DISP_W);
    tft.setRotation(1);

    canvas.setFont(&zero4b11a12pt7b);

    int16_t x_start = 0;  // canvas.width() / 2;
    int16_t y_start = (canvas.height() / 2) - 12;
    int16_t offset  = -2;

    cat_sel.init(&canvas,
                 x_start,
                 y_start,
                 72,
                 24,
                 cat_sel_icon,
                 GUI_DEFAULT,
                 GUI_DIMMED,
                 GUI_BACKGROUND,
                 3,
                 18,
                 string_list,
                 1,
                 false);

    cat_num[0].init(&canvas,
                    x_start + cat_sel.getWidth(),
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    GUI_DEFAULT,
                    GUI_DIMMED,
                    GUI_BACKGROUND,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[1].init(&canvas,
                    cat_num[0].getXCoord() + cat_num[0].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    GUI_DEFAULT,
                    GUI_DIMMED,
                    GUI_BACKGROUND,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[2].init(&canvas,
                    cat_num[1].getXCoord() + cat_num[1].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    GUI_DEFAULT,
                    GUI_DIMMED,
                    GUI_BACKGROUND,
                    2,
                    18,
                    char_list,
                    1);

    cat_num[3].init(&canvas,
                    cat_num[2].getXCoord() + cat_num[2].getWidth() + offset,
                    y_start,
                    24,
                    24,
                    obj_sel_icon,
                    GUI_DEFAULT,
                    GUI_DIMMED,
                    GUI_BACKGROUND,
                    2,
                    18,
                    char_list,
                    1);

    cat_sel.select();
    cat_sel.draw();
    for (int i = 0; i < num_digits; i++)
    {
        cat_num[i].draw();
    }

    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLDOWN);
    pinMode(2, INPUT_PULLDOWN);
}

bool    buttons_pressed[3]     = { false, false, false };
bool    old_buttons_pressed[3] = { false, false, false };
uint8_t sel_index              = 0;

void loop()
{
    std::vector<Spinner*> spins = { &cat_sel, &cat_num[0], &cat_num[1], &cat_num[2], &cat_num[3] };

    for (int i = 0; i < 3; i++)
    {
        old_buttons_pressed[i] = buttons_pressed[i];
        buttons_pressed[i]     = digitalRead(i);
    }

    if (!buttons_pressed[0] && old_buttons_pressed[0])
    {
        spins.at(sel_index)->increment();
    }

    if (buttons_pressed[1] && !old_buttons_pressed[1])
    {
        if (sel_index)
        {
            spins.at(sel_index)->deselect();
            sel_index--;
            spins.at(sel_index)->select();
        }
    }

    if (buttons_pressed[2] && !old_buttons_pressed[2])
    {
        if (sel_index < num_digits)
        {
            spins.at(sel_index)->deselect();
            sel_index++;
            spins.at(sel_index)->select();
        }
    }


    tft.drawRGBBitmap(0, 0, canvas.getBuffer(), 240, 135);

    delay(100);
}
