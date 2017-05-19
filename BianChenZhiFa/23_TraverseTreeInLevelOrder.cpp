//
//  23_TraverseTreeInLevelOrder.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 19/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "23_TraverseTreeInLevelOrder.hpp"

void traverseTreeInLevelOrder(BinaryTreeNode *rootNode) {
    if (rootNode == NULL) {
        return ;
    }
    
    deque<BinaryTreeNode *> dequeTreeNode;
    
    dequeTreeNode.push_back(rootNode);
    
    while (dequeTreeNode.size() > 0) {
        BinaryTreeNode *pNode = dequeTreeNode.front();
        printf("%d\n", pNode->value);
        
        if (pNode->pLeft) {
            dequeTreeNode.push_back(pNode->pLeft);
        }
        
        if (pNode->pRight) {
            dequeTreeNode.push_back(pNode->pRight);
        }
    }
}
