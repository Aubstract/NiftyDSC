//
// Created by Aubrey on 4/1/2024.
//
#ifndef NIFTYDSC_STRINGSPINNER_HPP
#define NIFTYDSC_STRINGSPINNER_HPP

#include "Spinner.hpp"
#include <string>
#include <vector>

class StringSpinner : public Spinner
{
private:
    std::vector<std::string> string_value_list;
    uint8_t                  char_size_multiplier;
    bool                     wrap_text;

    void drawValue(uint16_t);

public:
    void init(Adafruit_GFX*            _display,
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
              bool                     _wrap_text);

    void draw() override;
};

#endif  // NIFTYDSC_STRINGSPINNER_HPP