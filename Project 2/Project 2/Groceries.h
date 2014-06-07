/* 
 * File:   Groceries.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 6:52 PM
 * Groceries Specification
 */

#ifndef GROCERIES_H
#define	GROCERIES_H

class Groceries{
    private:
       int numb;
   public:
       //Default Constructor
       Groceries();
       //Constructor
       Groceries(int);
       //Accessor Functions
       int getNug() const;
       //Mutator Functions
       void setNumb(int);
       void reset();
};

#endif	/* GROCERIES_H */

