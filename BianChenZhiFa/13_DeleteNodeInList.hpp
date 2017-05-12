//
//  13_DeleteNodeInList.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _3_DeleteNodeInList_hpp
#define _3_DeleteNodeInList_hpp

#include <stdio.h>

struct ListNode {
    int value;
    ListNode *pNext;
};

ListNode *deleteNodeInList(ListNode *list, ListNode *deleteNode);

#endif /* _3_DeleteNodeInList_hpp */
