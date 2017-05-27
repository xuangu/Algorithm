//
//  26_CopyComplexList.hpp
//  BianChenZhiFa
//
//  Created by guxuan on 27/05/2017.
//  Copyright © 2017 gu. All rights reserved.
//

#ifndef _6_CopyComplexList_hpp
#define _6_CopyComplexList_hpp

#include <stdio.h>

struct ComplexListNode {
    int value;
    ComplexListNode *pNext;
    ComplexListNode *pSibling;
};

ComplexListNode *clone(ComplexListNode *pHead);

#endif /* _6_CopyComplexList_hpp */
