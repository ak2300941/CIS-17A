/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 30, 2014, 3:49 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    fstream file;
    string name;
    int count=0;;
    cout<<"What is the file name? ";
    getline(cin,name);
    //Opens file name from the input
    file.open(name.c_str(),ios::in);
    while(file>>name){
        if(count==10){
            break;
        }
        cout<<name<<endl;
        count++;
    }
    file.close();
    return 0;
}

