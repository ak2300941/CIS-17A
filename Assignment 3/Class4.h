/* 
 * File:   Class4.h
 * Author: Andrew
 * Created on May 9, 2014, 12:39 PM
 */

#ifndef CLASS4_H
#define	CLASS4_H
#include <iostream>
using namespace std;

class Data{
   private:
       string name;
       string address;
       int age;
       long long phone;
   public:
       void getinfo();
       string getname(){
           return name;
       }
       string getaddr(){
           return address;
       }
       int getage(){
           return age;
       }
       long long getphone(){
           return phone;
       }
};


#endif	/* CLASS4_H */

