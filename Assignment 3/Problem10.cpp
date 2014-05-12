/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 10 Implementation
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include "Class10.h"
using namespace std;

void NumDays::setdays(int d){
    days=d;
    simplify();
}

void NumDays::sethour(int h){
    hour=h;
    simplify();
}

void NumDays::simplify(){
    if(hour>=8){
        days=days+(hour/8);
        hour=hour%8;
    }
    else if(hour<0){
        days-=((abs(hour)/8)+1);
        hour=8-(abs(hour)%8);
   }
}

NumDays NumDays::operator +(const NumDays &right){
    NumDays temp;
    temp.hour=hour+right.hour;
    temp.days=days+right.days;
    temp.simplify();
    return temp;
}

NumDays NumDays::operator -(const NumDays &right){
    NumDays temp;
    temp.hour=hour-right.hour;
    temp.days=days-right.days;
    temp.simplify();
    return temp;
}

NumDays NumDays::operator ++(){
    ++hour;
    simplify();
    return *this;
}

NumDays NumDays::operator --(){
    --hour;
    simplify();
    return *this;
}