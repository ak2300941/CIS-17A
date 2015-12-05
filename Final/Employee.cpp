/* 
 * File:   Employee.cpp
 * Author: Andrew Kim
 * Created on June 11, 2014, 4:12 PM
 */

#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(char n[], char j[], float r){
    //Converting char pointer to char array
    for(int i=0;i<20;i++){
        MyName[i]=n[i];
        JobTitle[i]=j[i];
    }
    
    setHourlyRate(r);
    //Initialize to 0
    HoursWorked=0;
    GrossPay=0;
    NetPay=0;
}

float Employee::CalculatePay(float rate, int hours){
    return getNetPay(getGrossPay(setHourlyRate(rate),setHoursWorked(hours)));
}

float Employee::getGrossPay(float hrate, int hours){
    float pay=0;
    if(hours<=40){
        //Straight Pay
        pay=hrate*hours;
    }
    else if(hours>40&&hours<=50){
        //Straight time + bonus
        pay=40*hrate+10*(hours*1.5);
    }
    else if(hours>50){
        pay=40*hrate+10*(50*1.5)+(2*(hours-50))*hrate;
    }
    GrossPay=pay;
    return pay;
}

float Employee::getNetPay(float a){
    NetPay=a-Tax(a);
    return NetPay;
}

double Employee::Tax(float a){
    //Compound Tax
    float find;
    //10% below 500
    if(a<=500){
        a=a-a*.1;
    }
    //20% between 500~1000
    else if(a>500&&a<=1000){
        find=50.0+(a-500.0)*0.2;
        a=a-find;
    }
    //30% 1000 and above
    else if(a>1000){
        find=150.0+(a-1000.0)*0.3;
        a=a-find;
    }
    //Calculate Tax
    a=GrossPay-a;
    return a;
}

void Employee::toString(){
    //Display
    cout<<"Name = "<<MyName<<" ";
    cout<<"Job Title = "<<JobTitle<<endl;
    cout<<"Hourly Rate = "<<HourlyRate<<" ";
    cout<<"Hours Worked = "<<HoursWorked<<" ";
    cout<<"Gross Pay = "<<GrossPay<<" ";
    cout<<"Net Pay = "<<NetPay<<endl;
}

int Employee::setHoursWorked(int a){
    if(a>0&&a<84)HoursWorked=a;
    else{
        cout<<"Unacceptable Hours Worked"<<endl;
        HoursWorked=0;
    }
    return HoursWorked;
}

float Employee::setHourlyRate(float a){
    if(a>0&&a<200)HourlyRate=a;
    else{
        cout<<"Unacceptable Hourly Rate"<<endl;
        HourlyRate=0;
    }
    return HourlyRate;
}
