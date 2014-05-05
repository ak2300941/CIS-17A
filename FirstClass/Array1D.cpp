/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on April 9, 2014, 1:24 PM
 */

#include "Array1D.h"

#include <cstdlib>
#include <iostream>
using namespace std;

Array1D::Array1D(int n){
    //First set the size
    setSize(n);
    //Fill the array
    fillArray();
}

void Array1D::setSize(int n){
    if(n<=2)n=2;
    else size=n;
}

void Array1D::fillArray(){
    //Allocate memory
    data=new int[size];
    //Fill the array randomly
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;
    }
}

void Array1D::prntArray(int perLine){
    //Print the array
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}