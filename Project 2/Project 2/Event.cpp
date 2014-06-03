/* 
 * File:   Event.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 12:10 PM
 * Event Implementation
 */

#include "Event.h"

Event::Event(){
    eve="";
}

Event::Event(int e){    //Use this in other classes
    eve=e;
}

string Event::getEve() const{
    return eve;
}

void Event::setEve(string e){
    eve=e;
}