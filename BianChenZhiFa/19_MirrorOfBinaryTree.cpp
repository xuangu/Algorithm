//
//  19_MirrorOfBinaryTree.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 16/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "19_MirrorOfBinaryTree.hpp"

void mirrorTree(BinaryTreeNode *pRoot) {
    if (pRoot == NULL && (pRoot->pLeft == NULL && pRoot->pRight == NULL)) {
        return;
    }
    
    BinaryTreeNode *swapTempNode = pRoot->pLeft;
    pRoot->pRight = pRoot->pLeft;
    pRoot->pLeft = swapTempNode;
    
    if (pRoot->pLeft) {
        mirrorTree(pRoot->pLeft);
    }
    
    if (pRoot->pRight) {
        mirrorTree(pRoot->pRight);
    }
}
