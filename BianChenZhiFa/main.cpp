//
//  main.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 03/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include <iostream>
#include "reverse_string.h"
#include "permutation_string.hpp"
#include "power.hpp"
#include "12_Print1ToMaxOfNDigits.hpp"
#include "14_ReorderArray.hpp"
#include "17_MergeSortedLists.hpp"
#include "20_PrintMatrix.hpp"

int main(int argc, const char * argv[]) {
//    char s[] = "abcdefghigk";
//    reverse_string(s, 2, 12);
//    printf("---%s\n", s);
//    
//    char st[] = "I love you!";
//    reverse_statement(st);
//    printf("---%s\n", st);
    
//    char s[] = "abcd";
//    print_string_all_permutation(s, 5);
    
//    printf("%d\n", power(2, 7));
//    printOneToMaxOfNDigits(2);

    // 14_ReorderArray
//    int arr[] = {1, 3, 2, 5, 8, 9, 100};
//    reorderArray(arr, 7);
//    for (int i = 0; i < 7; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
    
    int row1[] = {1, 2, 3, 4, 5};
    int row2[] = {6, 7, 8, 9, 10};
    int row3[] = {11, 12, 13, 14, 15};
    int row4[] = {11, 12, 13, 14, 15};
//    int row5[] = {11, 12, 13, 14, 15};
//    int row6[] = {11, 12, 13, 14, 15};
//    int row7[] = {11, 12, 13, 14, 15};
//    int row8[] = {11, 12, 13, 14, 15};
//    int row9[] = {11, 12, 13, 14, 15};
//    int row10[] = {11, 12, 13, 14, 15};
//    int row11[] = {11, 12, 13, 14, 15};
//    int row12[] = {11, 12, 13, 14, 15};
    // row7, row8, row9, row10, row11, row5, row6
    
    int *pMatrix[] = {row1, row2, row3, row4};
    
    printMatrixClockwisely(pMatrix, 5, 4);
    return 0;
}
