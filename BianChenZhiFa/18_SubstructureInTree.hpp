//
//  18_SubstructureInTree.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 15/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _8_SubstructureInTree_hpp
#define _8_SubstructureInTree_hpp

#include <stdio.h>

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

bool hasSubTree(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2);

bool isTree1HaveTree2(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2);

#endif /* _8_SubstructureInTree_hpp */
