//
//  25_PathInTree.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 26/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "25_PathInTree.hpp"

void pathInTree(BinaryTreeNode *root, int sum) {
    std::stack<BinaryTreeNode *> nodeStack;
    int acculator = 0;
    
    if (root && root->value < sum) {
        acculator += root->value;
        nodeStack.push(root);
        
        while (!nodeStack.empty()) {
            while (root->pLeft && acculator < sum) {
                root = root->pLeft;
                acculator += root->value;
                nodeStack.push(root);
            }
            
            if (root->pLeft == NULL && acculator == sum) {
                while (nodeStack.empty() == false) {
                    printf("%d\n", nodeStack.top()->value);
                    nodeStack.pop();
                }
            } else {
                acculator -= nodeStack.top()->value;
                nodeStack.pop();
                root = nodeStack.top();
                if (root->pRight) {
                    nodeStack.push(root->pRight);
                    root = root->pRight;
                }
            }
        }
    }
    
    
    
}
