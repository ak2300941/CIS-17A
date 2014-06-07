/* 
 * File:   Month.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 10:19 AM
 * Month Specification
 */

#ifndef MONTH_H
#define	MONTH_H
#include <string>
using namespace std;

class Month{
   private:
       string name;     //Name of the 12 months
       int days;        //Number of days in those months
   public:
       //Default Constructor
       Month();
       //Constructor
       Month(string,int);
       //Accessor Functions
       string getName() const;
       int getDays() const;
       //Mutator Functions
       void setName(string);
       void setDays(int);
};

#endif	/* MONTH_H */

