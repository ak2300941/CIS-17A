/* 
 * File:   Work.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:14 PM
 * Work Implementation
 */

#include "Work.h"

Work::Work(){
    numb=0;
}

Work::Work(int n){
    numb=n;
}

int Work::getNuw() const{
    return numb;
}

void Work::setNumb(int n){
    numb=numb+n;
}

void Work::reset(){
    numb=0;
}