//
// Created by wanderer on 2023/11/14.
//

#ifndef RUNTIMEDEBUGGER_INSPECTOR_WINDOW_H
#define RUNTIMEDEBUGGER_INSPECTOR_WINDOW_H

#include <map>
#include <string>
#include <vector>

#include "app_window.h"
#include "hierarchy_node.h"
#include "compoent_inspector.h"
#include "req_inspector.h"

class InspectorWindow :public AppWindow
{
public:
    InspectorWindow();
    ~InspectorWindow();
private:
    std::map<std::string,std::vector<const HierarchyNode*>> hierarchy_root_nodes_;
    std::vector<const HierarchyNode*> search_hierarchy_root_nodes_;
    std::string search_hierarchy_text_;
    std::map<int,HierarchyNode> map_hierarchy_nodes_;
    HierarchyNode* hierarchy_node_selected_;

    std::map<int,CompoentInspector> map_components_;
    std::string add_component_type_;

    void DrawInspectorNode(const HierarchyNode* hierarchy_node,bool draw_child);
    void DrawReflectionInspector(ReflectionInspector *reflection_node,int component_id);

    void Reset();
    void FindGameObjects();
public:
    void OnMessage(const std::string &message) override;
    void OnDraw() override;
    void OnShow(bool show) override;
};


#endif //RUNTIMEDEBUGGER_INSPECTOR_WINDOW_H