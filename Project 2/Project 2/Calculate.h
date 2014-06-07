/* 
 * File:   Calculate.h
 * Author: Andrew Kim
 * Created on June 6, 2014, 6:36 PM
 * Calculate Specification
 */

#ifndef CALCULATE_H
#define	CALCULATE_H
#include <iostream>
using namespace std;

class Calculate{
   private:
       int total;
       int bday;
       int gday;
       int hday;
       int vday;
       int wday;
       float bperc;
       float gperc;
       float hperc;
       float vperc;
       float wperc;
   public:
       //Default Constructor
       Calculate();
       //Constructor
       Calculate(int,int,int,int,int);
       //Accessor Functions
       float getBP() const;
       float getGP() const;
       float getHP() const;
       float getVP() const;
       float getWP() const;
       int getT() const;
       
       
};

#endif	/* CALCULATE_H */

