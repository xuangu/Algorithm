//
//  20_PrintMatrix.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 16/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _0_PrintMatrix_hpp
#define _0_PrintMatrix_hpp

#include <stdio.h>

/*
 用例
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
 */

void printMatrixClockwisely(int **matrix, int columns, int rows);

#endif /* _0_PrintMatrix_hpp */
