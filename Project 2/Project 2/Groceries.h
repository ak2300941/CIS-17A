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
       int getNumb() const;
       //Mutator Functions
       void setNumb(int);
};

#endif	/* GROCERIES_H */

