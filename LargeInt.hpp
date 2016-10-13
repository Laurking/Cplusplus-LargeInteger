//
//  LargeInt.hpp
//  Project4
//
//  Created by W. Laurent Sanou on 5/26/16.
//  Copyright © 2016 W. Laurent Sanou. All rights reserved.
//
#include <iostream>
#include "DoublyLinkedList.cpp"
using namespace std;

#ifndef LargeInt_hpp
#define LargeInt_hpp

#include <stdio.h>


class LargeInt
{
    friend ostream& operator << (ostream&, LargeInt&);
    friend istream& operator >> (istream&, LargeInt&);
    
public:
    LargeInt();
    LargeInt operator + (LargeInt other);
    LargeInt operator = (LargeInt other);
    LargeInt operator - (LargeInt other);
    LargeInt operator * (LargeInt other);
    LargeInt multiply(LargeInt value, const int num);
    LargeInt operator / (LargeInt);
    LargeInt operator %(LargeInt);
    bool operator == (LargeInt);
    bool operator < (LargeInt other);
    bool operator > (LargeInt other);
    bool isNegative();
    
private:
    DoublyLinkedList<int> list;
};

#endif /* LargeInt_hpp */
