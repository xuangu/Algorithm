//
//  min_number_in_rotated_array.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 09/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "min_number_in_rotated_array.hpp"

int min_number_in_rotated_array(int *numbers, int len) {
    int left_index = 0;
    int right_index = len - 1;
    int mid_index = left_index;
    while (numbers[left_index] >= numbers[right_index]) {
        int mid_index = (left_index + right_index) / 2;
        
        if (numbers[left_index] == numbers[right_index] &&
            numbers[mid_index] == numbers[left_index]) {
            return 0;
        }
        
        if (numbers[left_index] <= numbers[mid_index]) {
            // mid_index对应的数在第一个升序子数组中，所以最小的数一定在第二个升序数组中，即在该mid_index之后。
            left_index = mid_index + 1;
        } else if (numbers[mid_index] <= numbers[right_index]) {
            // mid_index在第二个升序子数组中，所以最小的数在该mid_index之前
            right_index = mid_index - 1;
        }
    }
    
    return numbers[mid_index];
}
