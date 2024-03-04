//
// Created by EDY on 2023/9/9.
//
#include <map>
#include <exception>
#include <filesystem>
namespace stdfs = std::filesystem;

#include "app.h"

#include "information/information_window.h"
#include "log/log_window.h"
#include "file/file_window.h"
#include "inspector/inspector_window.h"
#include "terminal/terminal_window.h"
#include "profiler/profiler_window.h"
#include "app_settings.h"


#ifdef __EMSCRIPTEN__
#include <unistd.h>
    #include <emscripten.h>
    // // 将虚拟文件系统与持久化存储同步
    // void syncFileSystem() {
    //     EM_ASM(
    //         FS.syncfs(false, function(err) {
    //             if (err) {
    //                 console.error('Failed to sync filesystem', err);
    //             } else {
    //                 console.log('Filesystem synced');
    //             }
    //         });
    //     );
    // }

    void resetFileSystem(bool reset) 
    {
        std::string config_ini = "/config/imgui.ini";
        std::string default_ini = "/data/imgui.ini";

        printf("%s exists %d\n","/config",stdfs::exists("/config"));

        std::string load_config = default_ini;     
        if(reset)
        {
            if(stdfs::exists(config_ini.c_str()))
            {
                int status = unlink(config_ini.c_str());
                if (status == 0) {
                    printf("File deleted successfully\n");
                } else {
                    perror("unlink");
                }
            }
            if(stdfs::exists(default_ini.c_str()))
            {
                load_config = default_ini;
            }
        }
        else
        {
            if(stdfs::exists(config_ini.c_str()))
            {
                load_config = config_ini;
            }
        }

        ImGui::LoadIniSettingsFromDisk(load_config.c_str());
        printf("%s exists %d\n%s exists %d\n",config_ini.c_str(),stdfs::exists(config_ini.c_str()),default_ini.c_str(),stdfs::exists(default_ini.c_str()));
    }


    extern "C" 
    { 
        EMSCRIPTEN_KEEPALIVE 
        void set_web_file_system()
        {
            resetFileSystem(false);
            // LoadAppSettings();

            // float size_pixels = GetFloatConfig("FontSize",20);
            // ImGuiIO &io = ImGui::GetIO();
            // io.Fonts->AddFontFromFileTTF("/data/SourceCodePro-Medium.ttf", size_pixels);
        }

        EMSCRIPTEN_KEEPALIVE 
        void set_web_location_host(const char* host)
        {
            server_url_ = "ws://";
            server_url_.append(std::string(host));
            // server_url_ = "ws://100.72.78.107:2233";
            puts(server_url_.c_str());
        }
    }

    
#endif

#include <iostream>
#include "Python.h"
#include "system_python.h"

App::App():ImplApp("PerfBee",1280,800,0)
{
    ImPlot::CreateContext();

    ImGuiIO &io = ImGui::GetIO();
    float size_pixels = 14.0f;

#ifdef __EMSCRIPTEN__
    EM_ASM(
        var url;
        url=window.location.host;
        // alert(url);
        Module.onRuntimeInitialized = function() {
            if (!FS.analyzePath('/config').exists) {
                FS.mkdir('/config');
            }
            else
            {
                console.log("config --xxxxx--")
            }
            FS.mount(IDBFS, {}, '/config');
             // 同步从 IndexedDB 读取到内存
            FS.syncfs(true, function (err) {
                if (err) {
                    console.error('Error loading from IndexedDB', err);
                } else {
                    // 文件系统准备就绪，可以读取文件了
                    Module.ccall("set_web_file_system",null);
                    console.log("set_web_file_system")
                }
            });

            // 现在可以安全地调用导出的函数了
            const url_str = String(url);
            Module.ccall("set_web_location_host",null,['string'],[url_str]);
        };
    );

    //io.IniFilename  = "/data/imgui.ini";
    //printf("/data/imgui.ini exists %d\n",fs::exists("/data/imgui.ini"));
    //io.Fonts->AddFontFromFileTTF("/data/wqy-microhei.ttc", 14.0f,NULL,io.Fonts->GetGlyphRangesChineseSimplifiedCommon());
    io.Fonts->AddFontFromFileTTF("/data/SourceCodePro-Medium.ttf", size_pixels);
#else
    io.Fonts->AddFontFromFileTTF("SourceCodePro-Medium.ttf", size_pixels);
#endif

    std::string cmd_result = SystemPython::Run("python python_scripts/main.py");
    std::cout << cmd_result << std::endl;


//    const std::wstring path = L"python_env;python_env/Scripts;python_env/Lib;python_env/Lib/site-packages;python_scripts";
//    Py_SetPath(path.c_str());
    Py_Initialize();
    PyRun_SimpleString("print('Hello, world!')");
   // PyRun_SimpleString("execfile('python_scripts/main.py')");
    try
    {
//        const char* scriptFilename = "python_scripts/main.py";
//        // 读取Python脚本文件内容
//        FILE* PythonScriptFile = fopen(scriptFilename, "r");
//        if (PythonScriptFile)
//        {
//            // 运行Python脚本
//            PyRun_SimpleFile(PythonScriptFile, scriptFilename);
//            // 关闭文件
//            fclose(PythonScriptFile);
//        } else {
//            // 文件打开失败的错误处理
//            fprintf(stderr, "Cannot open Python script file: %s\n", scriptFilename);
//        }
    }
    catch (std::exception &e)
    {
        std::cout << "Standard exception: " << e.what() << std::endl;
    }

    Py_Finalize();


}

App::~App()
{

}


void App::OnImGuiDraw()
{
    static bool show_information = true;
    static ImGuiDockNodeFlags dockspace_flags = ImGuiDockNodeFlags_None;
    ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoDocking;
    const ImGuiViewport *viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(viewport->WorkPos);
    ImGui::SetNextWindowSize(viewport->WorkSize);
    ImGui::SetNextWindowViewport(viewport->ID);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
    window_flags |= ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize |
                    ImGuiWindowFlags_NoMove;
    window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoNavFocus;

    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.0f, 0.0f));
    if (ImGui::Begin("Information DockSpace", &show_information, window_flags))
    {
        ImGui::PopStyleVar(3);

        ImGuiIO &io = ImGui::GetIO();
        if (io.ConfigFlags & ImGuiConfigFlags_DockingEnable)
        {
            ImGuiID dockspace_id = ImGui::GetID("DebuggerDockSpace");
            ImGui::DockSpace(dockspace_id, ImVec2(0.0f, 0.0f), dockspace_flags);
        }

        if (ImGui::BeginMenuBar())
        {

#ifndef __EMSCRIPTEN__
            if (ImGui::BeginMenu("Demo"))
            {
               if(ImGui::MenuItem("ImGui",NULL,&show_demo_window_))
               {
               }
                if(ImGui::MenuItem("Implot",NULL,&show_implot_demo_window_))
                {
                }
                ImGui::EndMenu();
            }
#endif

#ifdef __EMSCRIPTEN__

            if (ImGui::BeginMenu("Settings"))
            {
                if(ImGui::MenuItem("Save"))
                {
                    if(stdfs::exists("/config"))
                    {
                        std::string config_ini = "/config/imgui.ini";
                        printf("SaveIniSettingsToDisk: %s \n",config_ini.c_str());
                        ImGui::SaveIniSettingsToDisk(config_ini.c_str());

                        AppSettings::SyncFileSystem();
                    }
                }

                if(ImGui::MenuItem("Reset"))
                {
                    resetFileSystem(true);
                }

                ImGui::EndMenu();
            }
#endif

            ImGui::EndMenuBar();
        }

        ImGui::BeginChild("Settings",ImVec2(200,0),true);

        if(ImGui::Button("Refresh"))
        {

        }
//        ImGui::Combo("Pick a device",)
        ImGui::EndChild();

        ImGui::SameLine();
        ImGui::BeginChild("Performance",ImVec2(0,0),true);

        ImGui::Button("Save");
        ImGui::SameLine();
        ImGui::Button("Reset");

        ImGui::EndChild();
    }
    ImGui::End();



    if(show_demo_window_)
    {
        ImGui::ShowDemoWindow(&show_demo_window_);
    }
    if(show_implot_demo_window_)
    {
        ImPlot::ShowDemoWindow();
    }
}




void App::RunAfter()
{
    ImPlot::DestroyContext();
}
