// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: menu

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_menu_panel;
lv_obj_t *ui_menu_battery_soc_symbol;
lv_obj_t *ui_menu_battery_charging_symbol;
lv_obj_t *ui_menu_battery_soc_text;
lv_obj_t *ui_fps_label;
lv_obj_t *ui_resume_btn;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_volume_mute_btn;
lv_obj_t *ui_Label10;
lv_obj_t *ui_volume_dec_btn;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Bar2;
lv_obj_t *ui_volume_inc_btn;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_brightness_dec_btn;
lv_obj_t *ui_Label13;
lv_obj_t *ui_brightness_bar;
lv_obj_t *ui_brightness_inc_btn;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_btn_slot_dec;
lv_obj_t *ui_Label2;
lv_obj_t *ui_slot_label;
lv_obj_t *ui_btn_slot_inc;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_load_btn;
lv_obj_t *ui_Label4;
lv_obj_t *ui_slot_image;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_save_btn;
lv_obj_t *ui_Label3;
lv_obj_t *ui_pause_image;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Dropdown2;
lv_obj_t *ui_reset_btn;
lv_obj_t *ui_Label5;
lv_obj_t *ui_quit_btn;
lv_obj_t *ui_Label7;
lv_obj_t *ui____menu_initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void menu_ui_init( void )
{
lv_disp_t *dispp = lv_display_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____menu_initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
