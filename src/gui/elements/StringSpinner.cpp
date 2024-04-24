//
// Created by Aubrey on 4/1/2024.
//

#include "StringSpinner.hpp"

void StringSpinner::init(Adafruit_GFX*            _display,
                         int16_t                  _x,
                         int16_t                  _y,
                         int16_t                  _w,
                         int16_t                  _h,
                         const uint8_t*           _select_icon,
                         uint16_t                 _select_color,
                         uint16_t                 _default_color,
                         uint16_t                 _background_color,
                         int16_t                  _value_x_offset,
                         int16_t                  _value_y_offset,
                         std::vector<std::string> _string_value_list,
                         uint8_t                  _char_size_multiplier,
                         bool                     _wrap_text)
{
    Spinner::init(_display,
                  _x,
                  _y,
                  _w,
                  _h,
                  _select_icon,
                  _select_color,
                  _default_color,
                  _background_color,
                  _string_value_list.size(),
                  _value_x_offset,
                  _value_y_offset);
    string_value_list    = _string_value_list;
    char_size_multiplier = _char_size_multiplier;
    wrap_text            = _wrap_text;
}

void StringSpinner::drawValue(uint16_t color)
{
    display->setCursor(x + value_x_offset, y + value_y_offset);
    display->setTextColor(color, background_color);
    display->setTextSize(char_size_multiplier);
    display->setTextWrap(wrap_text);
    display->println(string_value_list[index].c_str());
}

void StringSpinner::draw()
{
    Serial.println("Drawing StringSpinner");
    if (selected)
    {
        Serial.println("Selected");
        display->fillRect(x, y, w, h, background_color);
        drawValue(select_color);
        display->drawBitmap(x, y, select_icon, w, h, default_color);
    }
    else
    {
        Serial.println("Not selected");
        display->fillRect(x, y, w, h, background_color);
        drawValue(default_color);
    }
}