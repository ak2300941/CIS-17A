/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 10:03 AM
 * CSC17A - Project 2
 * Calendar Organizer
 */

//System Libraries
#include <iostream>
using namespace std;

//User-Defined Libraries
#include "Month.h"
#include "Event.h"
#include "Birthday.h"
#include "Groceries.h"
#include "Holidays.h"
#include "Vacation.h"
#include "Work.h"

//Function Prototypes
void findDays(string &,int &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int days,finish=0,choice1;
    //Variables being used on repeat
    int amount[5],day;
    string name,trash;
    //Enter the Month
    cout<<"Calendar Planner"<<endl;
    cout<<"Enter the month to plan: (Ex. Format January, February, March......."<<endl;
    cin>>name;
    getline(cin,trash);
    //Find the days in the Month
    findDays(name,days);
    //Construct the Instance
    Month date(name,days);
    string da[date.getDays()];  //To add event
    do{
        cout<<"~~Menu to add in Events~~~"<<endl;
        cout<<"1. Birthday Events"<<endl;
        cout<<"2. Groceries"<<endl;
        cout<<"3. Holidays"<<endl;
        cout<<"4. Vacations"<<endl;
        cout<<"5. Work-Related"<<endl;
        cout<<"6. Press Any other key to leave menu"<<endl;
        cin>>choice1;
        if(choice1==1){
            cout<<"How many Birthday events is there?"<<endl;
            cin>>amount[0];
            for(int i=0;i<amount[0];i++){
                cout<<"Which day is the Birthday event?"<<endl;
                cin>>day;
                da[day-1]="Birthday Event";
            }
        }
        if(choice1==2){
            cout<<"How many times do you buy groceries in a month?"<<endl;
            cin>>amount[1];
            for(int i=0;i<amount[1];i++){
                cout<<"Which day do you buy groceries?"<<endl;
                cin>>day;
                da[day-1]="Buy Groceries";
            }
        }
        if(choice1==3){
            cout<<"How many holidays are there this month?"<<endl;
            cin>>amount[2];
            for(int i=0;i<amount[2];i++){
                cout<<"Which day is a holiday?"<<endl;
                cin>>day;
                da[day-1]="Holiday";
            }
        }
        if(choice1==4){
            cout<<"How many vacations do you have this month?"<<endl;
            cin>>amount[3];
            for(int i=0;i<amount[3];i++){
                cout<<"Which day is your vacation?"<<endl;
                cin>>day;
                da[day-1]="Vacation";
            }
        }
        if(choice1==5){
            cout<<"How many work related days you have this month?"<<endl;
            cin>>amount[4];
            for(int i=0;i<amount[3];i++){
                cout<<"When do you have work related events?"<<endl;
                cin>>day;
                da[day-1]="Work-Related Event";
            }
        }
        if(choice1==6)finish=1;
    }while(finish==0);
    //Use The classes in some way
    Birthday evb(amount[0]);
    Groceries evg(amount[1]);
    Holidays evh(amount[2]);
    Vacation evv(amount[3]);
    Work evw(amount[4]);
    
    
    
    
    
    //Display
    for(int i=0;i<date.getDays();i++){
        cout<<date.getName()<<" "<<i+1<<": "<<da[i]<<endl;
    }
    cout<<"Birthday Events: "<<evb.getNumb()<<endl;
    cout<<"Groceries: "<<evg.getNumb()<<endl;
    cout<<"Holidays: "<<evh.getNumb()<<endl;
    cout<<"Vacation: "<<evv.getNumb()<<endl;
    cout<<"Work: "<<evw.getNumb()<<endl;
    return 0;
}

void findDays(string &month,int &days){
    string a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    //Find the Days for that month
    if(month=="January"||month=="March"||month=="May"||month=="July"||month=="August"||month=="October"||month=="December")days=31;
    if(month=="April"||month=="June"||month=="September"||month=="November")days=30;
    if(month=="February")days=28;
    //If Months are spelled wrong or in a different format
    if(month!="January"&&month!="February"&&month!="March"&&month!="April"&&month!="May"&&month!="June"&&month!="July"&&month!="August"
            &&month!="September"&&month!="October"&&month!="November"&&month!="December"){
        do{
            cout<<"Re-Enter Month (Ex. January, February, March)"<<endl;
            cin>>month;
            //Check if the months are spelled right, if not keep looping until it is
        }while(month!="January"&&month!="February"&&month!="March"&&month!="April"&&month!="May"&&month!="June"&&month!="July"
                &&month!="August"&&month!="September"&&month!="October"&&month!="November"&&month!="December");
        //Find the Days for that month
        if(month=="January"||month=="March"||month=="May"||month=="July"||month=="August"||month=="October"||month=="December")days=31;
        if(month=="April"||month=="June"||month=="September"||month=="November")days=30;
        if(month=="February")days=28;
    }
}