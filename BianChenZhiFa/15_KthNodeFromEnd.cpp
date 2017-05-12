//
//  15_KthNodeFromEnd.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "15_KthNodeFromEnd.hpp"

ListNode *kthNodeFromEnd(ListNode *head, int k) {
    
    if (head == NULL) {
        return NULL;
    }
    
    ListNode *probeNode;
    ListNode *kthNodeFromEnd;
    
    // 将probeNode从head遍历到第k个node是，将kthNode置为头节点，然后两个指针同时开始遍历，这样当probeNode指向链表的结尾时，一共又遍历了n-k步，同时kthNodeFromEnd也遍历了n-k次，指向了倒数第k个元素。
    probeNode = head;
    int step = 0;
    
    while (step <= k) {
        if (probeNode->pNext) {
            step++;
            probeNode = probeNode->pNext;
        } else {
            printf("error, k is greater than the list length.\n");
            return NULL;
        }
    }
    
    kthNodeFromEnd = head;
    
    while (probeNode) {
        probeNode = probeNode->pNext;
        kthNodeFromEnd = kthNodeFromEnd->pNext;
    }
    
    return kthNodeFromEnd;
}
