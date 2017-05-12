//
//  15_KthNodeFromEnd.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _5_KthNodeFromEnd_hpp
#define _5_KthNodeFromEnd_hpp

#include <stdio.h>

struct ListNode {
    int value;
    ListNode *pNext;
};


ListNode *kthNodeFromEnd(ListNode *head, int k);

#endif /* _5_KthNodeFromEnd_hpp */
