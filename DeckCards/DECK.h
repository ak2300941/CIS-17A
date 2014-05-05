/* 
 * File:   DECK.h
 * Author: rcc
 *
 * Created on April 30, 2014, 1:59 PM
 */

#ifndef DECK_H
#define	DECK_H

#include "CARD.h"

class Deck{
   private:
       Card **card;
       int nCards;
       int nDelt;
   public:
       Deck(int);
       ~Deck(){
           for(int i=0;i<nCards;i++){
               delete card[i];
           }
           delete []card;
       }
       void shuffle();
       void *deal();
};

#endif	/* DECK_H */

