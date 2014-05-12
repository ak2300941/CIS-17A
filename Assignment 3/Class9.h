/* 
 * File:   Class9.h
 * Author: Andrew
 * Created on May 9, 2014, 4:30 PM
 */

#ifndef CLASS9_H
#define	CLASS9_H

class Date1{
   private:
       int month;
       int day;
       int year;
   public:
       Date1 operator++();
       Date1 operator--();
       void setMon();
       void setDay();
       void setYear();
       void display();
       void simplify();
};

#endif	/* CLASS9_H */

