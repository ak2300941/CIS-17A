/* 
 * File:   Class5.h
 * Author: Andrew
 * Created on May 9, 2014, 12:56 PM
 */

#ifndef CLASS5_H
#define	CLASS5_H
#include <iostream>
using namespace std;

class RetailItem{
   private:
       string descrption;
       int unitsOnHand;
       float price;
   public:
       void getinfo();
       string getdesc(){
           return descrption;
       }
       int getunits(){
           return unitsOnHand;
       }
       int getprice(){
           return price;
       }
};


#endif	/* CLASS5_H */

