//
//  reverse_string.h
//  BianChenZhiFa
//
//  Created by guxuan on 03/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef reverse_string_h
#define reverse_string_h

#include <iostream>
#include <string>
using namespace std;
/**
 翻转字符串

 @param s 待翻转字符串
 @param position 翻转位置, position从0开始，length包含最后的'\0'结束符
 */
void reverse_string(char *s, int position, int length);

void reverse_statement(char *s);

#endif /* reverse_string_h */
