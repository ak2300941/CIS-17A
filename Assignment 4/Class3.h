/* 
 * File:   Class3.h
 * Author: Andrew Kim
 * Created on May 13, 2014, 9:44 AM
 * Problem 3 Specification
 */

#ifndef CLASS3_H
#define	CLASS3_H
#include <iostream>
using namespace std;

class Employee2{
   private:
       string name;
       unsigned int number;
       int date;
   public:
       Employee2();
       Employee2(string,unsigned int,int);
       //Accessor Functions
       string getName() const;
       unsigned int getNum() const;
       int getDate() const;
       //Mutator Functions
       void setName(string);
       void setNum(unsigned int);
       void setDate(int);
};

class ProductionWorker2: public Employee2{
   private:
       int shift;
       float rate;
   public:
       ProductionWorker2();
       ProductionWorker2(int,float);
       //Accessor Functions
       int getShift() const;
       float getRate() const;
       //Mutator Functions
       void setShift(int);
       void setRate(float);
};

class TeamLeader: public ProductionWorker2{
   private:
       int monbonus;
       int reqhour;
       int attend;
   public:
       TeamLeader();
       TeamLeader(int,int,int);
       //Accessor Functions
       int getBonus() const;
       int getReqh() const;
       int getAttend() const;
       //Mutator Functions
       void setBonus(int);
       void setReqh(int);
       void setAt(int);
};



#endif	/* CLASS3_H */

