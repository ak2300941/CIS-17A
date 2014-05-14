/* 
 * File:   Class5.h
 * Author: Andrew Kim
 * Created on May 14, 2014, 10:21 AM
 * Problem 5 Specification
 */

#ifndef CLASS5_H
#define	CLASS5_H
#include <string>
using namespace std;

class Time{
   protected:
       int hour;
       int min;
       int sec;
   public:
       Time();
       Time(int,int,int);
       int getHour() const;
       int getMin() const;
       int getSec() const;
};

class MilTime{
   protected:
       int milHours;
       int milSeconds;
   public:
       MilTime();
       MilTime(int,int,int);
       int getHour() const;
       //int getStandHr() const;
       void setTime() const;
};

class Date{
   protected:
       int day;
       int month;
       int year;
   public:
       Date();
       Date(int,int,int);
       int getDay() const;
       int getMonth() const;
       int getYear() const;
};

class DateTime: public Date, public Time{
   public:
       DateTime();
       DateTime(int,int,int,int,int,int);
       void showDateTime() const;
};



#endif	/* CLASS5_H */

