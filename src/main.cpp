
/*Using LVGL with Arduino requires some extra steps:
 *Be sure to read the docs here: https://docs.lvgl.io/master/get-started/platforms/arduino.html  */

#include <lvgl.h>
#include <TFT_eSPI.h>

#define TFT_HOR_RES 240
#define TFT_VER_RES 135

void setup()
{
}

void loop()
{
}


/*
// Created by Aubrey on 3/27/2024

#include <TFT_eSPI.h>
#include <Arduino.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
    tft.init();
    tft.setRotation(3);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("Hello, world!", tft.width() / 2, tft.height() / 2, 2);
}

void loop()
{
}
*/