/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 3 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class3.h"
using namespace std;

Car::Car(int y, string m, int s){
    yearModel=y;
    make=m;
    speed=s;
}

int Car::acc(){
    speed=speed+5;
}

int Car::br(){
    speed=speed-5;
}