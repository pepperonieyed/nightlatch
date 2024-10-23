#ifndef NIGHTLATCH_INC_STATUS
#define NIGHTLATCH_INC_STATUS

#include <lvgl.h>
#include <ui/screens.hpp>

class NightLatch_Status
{
    private:
        Screen current_screen;
        bool sd_inserted;
        std::map<std::string, lv_obj_t*> screen_objects;
    public:
        NightLatch_Status(void);
        bool is_SD_Inserted(void);
        Screen getScreen(void);
        bool setScreen(Screen);
        std::map<std::string, lv_obj_t*>& getObjects(void);
};

#endif
