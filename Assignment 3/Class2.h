/* 
 * File:   Class2.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 1:54 PM
 * Problem 2 Specification
 */

#ifndef CLASS2_H
#define	CLASS2_H
#include <iostream>
using namespace std;

class Employee{
   private:
       string name;
       int idNumber;
       string department;
       string position;
   public:
       void getinfo();
       void display();
};

#endif	/* CLASS2_H */

