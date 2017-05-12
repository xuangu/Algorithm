//
//  13_DeleteNodeInList.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "13_DeleteNodeInList.hpp"

/**
 删除list中的deletNode

 @param list 链表头指针
 @param deleteNode 需要被删除的节点
 @return 返回被删除的节点
 */
ListNode *deleteNodeInList(ListNode *list, ListNode *deleteNode) {
    ListNode *retNode = new ListNode();
    retNode->value = deleteNode->value;
    retNode->pNext = deleteNode->pNext;
    
    if (deleteNode->pNext == NULL) {
        ListNode *head = list;
        for (; head->pNext != deleteNode; head++) {
            
        }
        head->pNext = NULL;
        
        return retNode;
    }
    
    
    ListNode *deleteNodeNextNode = deleteNode->pNext;
    ListNode *deleteNodeNextTwoNode = deleteNodeNextNode->pNext;
    retNode = deleteNodeNextNode;
    
    deleteNode->value = deleteNodeNextNode->value;
    deleteNode->pNext = deleteNodeNextTwoNode;
    
    return retNode;
}
