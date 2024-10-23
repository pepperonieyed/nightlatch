#ifndef NIGHTLATCH_INC_SCREENS
#define NIGHTLATCH_INC_SCREENS

#include <lvgl.h>
#include <map>

enum Screen {
    // NONE should never have an associated function
    NONE,
    LOGIN,
    SD_ERROR
};

using FuncPtr_t = void(std::map<std::string, lv_obj_t*>&);

extern std::map<Screen, FuncPtr_t*> NightLatch_Screens;

void init_screens(void);

#endif
