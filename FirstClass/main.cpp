/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on April 9, 2014, 1:24 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Our Libraries
#include "Array1D.h"

//No Global Constants

//No Function Prototypes

int main(int argc, char** argv) {
    //Set timer seed
    //srand(time(NULL));
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    Array1D myArray(100),yourArray(100);
    //Print the array
    myArray.prntArray(10);
    yourArray.prntArray(10);
    //Exit the program
    return 0;
}

