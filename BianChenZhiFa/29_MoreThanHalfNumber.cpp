//
//  29_MoreThanHalfNumber.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 14/06/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "29_MoreThanHalfNumber.hpp"
#include <iostream>

using namespace std;

int myPartition(int *numArr, int start, int end, int partNum) {
    if (!numArr) {
        return -1;
    }
    
    while (start < end) {
        if (numArr[start] <= partNum) {
            start++;
            continue ;
        }
        
        if (numArr[end] >= partNum) {
            end--;
            continue ;
        }
        
        swap(numArr[start], numArr[end]);
    }
    
    if (numArr[start] < partNum) {
        swap(numArr[start], partNum);
        return start;
    } else {
        return start - 1;
    }
    
}


int numberThatMoreThanHalfLength(int *numArr, int numArrLen) {
    
    int index = myPartition(numArr, 1, numArrLen - 1, numArr[0]);
    
    while (index != numArrLen / 2) {
        if (index > numArrLen / 2) {
            index = myPartition(numArr, 1, index - 1, numArr[0]);
        } else {
            index = myPartition(numArr, index + 2, numArrLen - 1, numArr[index + 1]);
        }
    }
    
    return numArr[index];
}
