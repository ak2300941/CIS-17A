/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on June 2, 2014, 10:03 AM
 * CSC17A - Project 2
 * Calendar Organizer
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//User-Defined Libraries
#include "Month.h"
#include "Event.h"
#include "Birthday.h"
#include "Groceries.h"
#include "Holidays.h"
#include "Vacation.h"
#include "Work.h"
#include "Calculate.h"

//Function Prototypes
void findDays(string &,int &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int days,finish=0,plan=0,choice1,choice2;
    int full=0;
    int check1=0,check2=0;
    //For Randomize Event for Calendar
    srand(static_cast<unsigned int>(time(0)));
    //Variables being used on repeat
    int amount[5]={0},day;
    string name,trash;
    //Use The classes in some way
    Birthday evb(amount[0]);
    Groceries evg(amount[1]);
    Holidays evh(amount[2]);
    Vacation evv(amount[3]);
    Work evw(amount[4]);
    //Open File
    fstream dataFile("file.txt", ios::in);
    string files;
    //Enter the Month
    if(dataFile){
            getline(dataFile,files,'$');
            cout<<files<<endl;
        }
    cout<<"Enter the month to plan: (Follow the format given)"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"January"<<endl;
    cout<<"February"<<endl;
    cout<<"March"<<endl;
    cout<<"April"<<endl;
    cout<<"May"<<endl;
    cout<<"June"<<endl;
    cout<<"July"<<endl;
    cout<<"August"<<endl;
    cout<<"September"<<endl;
    cout<<"October"<<endl;
    cout<<"November"<<endl;
    cout<<"December"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<endl;
    cin>>name;
    getline(cin,trash);
    //Find the days in the Month
    findDays(name,days);
    //Construct the Month class
    Month date(name,days);
    string da[date.getDays()];  //To add event
    
    do{
        cout<<endl;
        cout<<"~~Menu to add in Events~~~"<<endl;
        cout<<"First choose one of the first 2 options"<<endl;
        cout<<"1. Enter the Events"<<endl;
        cout<<"2. Randomize Events for the Month"<<endl;
        cout<<"3. Clear Data"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"4. Search up Events to find out days"<<endl;
        cout<<"5. Find days which are open"<<endl;
        cout<<"6. Display Result of the Planner"<<endl;
        cout<<"7. Change the month"<<endl;
        cout<<"8. Press to exit"<<endl;
        cin>>choice1;
        if(choice1==1)check1=1;
        //If went to choice 2 and coming back to choice 1
        if(choice1==1&&check2==1){
            cout<<"Resetting Data"<<endl;
            //Reset everything
            for(int i=0;i<date.getDays();i++){
                da[i]="";
            }
            //Pointer
            *(amount+0)=0;
            *(amount+1)=0;
            *(amount+2)=0;
            *(amount+3)=0;
            *(amount+4)=0;
            *(amount+5)=0;
            
            //Reset from Class
            evb.reset();
            evg.reset();
            evh.reset();
            evv.reset();
            evw.reset();
            full=0;
        }
        if(choice1==1&&full==1){
            cout<<"Sorry. Event Calendar is full"<<endl;
        }
        if(choice1==1&&full!=1){
            do{
                cout<<"~~Choose the Events to add into the Monthly Planner~~~"<<endl;
                cout<<"1. Birthday Events"<<endl;
                cout<<"2. Groceries"<<endl;
                cout<<"3. Holidays"<<endl;
                cout<<"4. Vacations"<<endl;
                cout<<"5. Work-Related"<<endl;
                cout<<"6. Back to main menu"<<endl;
                cin>>choice2;
                if(choice2==1){
                    cout<<"How many Birthday events is there?"<<endl;
                    cin>>amount[0];
                    evb.setNumb(amount[0]);
                    for(int i=0;i<amount[0];i++){
                        cout<<"Which day is the Birthday event?"<<endl;
                        cin>>day;
                        if(da[day-1]!=""){
                            do{
                                cout<<"Event for this day is already filled"<<endl;
                                cout<<"Please pick another day. ";
                                cin>>day;
                            }while(da[day-1]!="");
                        }
                        da[day-1]="Birthday Event";
                    }
                }
                if(choice2==2){
                    cout<<"How many times do you buy groceries in a month?"<<endl;
                    cin>>amount[1];
                    evg.setNumb(amount[1]);
                    for(int i=0;i<amount[1];i++){
                        cout<<"Which day do you buy groceries?"<<endl;
                        cin>>day;
                        if(da[day-1]!=""){
                            do{
                                cout<<"Event for this day is already filled"<<endl;
                                cout<<"Please pick another day. ";
                                cin>>day;
                            }while(da[day-1]!="");
                        }
                         da[day-1]="Groceries";
                    }
                }
                if(choice2==3){
                    cout<<"How many holidays are there this month?"<<endl;
                    cin>>amount[2];
                    evh.setNumb(amount[2]);
                    for(int i=0;i<amount[2];i++){
                        cout<<"Which day is a holiday?"<<endl;
                        cin>>day;
                        if(da[day-1]!=""){
                            do{
                                cout<<"Event for this day is already filled"<<endl;
                                cout<<"Please pick another day. ";
                                cin>>day;
                            }while(da[day-1]!="");
                        }
                        da[day-1]="Holiday";
                    }
                }
                if(choice2==4){
                    cout<<"How many vacations do you have this month?"<<endl;
                    cin>>amount[3];
                    evv.setNumb(amount[3]);
                    for(int i=0;i<amount[3];i++){
                        cout<<"Which day is your vacation?"<<endl;
                        cin>>day;
                        if(da[day-1]!=""){
                            do{
                                cout<<"Event for this day is already filled"<<endl;
                                cout<<"Please pick another day. ";
                                cin>>day;
                            }while(da[day-1]!="");
                        }
                        da[day-1]="Vacation";
                    }
                }
                if(choice2==5){
                    cout<<"How many work related days you have this month?"<<endl;
                    cin>>amount[4];
                    evw.setNumb(amount[4]);
                    for(int i=0;i<amount[3];i++){
                        cout<<"When do you have work related events?"<<endl;
                        cin>>day;
                        if(da[day-1]!=""){
                            do{
                                cout<<"Event for this day is already filled"<<endl;
                                cout<<"Please pick another day. ";
                                cin>>day;
                            }while(da[day-1]!="");
                        }
                        da[day-1]="Work-Related Event";
                    }
                }
                if(choice2==6)plan=1;
            }while(plan==0);
        }
        //To make it easier
        int tot;
        int dah=date.getDays();
        if(choice1==2)check2=1;
        if(choice1==2&&check1==1){
            cout<<"Resetting Data"<<endl;
            //Reset everything
            for(int i=0;i<date.getDays();i++){
                da[i]="";
            }
            amount[0]=0;
            amount[1]=0;
            amount[2]=0;
            amount[3]=0;
            amount[4]=0;
            amount[5]=0;
            evb.reset();
            evg.reset();
            evh.reset();
            evv.reset();
            evw.reset();
            full=0;
        }
        if(choice1==2&&full==1){
            cout<<"Sorry. Event Calendar is full"<<endl;
        }
        if(choice1==2&&full!=1){
            do{
                //Check to see if there are more events than days in the month
                cout<<"How many Birthdays in this month? :";
                cin>>amount[0];
                cout<<"How many times do you buy Groceries in a month: ";
                cin>>amount[1];
                cout<<"How many Holidays in this month: ";
                cin>>amount[2];
                cout<<"How many Vacation days do you have in this month: ";
                cin>>amount[3];
                cout<<"How many Work-related days do you have this month: ";
                cin>>amount[4];
                //Add the event amount
                tot=amount[0]+amount[1]+amount[2]+amount[3]+amount[4];
                if(tot>dah){
                    cout<<"There are more events then days in the month"<<endl;
                    cout<<"Re-Enter the amount"<<endl;
                    cout<<endl;
                }
                if(tot==dah)full=1;
            }while(tot>dah);
            //Add Amount After the check
            evb.setNumb(amount[0]);
            evg.setNumb(amount[1]);
            evh.setNumb(amount[2]);
            evv.setNumb(amount[3]);
            evw.setNumb(amount[4]);
            //Randomize and put events into the days of the month
            int a;
            for(int i=0;i<amount[0];i++){
                a=rand()%dah+1;
                if(da[a-1]!=""){      //If not empty
                    do{
                        a=rand()%dah+1;
                    }while(da[a-1]!="");
                }
                da[a-1]="Birthday Event";
            }
            int b;
            for(int i=0;i<amount[1];i++){
                b=rand()%dah+1;
                if(da[b-1]!=""){      //If not empty
                    do{
                        b=rand()%dah+1;
                    }while(da[b-1]!="");
                }
                da[b-1]="Groceries";
            }
            int c;
            for(int i=0;i<amount[2];i++){
                c=rand()%dah+1;
                if(da[c-1]!=""){      //If not empty
                    do{
                        c=rand()%dah+1;
                    }while(da[c-1]!="");
                }
                da[c-1]="Holiday";
            }
            int d;
            for(int i=0;i<amount[3];i++){
                d=rand()%dah+1;
                if(da[d-1]!=""){      //If not empty
                    do{
                        d=rand()%dah+1;
                    }while(da[d-1]!="");
                }
                da[d-1]="Vacation";
            }
            int e;
            for(int i=0;i<amount[4];i++){
                e=rand()%dah+1;
                if(da[e-1]!=""){      //If not empty
                    do{
                        e=rand()%dah+1;
                    }while(da[e-1]!="");
                }
                da[e-1]="Work Related";
            }
        }
        if(choice1==3){
            cout<<"Resetting all data"<<endl;
            //Reset everything
            for(int i=0;i<date.getDays();i++){
                da[i]="";
            }
            //Pointer
            *(amount+0)=0;
            *(amount+1)=0;
            *(amount+2)=0;
            *(amount+3)=0;
            *(amount+4)=0;
            *(amount+5)=0;
            
            //Reset from Class
            evb.reset();
            evg.reset();
            evh.reset();
            evv.reset();
            evw.reset();
            full=0;
        }
        cout<<endl;
        string search;
        if(choice1==4){
            cout<<"Enter which event you want to find the days for."<<endl;
            cout<<"Enter with the format of the following events below"<<endl;
            cout<<"~Event~"<<endl;
            cout<<"Birthday Event"<<endl;
            cout<<"Groceries"<<endl;
            cout<<"Holiday"<<endl;
            cout<<"Vacation"<<endl;
            cout<<"Work Related"<<endl;
            cout<<endl;
            cin.ignore();
            getline(cin,search);
            cout<<endl;
            //If The format for search is wrong
            if(search!="Birthday Event"&&search!="Groceries"&&search!="Holiday"&&search!="Vacation"&&search!="Work Related"){
                do{
                    cout<<"The formating is wrong"<<endl;
                    cout<<"Please type in the Events in the correct format"<<endl;
                    cout<<"~Event~"<<endl;
                    cout<<"Birthday Event"<<endl;
                    cout<<"Groceries"<<endl;
                    cout<<"Holiday"<<endl;
                    cout<<"Vacation"<<endl;
                    cout<<"Work Related"<<endl;
                    cout<<endl;
                    getline(cin,search);
                    cout<<endl;
                }while(search!="Birthday Event"&&search!="Groceries"&&search!="Holiday"&&search!="Vacation"&&search!="Work Related");
            }
            //Search Event in the Array
            for(int i=0;i<date.getDays();i++){
                if(search==da[i]){
                    cout<<"Found in Day "<<i+1<<endl;
                }
                else{
                    cout<<"Not Found in Day "<<i+1<<endl;
                }
            }
            cout<<endl;
        }
        //To find empty array
        if(choice1==5){
            cout<<"The following days are free"<<endl;
            for(int i=0;i<date.getDays();i++){
                if(da[i]==""){
                    cout<<"Day "<<i+1<<endl;
                }
            }
            cout<<endl;
            cout<<"The following days are not free"<<endl;
            for(int i=0;i<date.getDays();i++){
                if(da[i]!=""){
                    cout<<"Day "<<i+1<<" is not free"<<endl;
                }
            }
            cout<<endl;
        }
        cout<<endl;
        if(choice1==6){
            //Display
            for(int i=0;i<date.getDays();i++){
                cout<<date.getName()<<" "<<i+1<<": "<<da[i]<<endl;
            }
            cout<<endl;
            cout<<"Birthday Events: "<<evb.getNub()<<endl;
            cout<<"Groceries: "<<evg.getNug()<<endl;
            cout<<"Holidays: "<<evh.getNuh()<<endl;
            cout<<"Vacation: "<<evv.getNuv()<<endl;
            cout<<"Work: "<<evw.getNuw()<<endl;
            //Event Class to add up all Events happened
            Event a(evb.getNub(),evg.getNug(),evh.getNuh(),evv.getNuv(),evw.getNuw());
            a.addUp();
            cout<<endl;
            //Pull out Percentage
            Calculate stuff(evb.getNub(),evg.getNug(),evh.getNuh(),evv.getNuv(),evw.getNuw());
            cout<<setprecision(2)<<fixed<<endl;
            cout<<"In One Month"<<endl;
            cout<<"Percentage of Birthdays: %"<<stuff.getBP()*100<<endl;
            cout<<"Percentage of Groceries: %"<<stuff.getGP()*100<<endl;
            cout<<"Percentage of Holidays: %"<<stuff.getHP()*100<<endl;
            cout<<"Percentage of Vacation: %"<<stuff.getVP()*100<<endl;
            cout<<"Percentage of Work: %"<<stuff.getWP()*100<<endl;
            cout<<endl;
        }
        if(choice1==7){
            //Reset everything
            for(int i=0;i<date.getDays();i++){
                da[i]="";
            }
            //Pointer
            *(amount+0)=0;
            *(amount+1)=0;
            *(amount+2)=0;
            *(amount+3)=0;
            *(amount+4)=0;
            *(amount+5)=0;
            //Reset from Class
            evb.reset();
            evg.reset();
            evh.reset();
            evv.reset();
            evw.reset();
            full=0;
            cout<<"Changing the Month"<<endl;
            cout<<"Enter the month to plan: (Follow the format given)"<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"January"<<endl;
            cout<<"February"<<endl;
            cout<<"March"<<endl;
            cout<<"April"<<endl;
            cout<<"May"<<endl;
            cout<<"June"<<endl;
            cout<<"July"<<endl;
            cout<<"August"<<endl;
            cout<<"September"<<endl;
            cout<<"October"<<endl;
            cout<<"November"<<endl;
            cout<<"December"<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<endl;
            cin>>name;
            getline(cin,trash);
            //Find the days in the Month
            findDays(name,days);
            date.setDays(days);
            date.setName(name);
        }
        if(choice1==8)finish=1;
    }while(finish==0);
    //Close the file
    dataFile.close();
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