/* 
 * File:   Vacation.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:10 PM
 * Vacation Implementation
 */

#include "Vacation.h"

Vacation::Vacation(){
    numb=0;
}

Vacation::Vacation(int n){
    numb=n;
}

int Vacation::getNumb() const{
    return numb;
}
void Vacation::setNumb(int n){
    numb=n;
}