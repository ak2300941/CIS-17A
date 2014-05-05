/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 4, 2014, 2:48 PM
 * Review 3.12,3.13,4.10,5.11,6.7,7.6, and 8.7
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
float celsius(float);
int Search(string [],int,string);
void Sort(string [],int);


//Execution Begins Here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=7);
    return 0;
}

void Menu(){
    cout<<"Menu for the Review"<<endl;
    cout<<"Type 1 for 3.12 (Monthly Sales Tax Problem)"<<endl;
    cout<<"Type 2 for 3.13 (Property Tax Problem)"<<endl;
    cout<<"Type 3 for 4.10 (Software Sales Problem)"<<endl;
    cout<<"Type 4 for 5.11 (Population Problem)"<<endl;
    cout<<"Type 5 for 6.7  (Celsius Temperature Table)"<<endl;
    cout<<"Type 6 for 7.6 (Number Analysis Program)"<<endl;
    cout<<"Type 7 for 8.7 (Binary String Search)"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare variable
    string month;
    int year;
    float totsale,sales,stax,ctax,ttax;
    //Ask for month
    cout<<"What is the month? ";
    cin>>month;
    //Ask for year
    cout<<"What is the year? ";
    cin>>year;
    //Total amount collected (Sales + sales tax)
    cout<<"What is the total sales collected w/ tax in a month? ";
    cin>>totsale;
    //Calculations
    sales=totsale/1.06;          //Sales
    ctax=sales*0.02;            //County Sales Tax
    stax=sales*0.04;            //State Sales Tax
    ttax=ctax+stax;             //Total Sales Tax
    //Display
    cout<<"Month: "<<endl;
    cout<<"--------------------"<<endl;
    //Format
    cout<<setprecision(2)<<fixed;
    cout<<"Total Collected:        $"<<setw(9)<<totsale<<endl;
    cout<<"Sales:                  $"<<setw(9)<<sales<<endl;
    cout<<"County Sales Tax:       $"<<setw(9)<<ctax<<endl;
    cout<<"State Sales Tax:        $"<<setw(9)<<stax<<endl;
    cout<<"Total Sales Tax:        $"<<setw(9)<<ttax<<endl;
    //Exit Stage Right
    cout<<endl;
}

void problem2(){
    //Declare variable
    float actual,asses,proptax;
    //Enter Actual value of the property
    cout<<"What is the actual value of the property? ";
    cin>>actual;
    //Format
    cout<<setprecision(2)<<fixed<<endl;
    //Calculation
    asses=actual*.6;            //Assessment Value
    proptax=(asses/100)*.64;      //Property Tax   
    //Display Result
    cout<<"Assessment Value: $"<<setw(8)<<asses<<endl;
    cout<<"Property Tax:     $"<<setw(8)<<proptax<<endl;
    //Exit Stage Right
    cout<<endl;
}

void problem3(){
    //Declare variables
    int package,cost;
    float total;
    //Enter # of packages sold
    cout<<"How many units were sold? ";
    cin>>package;
    //Calculate
    cost=package*99;
    //Discount
    if(package>=0&&package<=10){
        total=cost;
    }
    if(package>=10&&package<=19){
        total=cost*.2;
    }
    else if(package>=20&&package<=49){
        total=cost*.3;
    }
    else if(package>=50&&package<=99){
        total=cost*.4;
    }
    else if(package>=100){
        total=cost*.5;
    }
    //Display Result
    cout<<"The number of units sold: "<<package<<endl;
    //Format
    cout<<setprecision(2)<<fixed;
    cout<<"The total cost of purchase: $"<<total<<endl;
    //Exit Stage Right
    cout<<endl;
}

void problem4(){
    //Declare variable
    int initial,days;
    float popinc,temp,result;
    //Starting # of organism
    cout<<"Enter starting # of organism: ";
    cin>>initial;
    if(initial<2){
        do{
            cout<<"Enter # greater than 1: ";
            cin>>initial;
        }while(initial<2);
    }
    //Average daily population increase (percentage)
    cout<<"Enter average daily population increase in %: ";
    cin>>popinc;
    if(popinc<=0){
        do{
            cout<<"Enter a positive percentage: ";
            cin>>popinc;
        }while(popinc<=0); 
    }
    popinc=popinc/100;
    //# of days
    cout<<"Enter the number of days they will multiply: ";
    cin>>days;
    if(days<1){
        do{
            cout<<"Enter a value greater than 0: ";
            cin>>days;
        }while(days<1);
    }
    //Calculation and Result (Loop)
    for(int i=0;i<days;i++){
        temp=initial*popinc;
        initial=temp+initial;
        cout<<initial<<" day "<<i+1<<endl;
    }
    //Exit Stage Right
}

float celsius(float f){
    //Declare variable
    float c;
    //Format
    cout<<setprecision(2)<<fixed;
    //Calculation
    c=5.0/9.0*(f-32);
    return c;
}

void problem5(){
    //Declare variable
    float cels;
    //Format
    cout<<setprecision(2)<<fixed;
    for(int i=0;i<=20;i++){
        cels=celsius(i);
        cout<<"Fahrenheit: "<<i<<" Celsius: "<<cels<<endl;
    }
    //Exit Stage Right
    cout<<endl;
}

void problem6(){
    //Declare variable
    const int SIZE=12;
    int a[SIZE];
    float avg,total=0,numb;
    string name;
    //Ready to read in
    ifstream File;
    File.open("numbers.txt");
    //Read into an array
    cout<<"Original Array"<<endl;
    for(int i=0;i<SIZE;i++){
        File>>numb;
        a[i]=numb;
        //Display original
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Lowest number in the array"<<endl;
    cout<<a[7]<<endl;
    cout<<"Highest number in the array"<<endl;
    cout<<a[1]<<endl;
    cout<<"Total of the numbers in the array"<<endl;
    for(int i=0;i<SIZE;i++){
        total=total+a[i];
    }
    cout<<total<<endl;
    cout<<"Average of the numbers in the array"<<endl;
    //Format
    cout<<setprecision(2)<<fixed;
    avg=total/SIZE;
    cout<<avg<<endl;
    //Close file
    File.close();
    //Exit Stage Right
    cout<<endl;
}

int Search(string array[],int numElems,string name){
    int first=0,                //First array element
    last=numElems-1,            //Last array element
    middle,                     //Midpoint of search
    position=-1;                //Position of search value
    bool found=false;           //Flag
    while(!found&&first<=last){
        middle=(first+last)/2;  //Calculate midpoint
        if(array[middle]==name){
            found=true;
            position=middle;
        }
        else if(array[middle]>name)
            last=middle-1;
        else
                first=middle+1;
    }
    return position;
}

void Sort(string a[],int size){
    string minvalue;
    int minindex;
    for(int i=0;i<(size-1);i++){
        minindex=i;
        minvalue=a[i];
        for(int j=i+1;j<size;j++){
            if(a[j]<minvalue){
                minvalue=a[j];
                minindex=j;
            }
        }
        a[minindex]=a[i];
        a[i]=minvalue;
    }
}

void problem7(){
    //Declare variables
    const int SIZE = 20;
    int result;
    //Initialize array
    string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    //First sort to be able to use search function
    Sort(names,SIZE);
    cout<<"~~~~~~ After Sorting ~~~~~~"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<names[i]<<endl;
    }
    cout<<endl;
    //Search
    cout<<"Searching for Pore, Bob"<<endl;
    result=Search(names,SIZE,"Pore, Bob");
    if(result==-1){
        cout<<"That name does not exit in array"<<endl;
    }
    else{
        cout<<"That name is found in "<<result+1<<" in the array"<<endl;
    }
    //Exit Stage Right
    cout<<endl;
}


void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}