//
//  17_MergeSortedLists.cpp
//  BianChenZhiFa
//
//  Created by 顾晅 on 5/12/17.
//  Copyright © 2017 gu. All rights reserved.
//

#include "17_MergeSortedLists.hpp"

ListNode *mergeSortedLists(ListNode *list1, ListNode *list2) {
    ListNode *list1CurNode = list1;
    ListNode *list2CurNode = list2;
    ListNode *preCurNode = NULL;
    while (list1CurNode && list2CurNode) {
        while (list1CurNode && (list1CurNode->value <= list2CurNode->value)) {
            preCurNode = list1CurNode;
            list1CurNode = list1CurNode->pNext;
        }
        
        if (list1CurNode == NULL) {
            break;
        }
        
        preCurNode->pNext = list2CurNode;
        
        preCurNode = list2CurNode;
        
        list2CurNode = list2CurNode->pNext;
        
        while (list2CurNode && (list2CurNode->value <= list1CurNode->value)) {
            preCurNode = list2CurNode;
            list2CurNode = list2CurNode->pNext;
        }
        
        if (list2CurNode == NULL) {
            break;
        }
        
        preCurNode->pNext = list1CurNode;
        preCurNode = list1CurNode;
        list1CurNode = list1CurNode->pNext;
    }
    
    if (list1CurNode) {
        preCurNode->pNext = list1CurNode;
    }
    
    if (list2CurNode) {
        preCurNode->pNext = list2CurNode;
    }
    
    return list1;
}
