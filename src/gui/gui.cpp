#include "gui.h"

#include <Arduino.h>
#include <esp_log.h>
#include <FreeRTOS.h>
#include <freertos/timers.h>

#include <TFT_eSPI.h>

#include <lvgl.h>
#include "lvgl_fs.h"

#include "stringtable.h"

static const uint16_t screenWidth  = TFT_WIDTH;
static const uint16_t screenHeight = TFT_HEIGHT;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 10 ];
TaskHandle_t lvgl_Task_Handle;
SemaphoreHandle_t lvgl_lock;

TFT_eSPI tft = TFT_eSPI(); /* TFT instance */

#if LV_USE_LOG != 0
#if LV_LOG_PRINTF == 0
// TODO: Port this to esplog
/* Serial debugging */
static void my_print(const char * buf)
{
    Serial.print(buf);
    Serial.flush();
}
#endif
#endif


/* Display flushing */
static void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

static void lvgl_task(TimerHandle_t xTimer)
{
    xSemaphoreTake(lvgl_lock,portMAX_DELAY);
    lv_fs_init();
    strings::kh_load_all_font();

    lv_obj_t * label = lv_label_create(lv_scr_act());
    strings::kh_fonttool_set_lang(strings::Chinese);
    lv_label_set_text(label,strings::kh_fonttool_get_text(strings::Language));
    log_w("%s",strings::kh_fonttool_get_text(strings::Language));
    lv_obj_center(label);
    const lv_font_t* tmp = nullptr;
    tmp = strings::kh_fonttool_get_font(strings::Language);
    if (tmp == nullptr){
    }else{
        lv_obj_set_style_text_font(label,tmp,0);
    }
    xSemaphoreGive(lvgl_lock);
    while (1)
    {
        if (xSemaphoreTake(lvgl_lock,0) == pdTRUE) //give up timer handle if didn't get the lock
            lv_timer_handler(); /* let the GUI do its work */
        vTaskDelay(pdMS_TO_TICKS(5));
    }
    
}

/**
 * @brief set up all gui stuff:
 *        1. Set up tft_espi
 *        2. Setup lvgl, set lvgl fs callbacks
 *        3. Load Cutsom Font then common styles
 *        4. Call lv_layout_init to init all layouts
 *        5. Set a freertos timer to call lv_timer_handler (The default timer task dont have enough
 *           stack to call lv_timer_handler so it is commented out and called in main loop instead)
 * 
 */
void guiSetUp(){
    
    // Begin set tft_espi
    tft.begin();          /* TFT init */
    tft.setRotation( 4 ); /* Landscape orientation, flipped */
    // Set tft_espi Done


    // Begin init lvgl
    lvgl_lock = xSemaphoreCreateMutex();
    lv_init();
#if LV_USE_LOG != 0
#if LV_LOG_PRINTF == 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif
#endif
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * 10 );
    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );
    xSemaphoreGive(lvgl_lock);

    xTaskCreatePinnedToCore(lvgl_task,
                            "LVGL FreeRTOS Timer",
                            8192,
                            nullptr,
                            0,
                            &lvgl_Task_Handle,
                            1);

}

