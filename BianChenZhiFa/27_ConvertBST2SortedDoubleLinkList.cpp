//
//  27_ConvertBST2SortedDoubleLinkList.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 27/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "27_ConvertBST2SortedDoubleLinkList.hpp"

void convertToLinkList(BinaryTreeNode *root, BinaryTreeNode **linkList);

void convertBST2SortedDoubleLinkList(BinaryTreeNode *root) {
    BinaryTreeNode *linkList = NULL;
    
    if (root) {
        convertToLinkList(root, &linkList);
    }
}


void convertToLinkList(BinaryTreeNode *root, BinaryTreeNode **linkList) {
    BinaryTreeNode *curNode = root;
    
    if (!curNode) {
        return ;
    }
    
    if (curNode->pLeft) {
        convertToLinkList(curNode->pLeft, linkList);
    }
    
    curNode->pLeft = *linkList;
    
    if (*linkList) {
        (*linkList)->pRight = curNode;
    }
    
    *linkList = curNode;
    
    if (curNode->pRight) {
        convertToLinkList(curNode->pRight, linkList);
    }
}
