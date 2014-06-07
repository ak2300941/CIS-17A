/* 
 * File:   Groceries.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 6:52 PM
 * Groceries Implementation
 */

#include "Groceries.h"

Groceries::Groceries(){
    numb=0;
}

Groceries::Groceries(int n){
    numb=n;
}

int Groceries::getNug() const{
    return numb;
}
void Groceries::setNumb(int n){
    numb=numb+n;
}

void Groceries::reset(){
    numb=0;
}