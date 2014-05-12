/* 
 * File:   Class3.h
 * Author: Andrew
 * Created on May 9, 2014, 11:57 AM
 */

#ifndef CLASS3_H
#define	CLASS3_H
#include <iostream>
using namespace std;

class Car{
   private:
       int yearModel;
       string make;
       int speed;
   public:
       Car(int,string,int);
       //Accessor Functions
       int getYear() const{
           return yearModel;
       }
       string getmake() const{
           return make;
       }
       int getspeed() const{
           return speed;
       }
       //Accelerate and Break
       int acc();
       int br();
};


#endif	/* CLASS3_H */

