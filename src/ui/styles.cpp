#include <ui/styles.hpp>
#include <fonts/poppins_40_700.c>
#include <fonts/suse_16_400.c>
#include <fonts/suse_18_400.c>

lv_style_t style_title_text;
lv_style_t style_body_text;
lv_style_t style_footer_text;
lv_style_t style_menubar;

void style_init_title_text(void)
{
    lv_style_init(&style_title_text);
    lv_style_set_text_align(&style_title_text, LV_TEXT_ALIGN_CENTER);
    lv_style_set_text_font(&style_title_text, &poppins_40_700);
    lv_style_set_text_color(&style_title_text, lv_color_hex(0xBFC4D6));
}

void style_init_body_text(void)
{
    lv_style_init(&style_body_text);
    lv_style_set_text_align(&style_body_text, LV_TEXT_ALIGN_CENTER);
    lv_style_set_text_font(&style_body_text, &suse_18_400);
    lv_style_set_text_color(&style_body_text, lv_color_hex(0xA4A9BA));
}

void style_init_footer_text(void)
{
    lv_style_init(&style_footer_text);
    lv_style_set_text_align(&style_footer_text, LV_TEXT_ALIGN_CENTER);
    lv_style_set_text_font(&style_footer_text, &suse_16_400);
    lv_style_set_text_color(&style_footer_text, lv_color_hex(0x8F8F8F));
}

void style_init_menubar(void)
{
    lv_style_init(&style_menubar);
    lv_style_set_radius(&style_menubar, 0);
    lv_style_set_border_color(&style_menubar, lv_color_hex(0xD78F3B));
    lv_style_set_shadow_width(&style_menubar, 5);
    lv_style_set_shadow_spread(&style_menubar, 5);
    lv_style_set_shadow_color(&style_menubar, lv_color_hex(0xD78F3B));
}

void styles_init()
{
    style_init_title_text();
    style_init_body_text();
    style_init_footer_text();
    style_init_menubar();
}
