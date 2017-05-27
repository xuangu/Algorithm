//
//  26_CopyComplexList.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 27/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "26_CopyComplexList.hpp"

void insertCopiedNodeToList(ComplexListNode *pHead);

void setCopiedNodesSiblingInList(ComplexListNode *pHead);

ComplexListNode *getCopiedNodesListFromList(ComplexListNode *pHead);

ComplexListNode *clone(ComplexListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    
    insertCopiedNodeToList(pHead);
    
    setCopiedNodesSiblingInList(pHead);
    
    ComplexListNode *copiedNodeListHead = getCopiedNodesListFromList(pHead);
    
    return copiedNodeListHead;
}


void insertCopiedNodeToList(ComplexListNode *pHead) {
    ComplexListNode *curNode = pHead;
    
    while (curNode) {
        ComplexListNode *copiedNode = new ComplexListNode();
        copiedNode->value = curNode->value;
        copiedNode->pNext = curNode->pNext;
        copiedNode->pSibling = NULL;
        curNode->pNext = copiedNode;
        
        curNode = copiedNode->pNext;
    }
}


void setCopiedNodesSiblingInList(ComplexListNode *pHead) {
    ComplexListNode *curNode = pHead;
    
    while (curNode) {
        ComplexListNode *copiedCurNode = curNode->pNext;
        if (copiedCurNode && curNode->pSibling) {
            copiedCurNode->pSibling = curNode->pSibling->pNext;
        }
        if (copiedCurNode) {
            curNode = copiedCurNode->pNext;
        } else {
            curNode = NULL;
        }
    }
}


ComplexListNode *getCopiedNodesListFromList(ComplexListNode *pHead) {
    ComplexListNode *curNode = pHead;
    ComplexListNode *copiedNodeListHead = curNode->pNext;
    
    while (curNode) {
        ComplexListNode *copiedCurNode = curNode->pNext;
        
        curNode->pNext = copiedCurNode->pNext;
        
        curNode = curNode->pNext;
        
        if (curNode) {
            copiedCurNode->pNext = curNode->pNext;
        } else {
            copiedCurNode->pNext = NULL;
        }
    }
    
    return copiedNodeListHead;
}
