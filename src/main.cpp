
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "lv_conf.h"

#define DRAW_BUF_SIZE (TFT_WIDTH * TFT_HEIGHT / 10 * (LV_COLOR_DEPTH / 8))
uint32_t draw_buf[DRAW_BUF_SIZE / 4];

uint32_t my_tick_get_cb()
{
    return esp_timer_get_time() / 1000L;
}

void setup()
{
    lv_init();

    lv_tick_set_cb(my_tick_get_cb);

    lv_display_t* disp = lv_tft_espi_create(TFT_HEIGHT, TFT_WIDTH, draw_buf, sizeof(draw_buf));

    lv_display_set_offset(disp, -40, 52);

    lv_obj_t* label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello Arduino, I'm LVGL!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
}

void loop()
{
    lv_task_handler();
    delay(5);
}
