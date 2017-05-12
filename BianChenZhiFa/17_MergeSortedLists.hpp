//
//  17_MergeSortedLists.hpp
//  BianChenZhiFa
//
//  Created by 顾晅 on 5/12/17.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _7_MergeSortedLists_hpp
#define _7_MergeSortedLists_hpp

#include <stdio.h>

/* 测试用例
 ListNode *node1InList1 = new ListNode();
 ListNode *node2InList1 = new ListNode();
 ListNode *node3InList1 = new ListNode();
 ListNode *node4InList1 = new ListNode();
 ListNode *node5InList1 = new ListNode();
 ListNode *node6InList1 = new ListNode();
 ListNode *node7InList1 = new ListNode();
 
 node1InList1->value = 1;
 node1InList1->pNext = node2InList1;
 
 node2InList1->value = 10;
 node2InList1->pNext = node3InList1;
 
 node3InList1->value = 15;
 node3InList1->pNext = node4InList1;
 
 node4InList1->value = 19;
 node4InList1->pNext = node5InList1;
 
 node5InList1->value = 40;
 node5InList1->pNext = node6InList1;
 
 node6InList1->value = 42;
 node6InList1->pNext = node7InList1;
 
 node7InList1->value = 90;
 node7InList1->pNext = NULL;
 
 
 
 ListNode *node1InList2 = new ListNode();
 ListNode *node2InList2 = new ListNode();
 ListNode *node3InList2 = new ListNode();
 ListNode *node4InList2 = new ListNode();
 ListNode *node5InList2 = new ListNode();
 
 node1InList2->value = 5;
 node1InList2->pNext = node2InList2;
 
 node2InList2->value = 11;
 node2InList2->pNext = node3InList2;
 
 node3InList2->value = 30;
 node3InList2->pNext = node4InList2;
 
 node4InList2->value = 48;
 node4InList2->pNext = node5InList2;
 
 node5InList2->value = 100;
 node5InList2->pNext = NULL;
 
 ListNode *list1 = node1InList1;
 ListNode *list2 = node1InList2;
 
 mergeSortedLists(list1, list2);
 
 while (list1) {
 printf("%d\n", list1->value);
 list1 = list1->pNext;
 }

 */

struct ListNode {
    int value;
    ListNode *pNext;
};

ListNode *mergeSortedLists(ListNode *list1, ListNode *list2);

#endif /* _7_MergeSortedLists_hpp */
