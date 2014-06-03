/* 
 * File:   Work.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 7:14 PM
 * Work Specification
 */

#ifndef WORK_H
#define	WORK_H

class Work{
    private:
       int numb;
   public:
       //Default Constructor
       Work();
       //Constructor
       Work(int);
       //Accessor Functions
       int getNumb() const;
       //Mutator Functions
       void setNumb(int);
};

#endif	/* WORK_H */

