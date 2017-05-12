//
//  14_ReorderArray.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 12/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "14_ReorderArray.hpp"
#include <iostream>

using namespace std;

void reorderArray(int *arr, int len) {
    int *start = arr;
    int *end = arr + len - 1;
    
    while (start <= end) {
        if (*start % 2 == 1) {
            start++;
            continue;
        }
        
        if (*end % 2 == 0) {
            end--;
            continue;
        }
        
        swap(*start, *end);
        start++;
        end--;
    }
}
