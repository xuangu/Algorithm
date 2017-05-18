//
//  22_StackPushPopOrder.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 17/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _2_StackPushPopOrder_hpp
#define _2_StackPushPopOrder_hpp

/*
 test case:
 int push[] = {1, 2, 3, 4, 5};
 
 int pop1[] = {2, 3, 1, 5, 4};
 
 int pop2[] = {4, 5, 3, 1, 2};
 
 bool popOrder = isPopOrder(push, pop2, 5);
 if (popOrder) {
 printf("is pop order\n");
 } else {
 printf("not pop order\n");
 }
 */

#include <stdio.h>
#include <iostream>

using namespace std;

bool isPopOrder(const int *pPush, const int *pPop, int len);

#endif /* _2_StackPushPopOrder_hpp */
