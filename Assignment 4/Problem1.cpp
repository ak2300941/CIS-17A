/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:46 AM
 * Problem 1 Implementation
 */

//System Libraries
#include "Class1.h"

//Default Constructor
Employee::Employee(){
}

//Constructor
Employee::Employee(string n,unsigned int num, int d){
    name=n;
    number=num;
    date=d;
}

//Accessor Functions
string Employee::getName() const{
    return name;
}

unsigned int Employee::getNum() const{
    return number;
}

int Employee::getDate() const{
    return date;
}

//Mutator Functions
void Employee::setName(string n){
    name=n;
}

void Employee::setNum(unsigned int n){
    number=n;
}

void Employee::setDate(int d){
    date=d;
}

//Default Constructor
ProductionWorker::ProductionWorker(){
}

//Constructor
ProductionWorker::ProductionWorker(int s, float r){
    shift=s;
    rate=r;
}
//Accessor Functions
int ProductionWorker::getShift() const{
    return shift;
}

float ProductionWorker::getRate() const{
    return rate;
}

//Mutator Functions
void ProductionWorker::setShift(int s){
    shift=s;
}

void ProductionWorker::setRate(float r){
    rate=r;
}
