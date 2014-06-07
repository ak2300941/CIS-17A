/* 
 * File:   Vacation.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:10 PM
 * Vacation Specification
 */

#ifndef VACATION_H
#define	VACATION_H

class Vacation{
    private:
       int numb;
       int add;
   public:
       //Default Constructor
       Vacation();
       //Constructor
       Vacation(int);
       //Accessor Functions
       int getNuv() const;
       int getAdd() const;
       //Mutator Functions
       Vacation operator++();
       void setNumb(int);
       void setNuma(int);
       void reset();
};

#endif	/* VACATION_H */

