/* 
 * File:   Event.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 12:10 PM
 * Event Implementation
 */

#include "Event.h"
#include <iostream>
using namespace std;


Event::Event(): Birthday(), Groceries(), Holidays(), Vacation(), Work(){
    
}

Event::Event(int b,int g,int h,int v,int w):
        Birthday(b), Groceries(g), Holidays(h), Vacation(v), Work(w){
    
}

void Event::addUp() const{
    cout<<"Total Events: "<<getNub()+getNug()+getNuh()+getNuv()+getNuw();
}





