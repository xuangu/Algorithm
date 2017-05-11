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
    
    while (increment(number)) {
        printNumber(number);
    }
    
    delete []number;
}

//bool increment(char *number) {
//    int carryOnAtIndex = 0;
//    bool isOverflow = false;
//    int lenOfNum = (int)strlen(number) - 1;
//    
//    for (int i = lenOfNum; i >= 0; i--) {
//        int bitNumAtIndex = number[i] - '0' + carryOnAtIndex;
//        if (i == lenOfNum) {
//            bitNumAtIndex++;
//        }
//        
//        // 判断是否溢出
//        if (bitNumAtIndex > 9) {
//            if (i == 0) {
//                isOverflow = true;
//            } else {
//                carryOnAtIndex = 1;
//                bitNumAtIndex -= 10;
//                number[i] = '0' + bitNumAtIndex;
//            }
//        } else {
//            number[i] = bitNumAtIndex + '0';
//            break;
//        }
//    }
//    
//    return isOverflow;
//    
//}

bool increment(char *number) {
    
    int lenOfNum = (int)strlen(number) - 1;
    
    for (int i = lenOfNum; i >= 0; i--) {
        int bitNumAtCurrentIndex = number[i] - '0';
        
        bitNumAtCurrentIndex++;
        
        int carryDigit = 0;
        if (bitNumAtCurrentIndex > 9) {
            if (i == 0) {
                return false;
            }
            carryDigit = 1;
            bitNumAtCurrentIndex -= 10;
        }
        
        number[i] = bitNumAtCurrentIndex + '0';
        
        if (carryDigit == 0) {
            break ;
        }
    }
    
    return true;
    
}

void printNumber(char *number) {
    int lenOfNum = (int)strlen(number) - 1;
    int startPrintIndex = 0;
    for (int i = 0; i < lenOfNum; i++) {
        if (number[i] == '0') {
            startPrintIndex++;
        } else {
            break;
        }
    }
    
    printf("%s\n", &number[startPrintIndex]);
}
