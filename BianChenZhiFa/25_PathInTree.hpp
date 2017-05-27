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
#include <vector>

/*
 BinaryTreeNode node1 = {4, NULL, NULL, false, false};
 BinaryTreeNode node2 = {7, NULL, NULL, false, false};
 BinaryTreeNode node3 = {5, &node1, &node2, false, false};
 BinaryTreeNode node4 = {12, NULL, NULL, false, false};
 BinaryTreeNode node5 = {10, &node3, &node4, false, false};
 BinaryTreeNode node6 = {14, NULL, NULL, false, false};
 BinaryTreeNode node7 = {18, NULL, &node5, false, false};
 BinaryTreeNode node8 = {40, &node6, &node7, false, false};
 
 pathInTree(&node8, 22);
 */

using namespace std;

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *pLeft;
    BinaryTreeNode *pRight;
    bool pLVisited;
    bool pRvisited;
};

void pathInTree(BinaryTreeNode *root, int sum);

#endif /* _5_PathInTree_hpp */
