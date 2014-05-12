/* 
 * File:   Class8.h
 * Author: Andrew
 * Created on May 9, 2014, 4:12 PM
 */

#ifndef CLASS8_H
#define	CLASS8_H
#include <iostream>
using namespace std;

class DayOfYear2{
   private:
       int days;
       int leftov;
       string month;
   public:
       DayOfYear2(int);
       void convert();
       void print();
       void setnew(int);
};

#endif	/* CLASS8_H */

