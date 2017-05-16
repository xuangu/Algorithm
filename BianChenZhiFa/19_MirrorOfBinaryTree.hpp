//
//  19_MirrorOfBinaryTree.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 16/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _9_MirrorOfBinaryTree_hpp
#define _9_MirrorOfBinaryTree_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

void mirrorTree(BinaryTreeNode *pRoot);

#endif /* _9_MirrorOfBinaryTree_hpp */
