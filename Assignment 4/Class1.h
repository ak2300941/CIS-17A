/* 
 * File:   Class1.h
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:58 AM
 * Problem 1 Specification
 */

#ifndef CLASS1_H
#define	CLASS1_H
#include <iostream>
using namespace std;


class Employee{
   private:
       string name;
       unsigned int number;
       int date;
   public:
       Employee();
       Employee(string,unsigned int,int);
       //Accessor Functions
       string getName() const;
       unsigned int getNum() const;
       int getDate() const;
       //Mutator Functions
       void setName(string);
       void setNum(unsigned int);
       void setDate(int);
};

class ProductionWorker: public Employee{
   private:
       int shift;
       float rate;
   public:
       ProductionWorker();
       ProductionWorker(int,float);
       //Accessor Functions
       int getShift() const;
       float getRate() const;
       //Mutator Functions
       void setShift(int);
       void setRate(float);
};

#endif	/* CLASS1_H */