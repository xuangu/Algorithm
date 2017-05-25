//
//  24_SequenceOfBST.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 23/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "24_SequenceOfBST.hpp"

bool isSequenceOfBST(int *inOrder, int len) {
    if (len == 0) {
        return false;
    }
    int end = len - 1;
    
    if (end == 0) {
        return true;
    }
    
    int leftEnd = 0;
    while (inOrder[leftEnd] < inOrder[end] &&
           leftEnd < end) {
        leftEnd++;
    }
    
    int rightStart = leftEnd;
    while (rightStart < end) {
        if (inOrder[rightStart] < inOrder[end]) {
            return false;
        }
        rightStart++;
    }
    
    bool leftres = true;
    if (leftEnd > 0) {
        leftres = isSequenceOfBST(inOrder, leftEnd);
    }
    
    bool rightres = true;
    if (leftEnd < len - 1) {
        rightres = isSequenceOfBST(inOrder + leftEnd, len - leftEnd - 1);
    }
    
    return leftres && rightres;
}
