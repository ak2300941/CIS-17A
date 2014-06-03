/* 
 * File:   Birthday.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 5:21 PM
 * Birthday Specification
 */

#ifndef BIRTHDAY_H
#define	BIRTHDAY_H

class Birthday{
   private:
       int numb;
   public:
       //Default Constructor
       Birthday();
       //Constructor
       Birthday(int);
       //Accessor Functions
       int getNumb() const;
       //Mutator Functions
       void setNumb(int);
};


#endif	/* BIRTHDAY_H */

