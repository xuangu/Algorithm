//
//  20_PrintMatrix.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 16/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "20_PrintMatrix.hpp"
#include <iostream>
using namespace std;

void printMatrixClockwisely(int **matrix, int columns, int rows) {
    int ciclesCount = min(columns / 2, rows / 2);
    int columsStart = 0;
    int rowStart = 0;
    int columsEnd = columns - 1;
    int rowEnd = rows - 1;
    for (int i = 0; i <= ciclesCount; i++) {
        if (columsStart <= columsEnd && rowStart < rowEnd) {
            // 从左到右
            for (int j = columsStart; j <= columsEnd; j++) {
                printf("%d \n", matrix[rowStart][j]);
            }
        }
        
        rowStart++;
        if (rowStart <= rowEnd) {
            // 从上到下
            for (int j = rowStart; j <= rowEnd; j++) {
                printf("%d \n", matrix[j][columsEnd]);
            }
        }
        
        
        columsEnd--;
        if (columsEnd >= columsStart) {
            // 从右到左
            for (int j = columsEnd; j >= columsStart; j--) {
                printf("%d \n", matrix[rowEnd][j]);
            }
        }
        
        rowEnd--;
        if (rowEnd >= rowStart && columsStart < columsEnd) {
            // 从下到上
            for (int j = rowEnd; j >= rowStart; j--) {
                printf("%d \n", matrix[j][columsStart]);
            }
        }
        
        columsStart++;
    }
}
