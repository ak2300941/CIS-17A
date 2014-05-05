/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 28, 2014, 5:58 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
int word(string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    string words;
    //Input a string
    cout<<"Input a string."<<endl;
    getline(cin,words);
    word(words);
    return 0;
}

int word(string a){
    //Declare variables
    int count=1;
    int length=a.length();
    //Count how many words
    for(int i=0;i<=length;i++){
        if(a[i]==' '){
            count++;
        }
    }
    cout<<"Has "<<count<<" words in the string."<<endl;
}