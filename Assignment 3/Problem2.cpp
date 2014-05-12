/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 2 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class2.h"
using namespace std;

void Employee::getinfo(){
    //Declare variables
    string n,dep,pos;
    int id;
    cout<<"Enter ID Number: ";
    cin>>id;
    idNumber=id;
    cout<<"Enter Name: ";
    cin>>n;
    getline(cin,n);
    name=n;
    cout<<"Enter Department Name: ";
    getline(cin,dep);
    department=dep;
    cout<<"Enter Position Name: ";
    getline(cin,pos);
    position=pos;
}

void Employee::display(){
    cout<<setw(1)<<name<<setw(10)<<idNumber<<setw(18)<<department<<setw(20)<<position<<endl;
}




    