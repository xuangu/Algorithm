//
//  reverse_string.c
//  BianChenZhiFa
//
//  Created by guxuan on 03/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#include "reverse_string.h"


void reverse(char *start, char *end) {
    char swap_char = ' ';
    
    while (start < end) {
        swap_char = *start;
        *start = *end;
        *end = swap_char;
        start++;
        end--;
    }
}


void reverse_string(char *s, int position, int length) {
    reverse(s, s + position);
    int s_no_eof_len = length - 1;
    int s_left_len = position + 1;
    reverse((s + s_left_len), (s + s_no_eof_len - 1));
    reverse(s, s + length - 2);
}


void reverse_statement(char *s) {
    char *end = s;
    char *start = s;
    while (*end != '\0') {
        while (*end != ' ' && *end != '\0') {
            end++;
        }
        reverse(start, (end - 1));
        if (*end == '\0') {
            break;
        }
        end++;
        start = end;
    }
    start = s;
    reverse(start, (end - 1));
    printf("%s\n", s);
}
