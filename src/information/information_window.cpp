//
// Created by EDY on 2023/11/13.
//

#include "information_window.h"

InformationWindow::InformationWindow()
{
    name_ = "Information";
}

InformationWindow::~InformationWindow()
{}

void InformationWindow::OnMessage(const std::string &message)
{
        json json_information = json::parse(message);
        std::map<std::string,std::map<std::string,std::string>> information = json_information;
        for (auto iter = information.begin();iter != information.end();iter++)
        {
            information_[iter->first] = iter->second;
        }
}

void InformationWindow::OnShow(bool show)
{
    if(show)
    {
        information_.clear();
        Send("show");
    }
    else
    {
        information_.clear();
        Send("hide");
    }
}

void InformationWindow::OnDraw()
{
    if (information_.size() > 0)
    {
        for (auto iter = information_.begin();iter!=information_.end();iter++)
        {
            ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;
            if (ImGui::BeginTabBar("InformationBar", tab_bar_flags))
            {
                if (ImGui::BeginTabItem(iter->first.c_str()))
                {
                    if(ImGui::BeginChild("Information_Child"))
                    {
                        ImGuiTableFlags table_flags =
                                ImGuiTableFlags_RowBg | ImGuiTableFlags_Borders | ImGuiTableFlags_Resizable;
                        if(ImGui::BeginTable("Information_Table", 2, table_flags))
                        {
                            ImGui::TableSetupColumn("Key", ImGuiTableColumnFlags_WidthFixed);
                            ImGui::TableSetupColumn("Value", ImGuiTableColumnFlags_WidthStretch);
//                    ImGui::TableHeadersRow();
                            const std::map<std::string, std::string> infos = iter->second;
                            for (auto iterInfo = infos.begin(); iterInfo != infos.end(); iterInfo++)
                            {
                                ImGui::TableNextRow();
                                ImGui::TableSetColumnIndex(0);
                                ImGui::Text(iterInfo->first.c_str());
                                ImGui::TableSetColumnIndex(1);
                                ImGui::TextWrapped(iterInfo->second.c_str());
                            }
                        }
                        ImGui::EndTable();
                    }
                    ImGui::EndChild();
                    ImGui::EndTabItem();
                }
                ImGui::EndTabBar();
            }
        }
    }
}