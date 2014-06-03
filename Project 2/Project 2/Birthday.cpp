/* 
 * File:   Birthday.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 5:21 PM
 * Birthday Implementation
 */

#include "Birthday.h"

Birthday::Birthday(){
    numb=0;
}

Birthday::Birthday(int n){
    numb=n;
}

int Birthday::getNumb() const{
    return numb;
}
void Birthday::setNumb(int n){
    numb=n;
}
