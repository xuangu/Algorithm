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

int myPartition(int *numArr, int len, int start, int end) {
    if (!numArr || len < 1 || start < 0 || end > len - 1) {
        return -1;
    }
    
    int partNum = numArr[start];
    int partNumIndex = start;
    
    start++;
    
    while (start <= end) {
        if (numArr[start] < partNum) {
            start++;
            continue ;
        }
        
        if (numArr[end] >= partNum) {
            end--;
            continue ;
        }
        
        swap(numArr[start], numArr[end]);
    }

    swap(numArr[partNumIndex], numArr[--start]);
    
    return start;
}


int numberThatMoreThanHalfLength(int *numArr, int numArrLen) {
    
    int index = myPartition(numArr, numArrLen, 0, numArrLen - 1);
    
    while (index != numArrLen / 2) {
        if (index > numArrLen / 2) {
            index = myPartition(numArr, numArrLen, 0, index - 1);
        } else {
            index = myPartition(numArr, numArrLen, index + 1, numArrLen - 1);
        }
    }
    
    return numArr[index];
}
