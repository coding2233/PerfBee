//
// Created by EDY on 2023/11/14.
//

#ifndef RUNTIMEDEBUGGER_HIERARCHY_NODE_H
#define RUNTIMEDEBUGGER_HIERARCHY_NODE_H

#include <string>
#include <vector>
#include <map>

#include "nlohmann/json.hpp"
using json = nlohmann::json;

#include "imgui.h"

class HierarchyNode
{
public:
    HierarchyNode()
    {}
    ~HierarchyNode()
    {}
private:
    bool tree_node_opened_;
public:
    int InstanceID;
    int ParentInstanceID;
    std::string Name;
    std::string Scene;
    std::string Tag;
    std::string Layer;
    bool Active;
    std::vector<const HierarchyNode*> ChildrenNodes;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(HierarchyNode,InstanceID,ParentInstanceID,Name,Scene,Tag,Layer,Active);

    void AddChild(const HierarchyNode* node)
    {
        bool has_node = false;
        for (int i=0;i< ChildrenNodes.size();i++)
        {
            if (ChildrenNodes[i]->InstanceID == node->InstanceID)
            {
                has_node = true;
                break;
            }
        }
        if (!has_node)
        {
            ChildrenNodes.push_back(node);
        }
    }

    bool CheckTreeNodeOpened(bool opened)
    {
        if (tree_node_opened_!=opened)
        {
            tree_node_opened_ = opened;
            return true;
        }
        return false;
    }
};

#endif //RUNTIMEDEBUGGER_HIERARCHY_NODE_H
