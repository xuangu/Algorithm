//
//  25_PathInTree.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 26/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _5_PathInTree_hpp
#define _5_PathInTree_hpp

#include <stdio.h>
#include <stack>

using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
};

void pathInTree(BinaryTreeNode *root, int sum);

#endif /* _5_PathInTree_hpp */
