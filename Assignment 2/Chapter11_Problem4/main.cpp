/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 29, 2014, 4:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Structures
struct data{
    float total;
    float high;
    float low;
    float avg;
};

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variable
    const int SIZE=12;
    int high,low;
    float tot=0,tottemp=0;;
    float avg,avgtemp;
    data array[SIZE];
    for(int i=1;i<=SIZE;i++){
        cout<<"Month "<<i<<endl;
        cout<<"Rainfall: ";
        cin>>array[i].total;
        tot=tot+array[i].total;
        cout<<"Temperature: ";
        cin>>array[i].avg;
        tottemp=tottemp+array[i].avg;
        if(array[i].avg>140||array[i].avg<-100){
            do{
                cout<<"Enter number between 140~-100";
                cin>>array[i].avg;
                tottemp=tottemp+array[i].avg;
            }while(array[i].avg>140||array[i].avg<100);
        }
    }
    //Find High and Low Temperatures
    for(int j=0;j<SIZE;j++){
        if(array[j].avg>high){
            high=array[j].avg;
        }
        if(array[j].avg<low){
            low=array[j].avg;
        }
    }
    //Calculate
    avg=tot/12;
    avgtemp=tottemp/12;
    //Result
    cout<<endl;
    cout<<"Average monthly rainfall is "<<avg<<endl;
    cout<<"Total rainfall of the year is "<<tot<<endl;
    cout<<"Highest Temperature is "<<high<<endl;
    cout<<"Lowest Temperature is "<<low<<endl;
    cout<<"Average of all average monthly temperatures is "<<avgtemp<<endl;
    return 0;
}

