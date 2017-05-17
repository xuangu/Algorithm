//
//  21_MinInStack.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 17/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

/*
 用例
 MinStack *stack = new MinStack();
 
 push(stack, 4);
 push(stack, 3);
 push(stack, 19);
 push(stack, 8);
 push(stack, 5);
 
 printf("%d\n", min(stack));
 */

#ifndef _1_MinInStack_hpp
#define _1_MinInStack_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct MinStack {
    int *dataStack;
    int *minDataStack;
    int len;
    int top;
};

void push(MinStack *minStack, int value);

int pop(MinStack *minStack);

int min(MinStack *minStack);

#endif /* _1_MinInStack_hpp */
