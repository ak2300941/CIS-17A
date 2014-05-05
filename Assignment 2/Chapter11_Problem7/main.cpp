/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 30, 2014, 2:18 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Structures
struct data{
    string name;
    string addres1;
    string addres2;
    int phone;
    float account;
    int date;
};

//Function Prototypes
void Menu();
int getN();
void def(int);
void edit(data *);
void display(data *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=20;
    const int CHAR=50;
    data array[SIZE];
    int inN;
    for(int i=0;i<SIZE;i++){
        cout<<"Name: ";
        cin>>array[i].name;
        cout<<"Address: ";
        cin>>array[i].addres1;
        cout<<"City, State and ZIP: ";
        cin>>array[i].addres2;
        cout<<"Telephone Number: ";
        cin>>array[i].phone;
        cout<<"Account Balance: ";
        cin>>array[i].account;
        cout<<"Date of Last Payment(Year): ";
        cin>>array[i].date;
    }
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    edit(array);break;
        case 2:    display(array,SIZE);break;
        default:   def(inN);}
    }while(inN>=1&&inN<=2);
    return 0;
}

void display(data *a,int n){
    for(int i=0;i<n;i++){
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Address: "<<a[i].addres1<<endl;
        cout<<a[i].addres2<<endl;
        cout<<"Telephone Number: "<<a[i].phone<<endl;
        cout<<"Account Balance: "<<a[i].account<<endl;
        cout<<"Date of Last Payment: "<<a[i].date<<endl;
    }
}

void edit(data *a){
    //Declare variable
    int num;
    cout<<"Edit Menu"<<endl;
    cout<<"Which account number would you like to edit? ";
    cin>>num;
    cout<<"Name: ";
    cin>>a[num].date;
    cout<<"Address: ";
    cin>>a[num].addres1;
    cout<<"City, State and ZIP ";
    cin>>a[num].addres2;
    cout<<"Telephone Number: ";
    cin>>a[num].phone;
    cout<<"Account Balance: ";
    cin>>a[num].account;
    cout<<"Date of Last Payment(Year): ";
    cin>>a[num].date;
}


void Menu(){
    cout<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Menu for Customer Accounts"<<endl;
    cout<<"Type 1 for Edit"<<endl;
    cout<<"Type 2 for Display"<<endl;

    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}