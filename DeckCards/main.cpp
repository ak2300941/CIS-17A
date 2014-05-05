/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on April 30, 2014, 12:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Our Libraries
#include "CARD.h"
#include "DECK.h"

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Create an array of 52 cards
    int  nCards=52;
    Card **card=new Card*[nCards];
    Deck deck(nCards);
    //Check out all the cards
    for(int i=0;i<nCards;i++){
        card[i]=new Card(i);
        cout<<card[i]->name()<<card[i]->suit();
        cout<<" "<<static_cast<int>(card[i]->value())<<" "<<static_cast<int>(card[i]->getNumber())<<endl;
    }
    //Delete the arrays
    for(int i=0;i<nCards;i++){
        delete card[i];
    }
    delete []card;
    //Exit Stage Right
    return 0;
}

