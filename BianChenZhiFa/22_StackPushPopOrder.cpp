//
//  22_StackPushPopOrder.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 17/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "22_StackPushPopOrder.hpp"
#include <stack>

bool isPopOrder(const int *pPush, const int *pPop, int len) {
    
    if (pPush != NULL && pPop !=NULL && len > 0) {
        
        std::stack<int> stackData;
        const int *pPushStart = pPush;
        const int *pPushEnd = pPushStart + len;
        const int *pPopStart = pPush;
        const int *pPopEnd = pPopStart + len;
        
        while (pPush < pPushEnd && pPop < pPopEnd) {
            
            if (*pPush != *pPop) {
                stackData.push(*pPush);
                pPush++;
                continue ;
            }
            // 将当前相等元素入栈
            stackData.push(*pPush);
            pPush++;
            
            while (stackData.top() == *pPop) {
                stackData.pop();
                pPop++;
                if (stackData.empty() || pPop == pPopEnd) {
                    break ;
                }
            }
        }
        
        if (stackData.empty()) {
            return true;
        } else {
            return false;
        }
    }
    
    return false;
}
