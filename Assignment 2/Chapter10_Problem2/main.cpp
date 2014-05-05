/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 28, 2014, 5:16 PM
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes
void reverse(char *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=100;
    char array[SIZE];
    //Input a string
    cout<<"Input a string. (No spaces)"<<endl;
    cin.getline(array,SIZE);
    //Reverse Function
    reverse(array,SIZE);
    return 0;
}

void reverse(char *a,int n){
    //Declare variables
    int length;
    length=strlen(a);
    for(int i=length-1;i>=0;i--){
        cout<<a[i];
    }
}