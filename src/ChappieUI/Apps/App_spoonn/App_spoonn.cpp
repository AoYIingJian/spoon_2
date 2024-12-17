#include "App_spoonn.h"
#include "../../../ChappieBsp/Chappie.h"

static std::string app_name = "Spoonn";
static CHAPPIE* device;

namespace App {

    std::string App_spoonn_appName()
    {
        return app_name;
    }

    void* App_spoonn_appIcon()
    {
        return NULL;
    }

    void App_spoonn_onCreate()
    {
        UI_LOG("[%s] onCreate\n", App_spoonn_appName().c_str());

        /*Create an Arc*/
        lv_obj_t * arc = lv_arc_create(lv_scr_act());
        lv_obj_set_size(arc, 150, 150);
        lv_arc_set_rotation(arc, 135);
        lv_arc_set_bg_angles(arc, 0, 270);
        lv_arc_set_value(arc, 40);
        lv_obj_center(arc);
    }

    void App_spoonn_onLoop()
    {
        // 在这里添加循环逻辑
    }

    void App_spoonn_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_spoonn_appName().c_str());
    }

    void App_spoonn_getBsp(void* bsp)
    {
        device = (CHAPPIE*)bsp;
    }
}

