#ifndef NIGHTLATCH_INC_NIGHTLATCH
#define NIGHTLATCH_INC_NIGHTLATCH

#include <lvgl.h>
#include <TAMC_GT911.h>
#include <Arduino_GFX_Library.h>
#include <Arduino_GFX.h>
#include <status.hpp>

constexpr uint8_t DISP_BL_PIN = 2;
constexpr uint16_t DISP_WIDTH = 800;
constexpr uint16_t DISP_HEIGHT = 480;

Arduino_ESP32RGBPanel *bus;
Arduino_RGB_Display *gfx;

lv_display_t *display;

static lv_color_t *draw_buf_1;
static lv_color_t *draw_buf_2;

void flush_display(lv_display_t, const lv_area_t*, uint8_t*);
uint32_t tick(void);

TAMC_GT911 *touch_screen;

NightLatch_Status system_status;

void setup(void);
void loop(void);

#endif
