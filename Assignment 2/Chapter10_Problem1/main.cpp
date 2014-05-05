/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 28, 2014, 4:52 PM
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes
int length(char *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=50;
    char string[SIZE];
    int count;
    //Input a string
    cout<<"Input a string. (No spaces)"<<endl;
    cin>>string;
    count=length(string,SIZE);
    //Display Functions Return Value
    cout<<"The number of characters in the string is "<<count<<"."<<endl;
    return 0;
}

int length(char *array,int n){
    int count;
    //Count how many # of characters in string
    count=strlen(array);
    return count;
}