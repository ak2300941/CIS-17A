/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 23, 2013, 8:22 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Our Libraries
#include "Array.h"
#include "Array2d.h"

//Global Constants

//Function Prototypes
Array *filStrct(int);
void   prntStrc(Array *,int);
void   dstrStr(Array *);
//Create and implement
Array2d *filStrc2(int,int);
void   prntStrc(Array2d *,int);
void   dstrStr(Array2d *);

int main(int argc, char** argv) {
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Allocate the array structure
    //Array *array1=filStrct(75);
    //Array *array2=filStrct(25);
    Array2d *array3=filStrc2(10,10);
    //Print the structure
    //prntStrc(array1,10);
    //prntStrc(array2,10);
    prntStrc(array3,100);
    //Deallocate memory
    //dstrStr(array1);
    //dstrStr(array2);
    dstrStr(array3);
    //Exit stage right
    return 0;
}

void   dstrStr(Array2d *a){
    //Deallocate the data first
    for(int rows=0;rows<a->row;rows++){
        delete []a->data[rows];
    }
    delete []a->data;
    delete a;
}

void   dstrStr(Array *a){
    //Deallocate the data first
    delete [] a->data;
    //Deallocate the array structure
    delete a;
}

void   prntStrc(Array2d *a,int perLine){
    //Output the array
    cout<<endl;
    for(int rows=0;rows<a->row;rows++){
        for(int cols=0;cols<a->col;cols++){
            cout<<a->data[rows][cols]<<" ";
            if(rows%perLine==(perLine-1))cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}

void   prntStrc(Array *a,int colPRow){
    //Output the array
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%colPRow==(colPRow-1))
            cout<<endl;
    }
    cout<<endl;
}

Array2d *filStrc2(int r,int c){
    //Create the pointer to a structure
    Array2d *a=new Array2d;
    //Set the rows and columns of the array in the structure
    a->row=r;
    a->col=c;
    //Allocate the array
    a->data=new int*[a->row];
    //Fill the array
    for(int rows=0;rows<a->row;rows++){
        a->data[rows]=new int[a->col];
        for(int cols=0;cols<a->col;cols++){
            a->data[rows][cols]=rand()%90+10;
        }
    }
    return a;
}

Array *filStrct(int n){
    //Create the pointer to a structure
    Array *a=new Array;
    //Set the size of the array in the structure
    a->size=n;
    //Allocate the array
    a->data=new int[n];
    //Fill the array
    for(int i=0;i<n;i++){
        a->data[i]=rand()%90+10;
    }
    //Return the structure
    return a;
}

