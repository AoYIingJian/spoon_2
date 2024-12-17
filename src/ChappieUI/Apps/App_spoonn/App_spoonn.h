
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_spoonn_appName();
    void* App_spoonn_appIcon();
    void App_spoonn_onCreate();
    void App_spoonn_onLoop();
    void App_spoonn_onDestroy();
    void App_spoonn_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Template);
}

