//
//  permutation_string.cpp
//  BianChenZhiFa
//
//  Created by guxuan on 08/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "permutation_string.hpp"
#include <string.h>
#include <iostream>

using namespace std;

void calc_recursive(char *perm, int from, int to);

bool calc_iter(char *perm, int num);

int cmp(const void *a, const void *b) {
    return (int)(*(char *)a - *(char *)b);
}

void print_string_all_permutation(char *s, int len) {
//    calc_recursive(s, 0, len - 2);
//    int num = 1;
    qsort(s, strlen(s), sizeof(char), cmp);
    do {
        for (int i = 0; i < len; i++) {
            cout << s[i];
        }
        cout << endl;
    } while (calc_iter(s, len - 1));
}

void calc_recursive(char *perm, int from, int to) {
    if (to <= 1)
    {
        return;
    }
    
    if (from == to)
    {
        for (int i = 0; i <= to; i++)
            cout << perm[i];
        cout << endl;
    }
    else
    {
        for (int j = from; j <= to; j++)
        {
            swap(perm[j], perm[from]);
            calc_recursive(perm, from + 1, to);
            swap(perm[j], perm[from]);
        }
    }
}

bool calc_iter(char *perm, int num) {
    int i = 0;
    for (i = num - 2; (i >= 0) && (perm[i] > perm[i + 1]); i--) {
        ;
    }
    
    if (i < 0) {
        return false;
    }
    
    int k;
    for (k = num - 1; (k > i) && perm[k] < perm[i]; k--) {
        ;
    }
    
    swap(perm[i], perm[k]);
    reverse(perm + i + 1, perm + num);
    
    return true;
}
