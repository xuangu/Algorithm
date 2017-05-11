//
//  fabonacci.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 09/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "fabonacci.hpp"

int fabonacci(int n) {
    if (n < 3) {
        return 1;
    }
    
    int fib_n_minus_one = 1;
    int fib_n_minus_two = 0;
    int fib_n = 0;
    for (int i = 0; i < n; i++) {
        fib_n = fib_n_minus_one + fib_n_minus_two;
        fib_n_minus_two = fib_n_minus_one;
        fib_n_minus_one = fib_n;
    }
    
    return fib_n;
}
