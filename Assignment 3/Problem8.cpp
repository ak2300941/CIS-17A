/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 8 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class8.h"
using namespace std;

DayOfYear2::DayOfYear2(int d){
    days=d;
}

void DayOfYear2::convert(){
    //Declare Variable
    int das;
    das=days;
    string mon[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    //Jan
    if(das<=31){
        month=mon[0];
        leftov=das;
    }
    //Feb
    if(das<=59&&das>31){
        month=mon[1];
        leftov=das-31;
    }
    //March
    if(das<=90&&das>59){
        month=mon[2];
        leftov=das-59;
    }
    //April
    if(das<=120&&das>90){
        month=mon[3];
        leftov=das-90;
    }
    //May
    if(das<=151&&das>120){
        month=mon[4];
        leftov=das-120;
    }
    //June
    if(das<=181&&das>151){
        month=mon[5];
        leftov=das-151;
    }
    //July
    if(das<=212&&das>181){
        month=mon[6];
        leftov=das-181;
    }
    //August
    if(das<=243&&das>212){
        month=mon[7];
        leftov=das-212;
    }
    //September
    if(das<=273&&das>243){
        month=mon[8];
        leftov=das-243;
    }
    //October
    if(das<=304&&das>273){
        month=mon[9];
        leftov=das-273;
    }
    //November
    if(das<=334&&das>304){
        month=mon[10];
        leftov=das-304;
    }
    //December
    if(das<=365&&das>334){
        month=mon[11];
        leftov=das-334;
    }
}

void DayOfYear2::print(){
    cout<<"Day "<<days<<" would be "<<month<<" "<<leftov<<endl;
}

void DayOfYear2::setnew(int d){
    days=d;
}