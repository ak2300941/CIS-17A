/* 
 * File:   Class10.h
 * Author: Andrew
 * Created on May 9, 2014, 5:30 PM
 */

#ifndef CLASS10_H
#define	CLASS10_H

class NumDays{
   private:
       int hour;
       int days;
       void simplify();
   public:
       //Constructor
       NumDays(int h=0,int d=0){
           hour = h;
           days = d;
           simplify(); 
       }
       //Mutator Functions
       void sethour(int);
       void setdays(int);
       //Accessor Functions
       int gethour() const{
           return hour;
       }
       int getdays() const{
           return days;
       }
       //Overloaded operator functions
       NumDays operator+(const NumDays &);
       NumDays operator-(const NumDays &);
       //Increment
       NumDays operator++();
       NumDays operator--();
};

#endif	/* CLASS10_H */

