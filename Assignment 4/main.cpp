/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:46 AM
 * CSC17A - Assignment 4
 */

//System Libraries
#include <iostream>
using namespace std;

//User-Defined Libraries
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"

//Global Constants Here

//Function Prototypes Here
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();

//Begin Execution Here!!!
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
        default:   def(inN);}
    }while(inN>=1&&inN<=5);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Assignment 4"<<endl;
    cout<<"Type 1 for problem 1 (Employee and ProductionWorker Classes)"<<endl;
    cout<<"Type 2 for problem 2 (ShiftSupervisor Class)"<<endl;
    cout<<"Type 3 for problem 3 (TeamLeader Class)"<<endl;
    cout<<"Type 4 for problem 4 (Essay Class)"<<endl;
    cout<<"Type 5 for problem 5 (Military Time)"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare variables
    string name,trash,shiftn;
    int date,shift;
    unsigned int num;
    float rate;
    cout<<"Enter Employee's Name: ";
    cin>>name;
    getline(cin,trash);
    cout<<"Enter Employee's Number: ";
    cin>>num;
    cout<<"Enter Date Hired: (Year) ";
    cin>>date;
    cout<<"Day Shift = 1, Night Shift = 2 (Enter Number 1 or 2) ";
    cin>>shift;
    cout<<"Hourly Pay Rate: ";
    cin>>rate;
    //Construct the instance
    Employee worker(name,num,date);
    ProductionWorker pwork(shift,rate);
    //Display
    cout<<endl;
    cout<<"Employee Name: "<<worker.getName()<<endl;
    cout<<"Employee Number: "<<worker.getNum()<<endl;
    cout<<"Employee Hire Date: "<<worker.getDate()<<endl;
    //Day / Night
    if(pwork.getShift()==1)shiftn="Day";
    if(pwork.getShift()==2)shiftn="Night";
    cout<<"Employee Shift: "<<shiftn<<endl;
    cout<<"Employee Hourly Pay Rate: $"<<pwork.getRate()<<endl;
    cout<<endl;
}

void problem2(){
    //Declare Variables
    string name,trash;
    int date, salary, bonus,tot;
    unsigned int num;
    cout<<"Enter Employee's Name: ";
    cin>>name;
    getline(cin,trash);
    cout<<"Enter Employee's Number: ";
    cin>>num;
    cout<<"Enter Date Hired: (Year) ";
    cin>>date;
    cout<<"Enter Annual Salary: ";
    cin>>salary;
    cout<<"Enter Annual Production Bonus: ";
    cin>>bonus;
    //Construct the instance
    Employee worker(name,num,date);
    ShiftSupervisor sup(salary,bonus);
    //Total
    tot=sup.getSal()+sup.getBon();
    //Display
    cout<<endl;
    cout<<"Employee Name: "<<worker.getName()<<endl;
    cout<<"Employee Number: "<<worker.getNum()<<endl;
    cout<<"Employee Hire Date: "<<worker.getDate()<<endl;
    cout<<"Annual Salary: "<<sup.getSal()<<endl;
    cout<<"Annual Production Bonus: "<<sup.getBon()<<endl;
    cout<<"Annual Total Salary w/ Bonus: "<<tot<<endl;
    cout<<endl;
}

void problem3(){
    //Declare Variables
    int monb,reqh,attend,date,tot;
    string name,trash;
    unsigned int num;
    cout<<"Enter Employee's Name: ";
    cin>>name;
    getline(cin,trash);
    cout<<"Enter Employee's Number: ";
    cin>>num;
    cout<<"Enter Date Hired: (Year) ";
    cin>>date;
    cout<<"Enter Monthly Bonus Amount: ";
    cin>>monb;
    cout<<"Enter Required # of Training Hours: ";
    cin>>reqh;
    cout<<"Enter Training Hours Attended: ";
    cin>>attend;
    //Construct the instance
    Employee worker(name,num,date);
    TeamLeader a(monb,reqh,attend);
    //Display
    cout<<endl;
    cout<<"Employee Name: "<<worker.getName()<<endl;
    cout<<"Employee Number: "<<worker.getNum()<<endl;
    cout<<"Employee Hire Date: "<<worker.getDate()<<endl;
    //Check
    if(a.getAttend()>=a.getReqh())cout<<"Got Bonus of $"<<a.getBonus()<<endl;
    cout<<endl;
}

void problem4(){
    //Declare Variables
    int g,s,l,c,f;
    cout<<"Enter Grammar Score: ";
    cin>>g;
    cout<<"Enter Spelling Score: ";
    cin>>s;
    cout<<"Enter Length Score: ";
    cin>>l;
    cout<<"Enter Content Score: ";
    cin>>c;
    //Construct the instance
    Essay a(g,s,l,c);
    f=g+s+l+c;
    GradedActivity b(f);
    //Display
    cout<<endl;
    cout<<"Grammar: ";
    cout<<a.getGran()<<" points"<<endl;
    cout<<"Spelling: ";
    cout<<a.getSpell()<<" points"<<endl;
    cout<<"Correct length: ";
    cout<<a.getLeng()<<" points"<<endl;
    cout<<"Content: ";
    cout<<a.getCont()<<" points"<<endl;
    cout<<"Grade: "<<b.getScore()<<" points"<<endl;
    cout<<endl;
}

void problem5(){
    cout<<endl;
    cout<<"Show Default"<<endl;
    DateTime emptyDay;
    emptyDay.showDateTime();
    cout<<"Show After Input"<<endl;
    DateTime pastDay(2,4,1960,5,32,27);
    pastDay.showDateTime();
    cout<<"2:30pm Standard"<<endl;
    cout<<"~Military Time~"<<endl;
    MilTime show(14,30,0);
    show.setTime();
    cout<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}