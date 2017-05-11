//
//  12_Print1ToMaxOfNDigits.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 11/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "12_Print1ToMaxOfNDigits.hpp"
#include <iostream>

using namespace std;

bool increment(char *number);

void printNumber(char *number);

void printOneToMaxOfNDigits(const int n) {
    char *number = new char[n + 1];
    memset(number, '0', n);
    number[n] = '\0';
    
    while (!increment(number)) {
        printNumber(number);
    }
    
    delete []number;
}

bool increment(char *number) {
    bool isOverflow = false;
    int carryOn = 0;
    
    int lenOfNum = strlen(number) - 1;
    
    
}

void printNumber(char *number) {
    
}
