/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on March 24, 2014, 1:18 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User defined Libraries
#include "AryStruc.h"

//Global Constants

//Function Prototypes
void fillAry(AryStruc1 *,int);
AryStruc1 *fillAry(int);
AryStruc2 *fillAry(int,int);
void prntAry(AryStruc1 *,int);
void prntAry(AryStruc2 *);
void dstry1a(AryStruc1 *);
void dstry1b(AryStruc1 *);
void dstry2(AryStruc2 *);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare the array structure
    AryStruc1 array1,*ptrAry1;
    AryStruc2 *array2;
    int size1=100,records=10,fields=9;
    //Fill the array
    fillAry(&array1,size1);
    ptrAry1=fillAry(size1);
    array2=fillAry(records,fields);
    //Print the array
    prntAry(&array1,10);
    prntAry(ptrAry1,10);
    prntAry(array2);
    //Destroy and Exit
    dstry1a(&array1);
    dstry1b(ptrAry1);
    dstry2(array2);
    return 0;
}

void dstry2(AryStruc2 *a){
    for(int rec=0;rec<a->records;rec++){
        delete []a->array[rec];
    }
    delete []a->array;
    delete a;
}

void dstry1b(AryStruc1 *a){
    delete []a->array;
    delete a;
}

void dstry1a(AryStruc1 *a){
    delete []a->array;
}

void prntAry(AryStruc2 *a){
    cout<<endl;
    //Print the array
    for(int rec=0;rec<a->records;rec++){
        for(int fld=0;fld<a->fields;fld++){
            cout<<a->array[rec][fld]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void prntAry(AryStruc1 *a,int perLine){
    cout<<endl;
    //Print the array
    for(int i=0;i<a->size;i++){
        cout<<a->array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

AryStruc2 *fillAry(int r, int f){
    //Allocate memory for the structure
    AryStruc2 *a=new AryStruc2;
    //Declare the size of the Array Structure
    a->records=r;
    a->fields=f;
    //Allocate memory
    a->array=new int*[a->records];
    //Fill the array
    for(int rec=0;rec<a->records;rec++){
        a->array[rec]=new int[a->fields];
        for(int fld=0;fld<a->fields;fld++){
            a->array[rec][fld]=rand()%90+10;
        }
    }
    return a;
}

AryStruc1 *fillAry(int n){
    //Allocate memory for the structure
    AryStruc1 *a=new AryStruc1;
    //Declare the size of the Array Structure
    a->size=n;
    //Allocate memory
    a->array=new int[a->size];
    //Fill the array
    for(int i=0;i<a->size;i++){
        a->array[i]=rand()%90+10;
    }
    return a;
}

void fillAry(AryStruc1 *a,int n){
    //Declare the size of the Array Structure
    a->size=n;
    //Allocate memory
    a->array=new int[a->size];
    //Fill the array
    for(int i=0;i<a->size;i++){
        a->array[i]=rand()%90+10;
    }
}