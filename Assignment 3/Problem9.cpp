/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 9 Implementation
 */

//System Libraries
#include <iostream>
#include "Class9.h"
using namespace std;

Date1 Date1::operator ++(){
    ++day;
    simplify();
    return *this;
}

Date1 Date1::operator --(){
    --day;
    simplify();
    return *this;
}

void Date1::simplify(){
    if(day>31&&(month==1||month==3||month==5||month==7||month==8||month==10)){
        if(day>=31){
            month=month+(day/31);
            day=day%31;
        }
    }
    if(day>28&&month==2){
        if(day>=28){
            month=month+(day/28);
            day=day%28;
        }
    }
    if(day>30&&(month==4||month==6||month==9||month==11)){
        if(day>=30){
            month=month+(day/30);
            day=day%30;
        }
    }
    //If going to next year
    if(day>31&&month==12){
        if(day>=31){
            month=1;
            day=day%31;
        }
    }
}

void Date1::setMon(){
    //Declare Variables
    int ans;
    cout<<"Enter month in #'s (1~12): ";
    cin>>ans;
    while(ans<=0||ans>=13){
        cout<<"Re-Enter the month in #'s: ";
        cin>>ans;
    }
    month=ans;
}

 void Date1::setDay(){
     //Declare Variables
     int ans;
     cout<<"Enter day in #'s (1~31): ";
     cin>>ans;
     while(ans<=0||ans>=32){
         cout<<"Re-Enter the day in #'s: ";
         cin>>ans;
     }
     day=ans;
}

 void Date1::setYear(){
     //Declare Variables
     int ans;
     cout<<"Enter year in #'s: ";
     cin>>ans;
     year=ans;
}
 
 void Date1::display(){
     cout<<endl;
     //First Form
     cout<<month<<"/"<<day<<"/"<<year<<endl;
     //Second Form
     string a[13]={"January","February","March","April","May","June","July","August","September","October","November","December",""};
     cout<<a[month-1]<<" "<<day<<", "<<year<<endl;
     //Third Form
     cout<<day<<" "<<a[month-1]<<" "<<year<<endl;
     cout<<endl;
 }