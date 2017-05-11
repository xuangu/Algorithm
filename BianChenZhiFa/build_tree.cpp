//
//  build_tree.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 09/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "build_tree.hpp"
#include <iostream>

using namespace std;

struct tree_node {
    int node_value;
    struct tree_node *p_left;
    struct tree_node *p_right;
};

tree_node * build_tree_core(int *pre_order_start, int *pre_order_end,
                     int *in_order_start, int *in_order_end);


void build_tree(int *pre_order, int *in_order, int len) {
    build_tree_core(pre_order, pre_order + len - 1, in_order, in_order + len - 1);
}


tree_node * build_tree_core(int *pre_order_start, int *pre_order_end,
                     int *in_order_start, int *in_order_end) {
    tree_node *node = new tree_node();
    node->node_value = *pre_order_start;
    node->p_left = node->p_right = NULL;
    
    if (pre_order_start == pre_order_end &&
        in_order_start == in_order_end &&
        *pre_order_start == *pre_order_end) {
        return node;
    }
    
    int *root_node;
    
    for (root_node = in_order_start; root_node <= in_order_end; root_node++) {
        if (node->node_value == *root_node) {
            break;
        }
    }
    
    int left_nodes_len = (int)(root_node - in_order_start);
    
    // left tree
    node->p_left = build_tree_core(pre_order_start + 1, pre_order_start + left_nodes_len, in_order_start, root_node - 1);
    
    // right tree
    node->p_right = build_tree_core(pre_order_start + left_nodes_len + 1, pre_order_end, root_node + 1, in_order_end);
    
    return node;
}
