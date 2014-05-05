/*
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 29, 2014, 3:18 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Structures
struct MovieData{
    string title;
    string direct;
    int year;
    float minutes;
    float cost;
    float revenue;
};

//Function Prototypes
void display(MovieData);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    MovieData movie1;
    MovieData movie2;
    //Store for first variable
    movie1.title="Title for First";
    movie1.direct="Director A";
    movie1.year=1988;
    movie1.minutes=120;
    movie1.revenue=120000;
    movie1.cost=100000;
    //Store for second variable
    movie2.title="Title for Second";
    movie2.direct="Director B";
    movie2.year=1978;
    movie2.minutes=148;
    movie2.revenue=200000;
    movie2.cost=150000;
    //Display Result
    cout<<"Movie 1"<<endl;
    display(movie1);
    cout<<endl;
    cout<<"Movie 2"<<endl;
    display(movie2);
    return 0;
}

void display(MovieData a){
    cout<<"Title: "<<a.title<<endl;
    cout<<"Director: "<<a.direct<<endl;
    cout<<"Year Released: "<<a.year<<endl;
    cout<<"Running Time: "<<a.minutes<<" minutes"<<endl;
    cout<<"Profit: "<<"$"<<(a.revenue-a.cost)<<endl;
}