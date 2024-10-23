#include <ui/screens.hpp>
#include <ui/login.hpp>
#include <ui/sd_error.hpp>

std::map<Screen, FuncPtr_t*> NightLatch_Screens;

void init_screens(void) {
    NightLatch_Screens.insert({
        {Screen::LOGIN, show_login},
        {Screen::SD_ERROR, show_sd_error}
    });
}
