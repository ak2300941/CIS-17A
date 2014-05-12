/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 1 Implementation
 */

//System Libraries
#include <iostream>
#include "Class1.h"
using namespace std;

void Date::setMon(){
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

 void Date::setDay(){
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

 void Date::setYear(){
     //Declare Variables
     int ans;
     cout<<"Enter year in #'s: ";
     cin>>ans;
     year=ans;
}
 
 void Date::display(){
     cout<<endl;
     //First Form
     cout<<month<<"/"<<day<<"/"<<year<<endl;
     //Second Form
     string a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
     cout<<a[month-1]<<" "<<day<<", "<<year<<endl;
     //Third Form
     cout<<day<<" "<<a[month-1]<<" "<<year<<endl;
     cout<<endl;
 }