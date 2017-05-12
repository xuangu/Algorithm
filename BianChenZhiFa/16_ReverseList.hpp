//
//  16_ReverseList.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _6_ReverseList_hpp
#define _6_ReverseList_hpp

#include <stdio.h>

struct ListNode {
    int value;
    ListNode *pNext;
};

ListNode *reverseList(ListNode *head);

#endif /* _6_ReverseList_hpp */
