//
// Created by Aubrey on 3/27/2024.
//

#include "gui/GUIConstants.hpp"
#include "gui/fonts/zero4b11a12pt7b.h"
#include "gui/icons/icons.h"
#include "gui/primitives/CharSpinner.hpp"
#include "gui/primitives/Spinner.hpp"
#include "gui/primitives/StringSpinner.hpp"
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

CharSpinner spin_a;

StringSpinner cat_sel;

void setup()
{
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

    int16_t x_start = canvas.width() / 2;
    int16_t y_start = (canvas.height() / 2) - 8;
    int16_t offset  = 22;

    /*
    tft.setCursor(x_start, y_start);
    tft.setTextColor(GUI_DEFAULT, GUI_BACKGROUND);
    tft.setTextSize(1);
    tft.setTextWrap(true);
    tft.println("test1");
    */

    /*
    spin_a.init(&tft,
                x_start,
                y_start,
                GUI_DIMMED,
                GUI_BACKGROUND,
                GUI_DEFAULT,
                obj_sel_icon,
                24,
                24,
                char_list,
                1,
                2,
                18);
    spin_a.draw();
    */

    cat_sel.init(&canvas,
                 x_start,
                 y_start,
                 GUI_DIMMED,
                 GUI_BACKGROUND,
                 GUI_DEFAULT,
                 cat_sel_icon,
                 72,
                 24,
                 string_list,
                 1,
                 false,
                 2,
                 18);
    cat_sel.draw();

    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLDOWN);
    pinMode(2, INPUT_PULLDOWN);
}

bool buttons_pressed[3]     = { false, false, false };
bool old_buttons_pressed[3] = { false, false, false };

void loop()
{
    for (int i = 0; i < 3; i++)
    {
        old_buttons_pressed[i] = buttons_pressed[i];
        buttons_pressed[i]     = digitalRead(i);
    }

    if (!buttons_pressed[0])
    {
        cat_sel.select();
    }
    else
    {
        cat_sel.deselect();
    }

    if (buttons_pressed[1] && !old_buttons_pressed[1])
    {
        cat_sel.decrement();
    }

    if (buttons_pressed[2] && !old_buttons_pressed[2])
    {
        cat_sel.increment();
    }

    tft.drawRGBBitmap(0, 0, canvas.getBuffer(), 240, 135);

    delay(100);
}
