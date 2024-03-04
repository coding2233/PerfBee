//
// Created by EDY on 2023/9/9.
//

#ifndef RZJH_LAUNCH_APP_H
#define RZJH_LAUNCH_APP_H

#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>

#include "imgui_impl_sdl2_opengl3_app.h"
#include "TextEditor.h"
#include "app_window.h"
#include "app_version.h"
#include "implot.h"
#include "implot_internal.h"

class App :public ImplApp
{
public:
    App();
    //App(int width,int height,int flags):ImplApp(width,height,flags);
    ~App();
private:
    std::unique_ptr<WebSocket> ws_;
    // std::string server_url_;
    bool show_demo_window_;
    bool show_implot_demo_window_;

    AppVersion server_version_;
    AppVersion client_version_;

public:
    void OnImGuiDraw() override;
    void RunAfter() override;
};


#endif //RZJH_LAUNCH_APP_H
