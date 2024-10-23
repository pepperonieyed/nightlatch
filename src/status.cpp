#include <status.hpp>
#include <sd_card.hpp>

NightLatch_Status::NightLatch_Status(void)
    : current_screen(Screen::NONE)
{
    sd_inserted = sdcard_init();
}

bool NightLatch_Status::is_SD_Inserted(void)
{
    if (!sd_inserted)
        sd_inserted = sdcard_init();

    return sd_inserted;
}

Screen NightLatch_Status::getScreen(void)
{
    return current_screen;
}

bool NightLatch_Status::setScreen(Screen s)
{
    if (!NightLatch_Screens.count(s))
    {
        // Screen does not have associated function
        return false;
    }
    current_screen = s;
    return true;
}

std::map<std::string, lv_obj_t*>& NightLatch_Status::getObjects(void)
{
    return screen_objects;
}
