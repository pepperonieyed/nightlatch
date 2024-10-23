#include <lvgl.h>

#include <ui/styles.hpp>
#include <ui/components/images/logo_header.c>

LV_IMAGE_DECLARE(logo_header);

void menubar_init(void)
{
    lv_obj_t *bar = lv_obj_create(lv_screen_active());
    lv_obj_align(bar, LV_ALIGN_TOP_MID, 0, 0);
    lv_obj_set_size(bar, 480, 100);
    lv_obj_add_style(bar, &style_menubar, LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(bar, LV_BORDER_SIDE_BOTTOM, LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(bar, lv_color_hex(0x131725), LV_STATE_DEFAULT);
    lv_obj_remove_flag(bar, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *logo_img = lv_image_create(bar);
    lv_image_set_src(logo_img, &logo_header);
    lv_obj_align(logo_img, LV_ALIGN_LEFT_MID, 0, 0);
}
