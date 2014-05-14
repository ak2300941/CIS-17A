/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:46 AM
 * Problem 3 Implementation
 */

//System Libraries
#include "Class3.h"

//Default Constructor
Employee2::Employee2(){
}

//Constructor
Employee2::Employee2(string n,unsigned int num, int d){
    name=n;
    number=num;
    date=d;
}

//Accessor Functions
string Employee2::getName() const{
    return name;
}

unsigned int Employee2::getNum() const{
    return number;
}

int Employee2::getDate() const{
    return date;
}

//Mutator Functions
void Employee2::setName(string n){
    name=n;
}

void Employee2::setNum(unsigned int n){
    number=n;
}

void Employee2::setDate(int d){
    date=d;
}

//Default Constructor
ProductionWorker2::ProductionWorker2(){
}

//Constructor
ProductionWorker2::ProductionWorker2(int s, float r){
    shift=s;
    rate=r;
}
//Accessor Functions
int ProductionWorker2::getShift() const{
    return shift;
}

float ProductionWorker2::getRate() const{
    return rate;
}

//Mutator Functions
void ProductionWorker2::setShift(int s){
    shift=s;
}

void ProductionWorker2::setRate(float r){
    rate=r;
}

//Default Constructor
TeamLeader::TeamLeader(){
}

//Constructor
TeamLeader::TeamLeader(int m, int r, int a){
    monbonus=m;
    reqhour=r;
    attend=a;
}

//Accessor Functions
int TeamLeader::getBonus() const{
    return monbonus;
}

int TeamLeader::getReqh() const{
    return reqhour;
}

int TeamLeader::getAttend() const{
    return attend;
}

//Mutator Functions
void TeamLeader::setBonus(int b){
    monbonus=b;
}

void TeamLeader::setReqh(int r){
    reqhour=r;
}

void TeamLeader::setAt(int a){
    attend=a;
}