/* 
 * File:   DECK.h
 * Author: rcc
 * Created on April 30, 2014, 1:59 PM
 * Specification for the Deck
 */

#include "DECK.h"

Deck::Deck(int numCards){
    //Create an array of 52 cards
    nCards=numCards;
    card=new Card*[nCards];
    //Allocate the index
    index=new int[nCards];
    //Check out all the cards
    for(int i=0;i<nCards;i++){
        card[i]=new Card(i%52);
        index[i]=i;
    }
}
