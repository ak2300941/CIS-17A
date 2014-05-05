/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 29, 2014, 4:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Structures
struct Sales{
    float first;
    float second;
    float third;
    float fourth;
    float total;
    float avg;
};
//Function Prototypes
void calc(Sales &);
void display(Sales);
//Execution Begins Here=
int main(int argc, char** argv) {
    //Declare variables
    Sales east;
    Sales west;
    Sales north;
    Sales south;
    cout<<"Sales for East"<<endl;
    calc(east);
    cout<<"Sales for West"<<endl;
    calc(west);
    cout<<"Sales for North"<<endl;
    calc(north);
    cout<<"Sales for South"<<endl;
    calc(south);
    //Result
    cout<<"East~~~~~~~~~"<<endl;
    display(east);
    cout<<"West~~~~~~~~~"<<endl;
    display(west);
    cout<<"North~~~~~~~~~"<<endl;
    display(north);
    cout<<"South~~~~~~~~~"<<endl;
    display(south);
    return 0;
}

void display(Sales a){
    cout<<"First Quarter: $"<<a.first<<endl;
    cout<<"Second Quarter: $"<<a.second<<endl;
    cout<<"Third Quarter: $"<<a.third<<endl;
    cout<<"Fourth Quarter: $"<<a.fourth<<endl;
    cout<<"Total Annual Sales: $"<<a.total<<endl;
    cout<<"Average Quarterly Sales: $"<<a.avg<<endl;
}

void calc(Sales &a){
    //Get Sales
    cout<<"What is the sales for the first quarter? ";
    cin>>a.first;
    if(a.first<0){
        do{
            cout<<"Type in a positive number"<<endl;
            cin>>a.first;
        }while(a.first<0);
    }
    cout<<"What is the sales for the second quarter? ";
    cin>>a.second;
    if(a.second<0){
        do{
            cout<<"Type in a positive number"<<endl;
            cin>>a.second;
        }while(a.second<0);
    }
    cout<<"What is the sales for the third quarter? ";
    cin>>a.third;
    if(a.third<0){
        do{
            cout<<"Type in a positive number"<<endl;
            cin>>a.third;
        }while(a.third<0);
    }
    cout<<"What is the sales for the fourth quarter? ";
    cin>>a.fourth;
    if(a.fourth<0){
        do{
            cout<<"Type in a positive number"<<endl;
            cin>>a.fourth;
        }while(a.fourth<0);
    }
    //Calculation
    a.total=(a.first+a.second+a.third+a.fourth);
    a.avg=a.total/4;
}