//
//  power.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 10/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "power.hpp"

int power_recursive(int base, int exponent);

int power_iter(int base, int exponent);

int power(int base, int exponent) {
//    return power_recursive(base, exponent);
    return power_iter(base, exponent);
}


int power_recursive(int base, int exponent) {
    int result = base;
    
    if (exponent == 0) {
        return result;
    }
    
    if (exponent % 2 == 0) {
        result *= power(base, exponent / 2);
    } else {
        result *= power(base, exponent - 1);
    }
    
    return result;
}


int power_iter(int base, int exponent) {
    if (exponent == 0 || exponent == 1) {
        return base;
    }
    int result = 1;
    int copy_base = base;
    while (exponent > 0) {
        if (exponent &= 1) {
            result *= copy_base;
        }
        
        copy_base *= copy_base;
        
        exponent = exponent >> 1;
    }
    
    return result;
}
