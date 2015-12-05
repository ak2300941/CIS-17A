/* 
 * File:   Prob1Random.cpp
 * Author: Andrew Kim
 * Created on June 10, 2014, 6:39 PM
 */

#include "Prob1Random.h"
#include <ctime>
#include <cstdlib>

#include <iostream>
using namespace std;

Prob1Random::Prob1Random(const char n, const char *r){
    nset=n;
    //Makes size to hold set;
    set=new char[nset];
    //Makes size for counting frequency
    freq=new int[nset];
    for(int i=0;i<nset;i++){
        //Get the values and store it
        set[i]=r[i];
        //Set it all to 0
        freq[i]=0;
    }
    //Declare 0 to count it up later.
    numRand=0;
    //Able to use rand and get different numbers here
    srand(static_cast<unsigned int>(time(0)));
}

Prob1Random::~Prob1Random(){
    delete []freq;
    delete []set;
}

char Prob1Random::randFromSet(){
    int random;
    char picked;
    //Count how many times used this function
    numRand++;
    //Random from 1~5
    random=rand()%5;
    for(int i=0;i<nset;i++){
        if(random==i){
            picked=set[random];
            freq[random]++;
            i=nset;
        }
    }
    
    return picked;
}

int *Prob1Random::getFreq() const{
    
    return freq;
}

char *Prob1Random::getSet() const{
    
    return set;
}

int Prob1Random::getNumRand() const{
    
    return numRand;
}


