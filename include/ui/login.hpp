#ifndef NIGHTLATCH_INC_UI_LOGIN
#define NIGHTLATCH_INC_UI_LOGIN

#include <lvgl.h>
#include <map>

void show_login(std::map<std::string, lv_obj_t*>&);
static void btn_event_cb(lv_event_t);

#endif
