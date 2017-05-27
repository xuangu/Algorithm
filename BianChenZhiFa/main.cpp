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
#include "21_MinInStack.hpp"
#include "22_StackPushPopOrder.hpp"
#include "24_SequenceOfBST.hpp"
#include "25_PathInTree.hpp"

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
    
    BinaryTreeNode node1 = {4, NULL, NULL, false, false};
    BinaryTreeNode node2 = {7, NULL, NULL, false, false};
    BinaryTreeNode node3 = {5, &node1, &node2, false, false};
    BinaryTreeNode node4 = {12, NULL, NULL, false, false};
    BinaryTreeNode node5 = {10, &node3, &node4, false, false};
    BinaryTreeNode node6 = {14, NULL, NULL, false, false};
    BinaryTreeNode node7 = {18, NULL, &node5, false, false};
    BinaryTreeNode node8 = {40, &node6, &node7, false, false};
    
    pathInTree(&node8, 22);
    
    return 0;
}
