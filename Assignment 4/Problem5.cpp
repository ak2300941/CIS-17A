/* 
 * File:   Problem5.cpp
 * Author: Andrew Kim
 * Created on May 14, 2014, 10:21 AM
 * Problem 5 Implementation
 */

#include "Class5.h"
#include <string>
#include <iostream>
using namespace std;

Time::Time(){
    hour=0;
    min=0;
    sec=0;
}

Time::Time(int h, int m, int s){
    hour=h;
    min=m;
    sec=s;
}

int Time::getHour() const{
    return hour;
}

int Time::getMin() const{
    return min;
}

int Time::getSec() const{
    return sec;
}

Date::Date(){
    day=1;
    month=1;
    year=1900;
}

Date::Date(int d, int m, int y){
    day=d;
    month=m;
    year=y;
}

int Date::getDay() const{
    return day;
}

int Date::getMonth() const{
    return month;
}

int Date::getYear() const{
    return year;
}

DateTime::DateTime(): Date(), Time(){
}

DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc):
    Date(dy,mon,yr), Time(hr,mt,sc){
}

void DateTime::showDateTime() const{
    // Display the date in the form MM/DD/YYYY.
   cout<<getMonth()<<"/"<< getDay()<<"/"<<getYear()<<" ";

   // Display the time in the form HH:MM:SS.
   cout<<getHour()<<":"<<getMin()<<":"<<getSec()<<endl;
}

MilTime::MilTime(){
}

MilTime::MilTime(int h, int m, int s){
    milHours=(h*100)+m;
    milSeconds=s;
}

int MilTime::getHour() const{
    return milHours;
}

void MilTime::setTime() const{
    cout<<getHour()<<endl;
}