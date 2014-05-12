/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 5 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class5.h"
using namespace std;

void RetailItem::getinfo(){
    //Declare Variables
    string tr1,tr2;
    cout<<"Enter Description: ";
    cin>>descrption;
    getline(cin,tr1);
    cout<<"Units: ";
    cin>>unitsOnHand;
    cout<<"Price: ";
    cin>>price;
}