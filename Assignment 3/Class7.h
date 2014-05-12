/* 
 * File:   Class7.h
 * Author: Andrew
 * Created on May 9, 2014, 3:25 PM
 */

#ifndef CLASS7_H
#define	CLASS7_H
#include <iostream>
using namespace std;

class DayOfYear{
   private:
       int days;
       int leftov;
       string month;
   public:
       DayOfYear(int);
       void convert();
       void print();
       
};

#endif	/* CLASS7_H */

