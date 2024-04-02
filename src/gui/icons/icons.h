//
// Created by Aubrey on 4/1/2024.
//

#ifndef NIFTYDSC_ICONS_H
#define NIFTYDSC_ICONS_H

#include <cstdint>
#include <Arduino.h>

const unsigned char cat_sel_icon[] PROGMEM = {
    // ' cat_sel_icon, 72x24px
    0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80
};

const uint8_t obj_sel_icon[] PROGMEM = {
    // ' obj_sel_icon, 24x24px
    0x1f, 0xff, 0xfc, 0x20, 0x00, 0x06, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03,
    0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03,
    0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03,
    0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03, 0x40, 0x00, 0x03,
    0x40, 0x00, 0x03, 0x60, 0x00, 0x07, 0x3f, 0xff, 0xfe, 0x1f, 0xff, 0xfc
};

const uint8_t webUI[] PROGMEM = {
    // 'NIFTYDSCMenu(4), 240x135px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f,
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
    0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xf8, 0x00,
    0x00, 0x00, 0x00, 0x03, 0xfe, 0x07, 0xff, 0x80, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x18, 0x00, 0x00,
    0x03, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x00,
    0x00, 0x03, 0xfe, 0x07, 0xff, 0x80, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x10, 0x00, 0x00, 0x01, 0x8c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xfe, 0x07, 0xff, 0x80, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x10, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x83, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f,
    0x03, 0xf1, 0xf8, 0x1f, 0x8f, 0xc7, 0xe0, 0x30, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xe1, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1,
    0xf8, 0x1f, 0x8f, 0xc7, 0xe0, 0x70, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x78, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f,
    0x8f, 0xc7, 0xe0, 0x70, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x1c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f, 0x80, 0x3f,
    0x00, 0x70, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f,
    0x0e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f, 0x80, 0x3f, 0x00, 0x70,
    0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xc6, 0x30,
    0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f, 0x80, 0x3f, 0x00, 0x70, 0x00, 0x00,
    0x01, 0x8c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe3, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f, 0x81, 0xf8, 0xfc, 0x70, 0x00, 0x00, 0x01, 0x8c,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x33, 0x18, 0x00, 0x00, 0x00, 0x00,
    0x7e, 0x3f, 0x03, 0xf1, 0xf8, 0x1f, 0x81, 0xf8, 0xfc, 0x30, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00,
    0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0x31, 0x98, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x3f,
    0x03, 0xf1, 0xf8, 0x1f, 0x81, 0xf8, 0xfc, 0x10, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x1f, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x99, 0x98, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x07, 0xff, 0x80,
    0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x18, 0x00, 0x00, 0x03, 0x8c, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x8f, 0x99, 0x98, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x07, 0xff, 0x80, 0x3f, 0xfc,
    0x0f, 0xc0, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0x8c, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x8f, 0x99, 0x98, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x07, 0xff, 0x80, 0x3f, 0xfc, 0x0f, 0xc0,
    0xfc, 0x0f, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87,
    0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0c, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0c, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c,
    0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x07,
    0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x7f,
    0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x84, 0xd1, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x01, 0x74, 0x25, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x01, 0x54, 0x90, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x01, 0x74, 0x85, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x32, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0xfa, 0xb0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xa2,
    0x29, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x19, 0x04, 0x80,
    0x00, 0x00, 0x07, 0x9e, 0x78, 0x00, 0x07, 0x80, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1f, 0xfe,
    0x3f, 0xfc, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x88, 0x80, 0x00, 0x00,
    0x07, 0x9e, 0x78, 0x00, 0x07, 0x80, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1f, 0xfe, 0x3f, 0xfc,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x3f, 0x80, 0x00, 0x00, 0x07, 0x9e,
    0x78, 0x7f, 0x87, 0xfe, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1f, 0xfe, 0x3f, 0xfc, 0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0xa0, 0x80, 0x00, 0x00, 0x07, 0x9e, 0x78, 0x7f,
    0x87, 0xfe, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x1f, 0x80, 0x07, 0x1c, 0x7f, 0xff, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x74, 0x6e, 0x80, 0x00, 0x00, 0x07, 0x9e, 0x79, 0xe7, 0xe7, 0x87,
    0x80, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x1f, 0x80, 0x07, 0x1c, 0x7f, 0xff, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x54, 0x2a, 0x80, 0x00, 0x00, 0x07, 0x9e, 0x79, 0xe7, 0xe7, 0x87, 0x80, 0x00,
    0x07, 0x1f, 0xff, 0xc7, 0x1f, 0x80, 0x07, 0x1c, 0x7f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x76, 0x6e, 0x80, 0x00, 0x00, 0x07, 0xff, 0xf9, 0xf8, 0x07, 0x87, 0x80, 0x00, 0x07, 0x1c,
    0x01, 0xc7, 0x03, 0xf1, 0xff, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
    0xa1, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf9, 0xf8, 0x07, 0x87, 0x80, 0x00, 0x07, 0x1c, 0x01, 0xc7,
    0x03, 0xf1, 0xff, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00,
    0x00, 0x00, 0x01, 0xe1, 0xe0, 0x7f, 0x87, 0xfe, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0x03, 0xf1,
    0xff, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0xe1, 0xe0, 0x7f, 0x87, 0xfe, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0x00, 0x71, 0xf8, 0x1c,
    0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0x00, 0x71, 0xf8, 0x1c, 0x70, 0x07,
    0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0x00, 0x71, 0xf8, 0x1c, 0x70, 0x07, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xe0, 0x71, 0xc7, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x1c, 0x01, 0xc7, 0xe0, 0x71, 0xc7, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c,
    0x01, 0xc7, 0xe0, 0x71, 0xc7, 0x1c, 0x70, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7,
    0x00, 0x7f, 0xf8, 0xfc, 0x7f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x00, 0x7f,
    0xf8, 0xfc, 0x7f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x00, 0x7f, 0xf8, 0xfc,
    0x7f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1c, 0x71, 0xc7, 0x1c, 0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf3,
    0xfc, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1c, 0x71, 0xc7, 0x1c, 0x00, 0x00, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf3, 0xfc, 0x00,
    0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x1c, 0x71, 0xc7, 0x1c, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00,
    0x07, 0xff, 0xff, 0xff, 0xfc, 0x0e, 0x38, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff,
    0xff, 0xff, 0xfc, 0x0e, 0x38, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x47,
    0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff,
    0xfc, 0x0e, 0x38, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x02, 0x04, 0x03,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x07, 0x03, 0xf0, 0x07, 0xfc, 0x70,
    0x38, 0x1f, 0x8e, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x80, 0x00, 0x0e, 0x03, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x07, 0x03, 0xf0, 0x07, 0xfc, 0x70, 0x38, 0x1f,
    0x8e, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x80, 0x00, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x00,
    0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x07, 0x03, 0xf0, 0x07, 0xfc, 0x70, 0x38, 0x1f, 0x8e, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x80, 0x00, 0x7f, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc3,
    0xfc, 0x00, 0x00, 0x00, 0x07, 0x03, 0x80, 0x3f, 0x1f, 0xfe, 0x07, 0x1c, 0x00, 0x38, 0xfc, 0x00,
    0x00, 0x00, 0x7c, 0x00, 0x80, 0x04, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc3, 0xfc, 0x00,
    0x00, 0x00, 0x07, 0x03, 0x80, 0x3f, 0x1f, 0xfe, 0x07, 0x1c, 0x00, 0x38, 0xfc, 0x00, 0x00, 0x00,
    0xfc, 0x00, 0x80, 0x00, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x03, 0x80, 0x3f, 0x1f, 0xfe, 0x07, 0x1c, 0x00, 0x38, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00,
    0x82, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe3,
    0x81, 0xc7, 0x00, 0x7f, 0xff, 0xff, 0xf0, 0x07, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x87, 0x00,
    0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0x81, 0xc7,
    0x00, 0x7f, 0xff, 0xff, 0xf0, 0x07, 0xfc, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x82, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0x81, 0xc7, 0x00, 0x7f,
    0xff, 0xff, 0xf0, 0x07, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x80, 0x03, 0xc0, 0x83, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0xf0, 0x38, 0xe3, 0xf1, 0xc7, 0xe0,
    0x7f, 0xc0, 0xfc, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x80, 0x0f, 0xf1, 0xc3, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0xf0, 0x38, 0xe3, 0xf1, 0xc7, 0xe0, 0x7f, 0xc0,
    0xfc, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x80, 0x1c, 0x38, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xe3, 0xf0, 0x38, 0xe3, 0xf1, 0xc7, 0xe0, 0x7f, 0xc0, 0xfc, 0x00,
    0x00, 0x01, 0xfc, 0x00, 0x80, 0x13, 0x1c, 0x03, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00,
    0x00, 0x00, 0x07, 0x1c, 0x71, 0xc7, 0xff, 0x8e, 0x07, 0xe0, 0x7e, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0xfc, 0x00, 0x80, 0x07, 0xd8, 0x03, 0x00, 0x00, 0x00, 0x05, 0x55, 0xd4, 0x00, 0x80, 0x00, 0x00,
    0x07, 0x1c, 0x71, 0xc7, 0xff, 0x8e, 0x07, 0xe0, 0x7e, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x7c, 0x00,
    0x82, 0x0e, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0xe8, 0x00, 0x40, 0x00, 0x00, 0x07, 0x1c,
    0x71, 0xc7, 0xff, 0x8e, 0x07, 0xe0, 0x7e, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x80, 0x0e,
    0x72, 0x03, 0x00, 0x00, 0x00, 0x15, 0x55, 0x70, 0x00, 0x60, 0x00, 0x00, 0x07, 0x1f, 0x8f, 0xf8,
    0xe0, 0x71, 0xff, 0x00, 0x7f, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x80, 0x07, 0x0e, 0x03,
    0x00, 0x00, 0x00, 0x1a, 0xaa, 0xb0, 0x00, 0x60, 0x00, 0x00, 0x07, 0x1f, 0x8f, 0xf8, 0xe0, 0x71,
    0xff, 0x00, 0x7f, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x80, 0x03, 0xfc, 0x03, 0x00, 0x00,
    0x00, 0x15, 0x55, 0x70, 0x00, 0x60, 0x00, 0x00, 0x07, 0x1f, 0x8f, 0xf8, 0xe0, 0x71, 0xff, 0x00,
    0x7f, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0xf0, 0x03, 0x00, 0x00, 0x00, 0x1a,
    0xaa, 0xb0, 0x00, 0x60, 0x00, 0x00, 0x07, 0xff, 0x8e, 0x07, 0x1f, 0x80, 0x07, 0x1c, 0x00, 0x07,
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 0x55, 0x70,
    0x00, 0x60, 0x00, 0x00, 0x07, 0xff, 0x8e, 0x07, 0x1f, 0x80, 0x07, 0x1c, 0x00, 0x07, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1a, 0xaa, 0xb0, 0x00, 0x60,
    0x00, 0x00, 0x07, 0xff, 0x8e, 0x07, 0x1f, 0x80, 0x07, 0x1c, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x15, 0x55, 0x70, 0x00, 0x60, 0x00, 0x00,
    0x07, 0xfc, 0x7e, 0x3f, 0xe0, 0x0e, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1a, 0xaa, 0xb0, 0x00, 0x60, 0x00, 0x00, 0x07, 0xfc,
    0x7e, 0x3f, 0xe0, 0x0e, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,
    0xff, 0xfe, 0x00, 0x00, 0x00, 0x15, 0x55, 0x70, 0x00, 0x60, 0x00, 0x00, 0x07, 0xfc, 0x7e, 0x3f,
    0xe0, 0x0e, 0x3f, 0xfc, 0x0f, 0xc0, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc,
    0x00, 0x00, 0x00, 0x1a, 0xaa, 0xb0, 0x00, 0xe0, 0x00, 0x00, 0x07, 0x03, 0x8e, 0x00, 0xe0, 0x70,
    0x38, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0d, 0x55, 0x58, 0x01, 0xc0, 0x00, 0x00, 0x07, 0x03, 0x8e, 0x00, 0xe0, 0x70, 0x38, 0x00,
    0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x07, 0x03, 0x8e, 0x00, 0xe0, 0x70, 0x38, 0x00, 0x00, 0x07,
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x1f, 0xfe, 0x07, 0x1f, 0xf1, 0xff, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x1f, 0xfe, 0x07, 0x1f, 0xf1, 0xff, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xff, 0xff, 0xff, 0x1f, 0xfe, 0x07, 0x1f, 0xf1, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x07, 0xff, 0xff, 0xff, 0x1c, 0x71, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07,
    0xff, 0xff, 0xff, 0x1c, 0x71, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0xff, 0xff,
    0xff, 0x1c, 0x71, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x03, 0xf1, 0xc7, 0x1f,
    0xf0, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x03, 0xf1, 0xc7, 0x1f, 0xf0, 0x07,
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7, 0x03, 0xf1, 0xc7, 0x1f, 0xf0, 0x07, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0x1f, 0x8e, 0x07, 0x00, 0x01, 0xc0, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xdf, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00,
    0x07, 0x1c, 0x01, 0xc7, 0x1f, 0x8e, 0x07, 0x00, 0x01, 0xc0, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00, 0x07, 0x1c,
    0x01, 0xc7, 0x1f, 0x8e, 0x07, 0x00, 0x01, 0xc0, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38,
    0x1c, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7,
    0xe3, 0xf1, 0xf8, 0xff, 0x8f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00,
    0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0xf1, 0xf8, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xe3, 0xf1,
    0xf8, 0xff, 0x8f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf1, 0x8f, 0x80, 0x00, 0x00,
    0x03, 0xf0, 0x3f, 0x1f, 0xf1, 0xf8, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xe3, 0xf1, 0xf8, 0xff,
    0x8f, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf1, 0x8f, 0x80, 0x00, 0x00, 0x03, 0xf0,
    0x3f, 0x1f, 0xf1, 0xf8, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xff, 0x80, 0x00, 0x1c, 0x00, 0x00,
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f,
    0xff, 0xf8, 0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xff, 0x80, 0x00, 0x1c, 0x00, 0x00, 0xfc, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x1c, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0xff, 0xf8,
    0x00, 0x00, 0x07, 0x1c, 0x01, 0xc7, 0xff, 0x80, 0x00, 0x1c, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0xff, 0xf8, 0x00, 0x00,
    0x07, 0x1f, 0xff, 0xc7, 0x00, 0x0e, 0x3f, 0x03, 0x80, 0x38, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xdf, 0xfb, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0x8f, 0xf8, 0x00, 0x00, 0x07, 0x1f,
    0xff, 0xc7, 0x00, 0x0e, 0x3f, 0x03, 0x80, 0x38, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
    0xf0, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0x8f, 0xf8, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xc7,
    0x00, 0x0e, 0x3f, 0x03, 0x80, 0x38, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xd8, 0x00,
    0x00, 0x00, 0x03, 0xf0, 0x3f, 0x1f, 0x8f, 0xf8, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x70,
    0x3f, 0x00, 0x71, 0xf8, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x88, 0x00, 0x00, 0x00,
    0x00, 0x7f, 0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x70, 0x3f, 0x00,
    0x71, 0xf8, 0x1c, 0x00, 0x00, 0x00, 0x60, 0x70, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7f,
    0xf8, 0x1f, 0x81, 0xf8, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x70, 0x3f, 0x00, 0x71, 0xf8,
    0x1c, 0x00, 0x00, 0x00, 0xe0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f,
    0x81, 0xf8, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00,
    0x00, 0x01, 0xe0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x03,
    0xe0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x07, 0xe1, 0xf8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

#endif  // NIFTYDSC_ICONS_H