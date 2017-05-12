//
//  16_ReverseList.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "16_ReverseList.hpp"
#include <iostream>

using namespace std;

ListNode *reverseList(ListNode *head) {
    // 如果只有一个节点
    if (head == NULL || head->pNext == NULL) {
        return head;
    }
    // 如果只有两个节点
    if (head->pNext->pNext == NULL) {
        head->pNext->pNext = head;
        head->pNext = NULL;
        
        return head;
    }
    
    ListNode *iterNode = head;
    ListNode *iterNextNode = iterNode->pNext;
    ListNode *nextReverseNode = iterNextNode->pNext;
    
    while (nextReverseNode->pNext) {
        iterNextNode->pNext = iterNode;
        iterNode->pNext = nextReverseNode;
        nextReverseNode = nextReverseNode->pNext;
    }
    
    nextReverseNode->pNext = iterNextNode;
    
    head->pNext = NULL;
    
    return nextReverseNode;
}
