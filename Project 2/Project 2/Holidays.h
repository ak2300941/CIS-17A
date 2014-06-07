/* 
 * File:   Holidays.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:02 PM
 * Holidays Specification
 */

#ifndef HOLIDAYS_H
#define	HOLIDAYS_H

class Holidays{
    private:
       int numb;
   public:
       //Default Constructor
       Holidays();
       //Constructor
       Holidays(int);
       //Accessor Functions
       int getNuh() const;
       //Mutator Functions
       void setNumb(int);
       void reset();
};

#endif	/* HOLIDAYS_H */

