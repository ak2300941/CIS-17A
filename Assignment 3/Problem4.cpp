/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 4 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class4.h"
using namespace std;

void Data::getinfo(){
    //Declare Variables
    string tr1,tr2,tr3;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Phone Number: ";
    cin>>phone;
    cout<<"Enter Name: ";
    cin>>name;
    getline(cin,tr1);   //Pickups trash
    cout<<"Enter Address: ";
    cin>>address;
    getline(cin,tr2);
}
