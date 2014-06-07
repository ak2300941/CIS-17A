/* 
 * File:   Holidays.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:02 PM
 * Holidays Implementation
 */

#include "Holidays.h"

Holidays::Holidays(){
    numb=0;
}

Holidays::Holidays(int n){
    numb=n;
}

int Holidays::getNuh() const{
    return numb;
}

void Holidays::setNumb(int n){
    numb=numb+n;
}

void Holidays::reset(){
    numb=0;
}