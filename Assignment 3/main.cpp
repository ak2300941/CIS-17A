/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:26 AM
 * CSC-17A Assignment 3
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Defined Libraries
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"
#include "Class6.h"
#include "Class7.h"
#include "Class8.h"
#include "Class9.h"
#include "Class10.h"
//No Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Begin Execution Here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:    problem10();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=10);
    return 0;
}

void Menu(){
    cout<<"Menu for the Assignment 3"<<endl;
    cout<<"Type 1 for problem 1 (Date)"<<endl;
    cout<<"Type 2 for problem 2 (Employee Class)"<<endl;
    cout<<"Type 3 for problem 3 (Car Class)"<<endl;
    cout<<"Type 4 for problem 4 (Personal Information Class)"<<endl;
    cout<<"Type 5 for problem 5 (RetailItem Class)"<<endl;
    cout<<"Type 6 for problem 6 (Numbers Class)"<<endl;
    cout<<"Type 7 for problem 7 (Day of the Year)"<<endl;
    cout<<"Type 8 for problem 8 (Day of the Year Modification)"<<endl;
    cout<<"Type 9 for problem 9 (Date Class Modification)"<<endl;
    cout<<"Type 10 for problem 10 (NumDays Class)"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Define the instance of the Date
    Date ex;
    //Store in Date Object
    ex.setMon();
    ex.setDay();
    ex.setYear();
    //Display the Information
    ex.display();
    cout<<endl;
}

void problem2(){
    //Define the instance of the Employee
    Employee a,b,c;
    //Store in Employee Object
    cout<<"Employee 1"<<endl;
    a.getinfo();
    cout<<"Employee 2"<<endl;
    b.getinfo();
    cout<<"Employee 3"<<endl;
    c.getinfo();
    //Display
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Name"<<setw(15)<<"ID Number"<<setw(15)<<"Department"<<setw(15)<<"Position"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    a.display();
    b.display();
    c.display();
    cout<<endl;
}

void problem3(){
    //Declare Variables
    int year,speed=0;
    string make,trash;
    //Enter Information
    cout<<"Enter the Year Model: ";
    cin>>year;
    cout<<"Enter the Car Make: ";
    cin>>make;
    getline(cin,trash); //Gets all the leftovers
    //Construct a Car
    Car a(year,make,speed);
    //Display
    cout<<"Year: "<<a.getYear()<<endl;
    cout<<"Make: "<<a.getmake()<<endl;
    //Default
    cout<<"Speed: "<<a.getspeed()<<endl;
    //5 Acc.
    a.acc();a.acc();a.acc();a.acc();a.acc();
    cout<<"5x ACC. Speed: "<<a.getspeed()<<endl;
    //5 Dec.
    a.br();a.br();a.br();a.br();a.br();
    cout<<"5x Br. Speed: "<<a.getspeed()<<endl;
    cout<<endl;
}

void problem4(){
    //Construct 3 Different Data
    Data a,b,c;
    cout<<"Data 1"<<endl;
    a.getinfo();
    cout<<"Data 2"<<endl;
    b.getinfo();
    cout<<"Data 3"<<endl;
    c.getinfo();
    //Display
    cout<<"~~~~~~~~~~~Display Storage~~~~~~~~~~~"<<endl;
    cout<<"Person 1"<<endl;
    cout<<"Name: "<<a.getname()<<endl;
    cout<<"Address: "<<a.getaddr()<<endl;
    cout<<"Age: "<<a.getage()<<endl;
    cout<<"Phone Number: "<<a.getphone()<<endl;
    cout<<"Person 2"<<endl;
    cout<<"Name: "<<b.getname()<<endl;
    cout<<"Address: "<<b.getaddr()<<endl;
    cout<<"Age: "<<b.getage()<<endl;
    cout<<"Phone Number: "<<b.getphone()<<endl;
    cout<<"Person 3"<<endl;
    cout<<"Name: "<<c.getname()<<endl;
    cout<<"Address: "<<c.getaddr()<<endl;
    cout<<"Age: "<<c.getage()<<endl;
    cout<<"Phone Number: "<<c.getphone()<<endl;
    cout<<endl;
}

void problem5(){
    //Construct 3 Items
    RetailItem a,b,c;
    cout<<"Item 1"<<endl;
    a.getinfo();
    cout<<"Item 2"<<endl;
    b.getinfo();
    cout<<"Item 3"<<endl;
    c.getinfo();
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Item #"<<setw(15)<<"Description"<<setw(10)<<"Units"<<setw(10)<<"Price"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Item 1"<<setw(15)<<a.getdesc()<<setw(10)<<a.getunits()<<setw(10)<<setprecision(2)<<a.getprice()<<endl;
    cout<<"Item 2"<<setw(15)<<b.getdesc()<<setw(10)<<b.getunits()<<setw(10)<<setprecision(2)<<b.getprice()<<endl;
    cout<<"Item 3"<<setw(15)<<c.getdesc()<<setw(10)<<c.getunits()<<setw(10)<<setprecision(2)<<c.getprice()<<endl;
    cout<<endl;
}

void problem6(){
    //Construct a number
    Numbers a;
    //Translate and Display
    a.trans();
}

void problem7(){
    //Declare variables
    int days;
    cout<<"Enter a day within a Year: ";
    cin>>days;
    //Construct a Variable
    DayOfYear a(days);
    a.convert();
    a.print();
    cout<<endl;
}

void problem8(){
    //Declare variables
    int days;
    cout<<"Enter a day within a Year: ";
    cin>>days;
    //Construct a Variable
    DayOfYear2 a(days);
    a.convert();
    a.print();
    //Changes (did the least amount of changes)
    cout<<"Incremented"<<endl;
    for(int i=0;i<50;i++){
        days++;
        a.setnew(days);
        a.convert();
        a.print();
    }
    cout<<endl;
}

void problem9(){
    //Define the instance of the Date
    Date1 ex;
    //Store in Date Object
    ex.setMon();
    ex.setDay();
    ex.setYear();
    //Display the Information
    ex.display();
    //Increment
    for(int i=0;i<12;i++){
        //ex.operator --();
        ex.operator ++();
        ex.display();
    }
    cout<<endl;
}

void problem10(){
    //Declare Variables
    int hour;
    int day;
    //Create 3 objects
    NumDays a,b,c;
    cout<<"Enter Data#1 how many days,hours: ";
    cin>>day>>hour;
    a.sethour(hour);
    a.setdays(day);
    cout<<"Enter Data#2 how many days,hours: ";
    cin>>day>>hour;
    b.sethour(hour);
    b.setdays(day);
    //Assign first + second to third
    c=a+b;
    //Display Result
    cout<<"Data 1 + Data 2 = ";
    cout<<c.getdays()<<" days, ";
    cout<<c.gethour()<<" hours. "<<endl;
    //Assign first - second to third
    c=a-b;
    //Display Result
    cout<<"Data 1 - Data 2 = ";
    cout<<c.getdays()<<" days, ";
    cout<<c.gethour()<<" hours. "<<endl;
    //Increment and Display
    cout<<"Increment the Data above"<<endl;
    for(int i=0;i<10;i++){
        c.operator ++();
        cout<<c.getdays()<<" days, ";
        cout<<c.gethour()<<" hours. "<<endl;
    }
    cout<<"Increment the Data above"<<endl;
    for(int i=0;i<10;i++){
        c.operator --();
        cout<<c.getdays()<<" days, ";
        cout<<c.gethour()<<" hours. "<<endl;
    }
    
    
    cout<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}