//
//  25_PathInTree.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 26/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "25_PathInTree.hpp"

void findPathRecursive(BinaryTreeNode *root, std::vector<BinaryTreeNode *> path);

void pathInTree(BinaryTreeNode *root, int sum) {
    std::vector<BinaryTreeNode *> path;
    findPathRecursive(root, path);
}

void findPathRecursive(BinaryTreeNode *root, std::vector<BinaryTreeNode *> path) {
    path.push_back(root);
    bool isLeaf = root->pLeft == NULL && root->pRight == NULL;
    if (isLeaf) {
        std::vector<BinaryTreeNode *>::iterator iter = path.begin();
        for (; iter < path.end(); ++iter) {
            printf("%d  ", (*iter)->value);
        }
        
        printf("\n");
    }
    
    if (root->pLeft) {
        findPathRecursive(root->pLeft, path);
    }
    
    if (root->pRight) {
        findPathRecursive(root->pRight, path);
    }
    
    if (root->pLeft == NULL && root->pRight == NULL) {
        path.pop_back();
    }
}


//void pathInTree(BinaryTreeNode *root, int sum) {
//    std::vector<BinaryTreeNode *> nodeStack;
//    
//    if (root) {
//        nodeStack.push_back(root);
//        
//        while (!nodeStack.empty()) {
//            while (root) {
//                while (root && root->pLVisited == false) {
//                    root->pLVisited = true;
//                    root = root->pLeft;
//                    if (root) {
//                        nodeStack.push_back(root);
//                    }
//                }
//                
//                root = nodeStack.back();
//                
//                if (root && root->pRvisited == false) {
//                    root->pRvisited = true;
//                    root = root->pRight;
//                    if (root) {
//                        nodeStack.push_back(root);
//                    }
//                    
//                    continue;
//                }
//                
//                if (root && root->pLeft == NULL && root->pRight == NULL) {
//                    root->pLVisited = true;
//                    root->pRvisited = true;
//                    break ;
//                }
//            }
//            
//            // 此时root指向叶子节点的左右空子节点
//            root = nodeStack.back();
//    
//            if (root->pLeft == NULL && root->pRight == NULL) {
//                int acculator = 0;
//                for (vector<BinaryTreeNode *>::iterator iter = nodeStack.begin(); iter < nodeStack.end(); iter++) {
//                    acculator += (*iter)->value;
//                    printf("%d  ", (*iter)->value);
//                }
//                
//                printf("sum:%d\n", acculator);
//            }
//            
//            while (root && root->pLVisited && root->pRvisited && !nodeStack.empty()) {
//                nodeStack.pop_back();
//                root = nodeStack.back();
//            }
//        }
//    }
//}