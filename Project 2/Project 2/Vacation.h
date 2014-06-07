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
   public:
       //Default Constructor
       Vacation();
       //Constructor
       Vacation(int);
       //Accessor Functions
       int getNuv() const;
       //Mutator Functions
       void setNumb(int);
       void reset();
};

#endif	/* VACATION_H */

