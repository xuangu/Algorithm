//
//  21_MinInStack.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 17/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "21_MinInStack.hpp"

void push(MinStack *minStack, int value) {
    if (minStack->len < 1) {
        minStack->len = 1;
    }
    
    if (minStack->dataStack == NULL || minStack->top == minStack->len) {
        minStack->dataStack = (int *)realloc(minStack->dataStack, minStack->len * 2);
        minStack->minDataStack = (int *)realloc(minStack->minDataStack, minStack->len * 2);
        minStack->len = minStack->len * 2;
    }
    // 插入数据栈
    minStack->dataStack[minStack->top] = value;
    // 插入到辅助的记录最小数据的栈
    if (minStack->top == 0) {
        minStack->minDataStack[minStack->top] = value;
    } else {
        if (value <= minStack->minDataStack[(minStack->top - 1)]) {
            minStack->minDataStack[minStack->top] = value;
        } else {
            minStack->minDataStack[minStack->top] = minStack->minDataStack[(minStack->top - 1)];
        }
    }
    
    minStack->top++;
}


int pop(MinStack *minStack) {
    --minStack->top;
    if (minStack->top < 0) {
        printf("stack already empty\n");
        // return值有待商榷
        return -1;
    }
    
    return minStack->dataStack[minStack->top];
}


int min(MinStack *minStack) {
    if (minStack->top < 0) {
        printf("stack already empty\n");
        // return值有待商榷
        return -1;
    }
    return minStack->minDataStack[minStack->top - 1];
}
