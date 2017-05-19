//
//  23_TraverseTreeInLevelOrder.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 19/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _3_TraverseTreeInLevelOrder_hpp
#define _3_TraverseTreeInLevelOrder_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

void traverseTreeInLevelOrder(BinaryTreeNode *rootNode);

#endif /* _3_TraverseTreeInLevelOrder_hpp */
