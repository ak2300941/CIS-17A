/* 
 * File:   Class2.h
 * Author: Andrew Kim
 * Created on May 12, 2014, 1:03 PM
 * Problem 2 Specification
 */

#ifndef CLASS2_H
#define	CLASS2_H
#include <iostream>
using namespace std;

class Employee1{
   private:
       string name;
       unsigned int number;
       int date;
   public:
       Employee1();
       Employee1(string,unsigned int,int);
       //Accessor Functions
       string getName() const;
       unsigned int getNum() const;
       int getDate() const;
       //Mutator Functions
       void setName(string);
       void setNum(unsigned int);
       void setDate(int);
};

class ShiftSupervisor: public Employee1{
   private:
       int asalary;
       int abonus;
   public:
       ShiftSupervisor();
       ShiftSupervisor(int,int);
       //Accessor Functions
       int getSal() const;
       int getBon() const;
       //Mutator Functions
       void setSal(int);
       void setBon(int);
};

#endif	/* CLASS2_H */

