/* 
 * File:   Test.h
 * Author: Andrew
 *
 * Created on June 7, 2014, 2:41 PM
 */

#ifndef TEST_H
#define	TEST_H
#include <string>
using namespace std;

class Test{
   private:
       string name;
       int want;
   public:
       Test(){
           name="";
           want=0;
       }
       Test(string n,int w){
           set(name,want);
       }
       void set(string n,int w){
           name=n;
           want=w;
       }
       const string getName() const{
           return name;
       }
       const int getWant() const{
           return want;
       }
       //Virtual
       virtual int getStuff() const=0;
};



#endif	/* TEST_H */

