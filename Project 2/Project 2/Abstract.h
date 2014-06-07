/* 
 * File:   Abstract.h
 * Author: Andrew Kim
 * Created on June 7, 2014, 2:20 PM
 * Abstract Specification
 */

#ifndef ABSTRACT_H
#define	ABSTRACT_H
#include "Test.h"


#endif	/* ABSTRACT_H */

class Abstract: public Test{
   private:
       int all;
   public:
       Abstract():Test(){
           all=0;
       }
       Abstract(string n,int w):
       Test(n,w){
           all=0;
       }
       void seta(int a){
           all=a;
       }
       virtual int getStuff() const;
};

