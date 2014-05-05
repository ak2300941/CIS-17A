/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 30, 2014, 1:45 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Structures
struct data{
    string name;
    int number;
    int point;
};

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=12;
    const int NAME=50;
    int total=0;
    data array[SIZE];
    //Store info for 12 players
    for(int i=0;i<SIZE;i++){
        cout<<"What is the players name? ";
        cin>>array[i].name;
        cout<<"What is the players number? ";
        cin>>array[i].number;
        cout<<"How many points scored by the player? ";
        cin>>array[i].point;
        total=total+array[i].point;
    }
    //Result
    for(int i=0;i<SIZE;i++){
        cout<<endl;
        cout<<"Players Number: "<<array[i].number<<endl;
        cout<<"Player: "<<array[i].name<<endl;
        cout<<"Points Scored: "<<array[i].point<<endl;
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Total points of team: "<<total<<endl;
    return 0;
}

