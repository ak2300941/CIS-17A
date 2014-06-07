/* 
 * File:   Month.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 10:19 AM
 * Month Implementation
 */

#include "Month.h"

Month::Month(){
    name="";
    days=0;
    
}

Month::Month(string n, int d){
    name=n;
    days=d;
}

string Month::getName() const{
    return name;
}

int Month::getDays() const{
    return days;
}

void Month::setName(string n){
    name=n;
}

void Month::setDays(int d){
    days=d;
}
