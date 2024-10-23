#include <lvgl.h>

#include <touch.hpp>

/*
 * read_touchscreen
 * -------------------
 * Gets touch input from the touchscreen
*/
void read_touchscreen(lv_indev_t *indev, lv_indev_data_t *data)
{
  touch_screen->read();
  if (touch_screen->isTouched) {
    // LVGL doesn't support multi-touch so just use first touch
    data->state = LV_INDEV_STATE_PRESSED;
    data->point.x = touch_screen->points[0].x;
    data->point.y = touch_screen->points[0].y;
  } else {
    data->state = LV_INDEV_STATE_RELEASED;
  }
}
