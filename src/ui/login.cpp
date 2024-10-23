#include <lvgl.h>
#include <map>

#include <settings.hpp>
#include <ui/login.hpp>
#include <ui/styles.hpp>

static void btn_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = (lv_obj_t*)lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED)
    {
        static uint8_t cnt = 0;
        cnt++;

        /* Get the first child of the button which is the label and change its text */
        lv_obj_t *label = lv_obj_get_child(btn, 0);
        lv_label_set_text_fmt(label, "Button: %d", cnt);
    }
}

void show_login(std::map<std::string, lv_obj_t*> &objects)
{
    for (std::pair<const std::string, lv_obj_t *> &obj: objects) {
        lv_obj_del(objects[obj.first]);
    }
    objects.clear();

    lv_obj_t *welcome_label = lv_label_create(lv_screen_active());
    lv_label_set_text(welcome_label, "Welcome to NightLatch");
    lv_obj_add_style(welcome_label, &style_title_text, LV_STATE_DEFAULT);
    lv_obj_align(welcome_label, LV_ALIGN_TOP_MID, 0, 110);
    objects["welcome_label"] = welcome_label;

    lv_obj_t *login_label = lv_label_create(lv_screen_active());
    lv_label_set_text(login_label, "Please login to continue...");
    lv_obj_add_style(login_label, &style_body_text, LV_STATE_DEFAULT);
    lv_obj_align(login_label, LV_ALIGN_TOP_MID, 0, 130);

    lv_obj_t *footer_label = lv_label_create(lv_screen_active());
    lv_label_set_text(footer_label, "NightLatch v" NIGHTLATCH_VERSION);
    lv_obj_align(footer_label, LV_ALIGN_BOTTOM_MID, 0, -14);
    lv_obj_add_style(footer_label, &style_footer_text, LV_STATE_DEFAULT);

    lv_obj_t *btn = lv_button_create(lv_screen_active());
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_size(btn, 120, 50);
    lv_obj_add_event_cb(btn, btn_event_cb, LV_EVENT_ALL, NULL);

    lv_obj_t *btn_label = lv_label_create(btn);
    lv_label_set_text(btn_label, "Login");
    lv_obj_align(btn_label, LV_ALIGN_CENTER, 0, 0);
}
