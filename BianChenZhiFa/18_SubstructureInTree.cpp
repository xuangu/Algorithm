//
//  18_SubstructureInTree.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 15/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "18_SubstructureInTree.hpp"
#include <iostream>

using namespace std;

bool isTree1HaveTree2(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    if (pRoot2 == NULL) {
        return true;
    }
    
    if (pRoot1 == NULL) {
        return false;
    }
    
    if (pRoot1->value != pRoot2->value) {
        return false;
    }
    
    return isTree1HaveTree2(pRoot1->pLeft, pRoot2->pLeft) && isTree1HaveTree2(pRoot1->pRight, pRoot2->pRight);
}

bool hasSubTree(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    bool result = false;
    if (pRoot1->value == pRoot2->value) {
        result = isTree1HaveTree2(pRoot1, pRoot2);
    }
    
    if (!result) {
        result = hasSubTree(pRoot1->pLeft, pRoot2->pLeft);
    }
    
    if (!result) {
        result = hasSubTree(pRoot1->pRight, pRoot2->pRight);
    }
    
    return result;
}
