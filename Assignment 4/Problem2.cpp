/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:46 AM
 * Problem 2 Implementation
 */

//System Libraries
#include "Class2.h"

//Default Constructor
Employee1::Employee1(){
}

//Constructor
Employee1::Employee1(string n,unsigned int num, int d){
    name=n;
    number=num;
    date=d;
}

//Accessor Functions
string Employee1::getName() const{
    return name;
}

unsigned int Employee1::getNum() const{
    return number;
}

int Employee1::getDate() const{
    return date;
}

//Mutator Functions
void Employee1::setName(string n){
    name=n;
}

void Employee1::setNum(unsigned int n){
    number=n;
}

void Employee1::setDate(int d){
    date=d;
}

//Default Constructor
ShiftSupervisor::ShiftSupervisor(){
}

//Constructor
ShiftSupervisor::ShiftSupervisor(int as, int ab){
    asalary=as;
    abonus=ab;
}

//Accessor Functions
int ShiftSupervisor::getSal() const{
    return asalary;
}

int ShiftSupervisor::getBon() const{
    return abonus;
}

//Mutator Functions
void ShiftSupervisor::setSal(int s){
    asalary=s;
}

void ShiftSupervisor::setBon(int b){
    abonus=b;
}