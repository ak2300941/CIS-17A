/* 
 * File:   ChildCard.h
 * Author: Dr. Mark E. Lehr
 * Created on May 21, 2014, 1:10 PM
 * Specification for the Child Card
 */

#ifndef CHILDCARD_H
#define	CHILDCARD_H

using namespace std;

#include "Card.h"

class ChildCard:public Card{
    private:
        string fileName;
    public:
        ChildCard(int num):Card(num){;}
        void setFN(string fn){fileName=fn;}
        string getFN(){return fileName;}
};

#endif	/* CHILDCARD_H */

