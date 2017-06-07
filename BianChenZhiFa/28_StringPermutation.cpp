//
//  28_StringPermutation.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 27/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "28_StringPermutation.hpp"
#include <string.h>
#include <iostream>

using namespace std;

void printRecursive(char *str, int from, int to);

void stringPermutation(char *str, int len) {
    printRecursive(str, 0, len - 2);
}


void printRecursive(char *str, int from, int to) {
    if (to <= 1) {
        return;
    }
    
    if (from == to) {
        printf("%s\n", str);
    } else {
        for (int j = from; j <= to; j++) {
            swap(str[from], str[j]);
            
            printRecursive(str, from + 1, to);
            
            swap(str[from], str[j]);
        }
    }
}
