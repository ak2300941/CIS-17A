/* 
 * File:   Class4.h
 * Author: Andrew Kim
 * Created on May 14, 2014, 9:51 AM
 * Problem 4 Specification
 */

#ifndef CLASS4_H
#define	CLASS4_H
#include <iostream>
using namespace std;

class GradedActivity{
   protected:
       int score;
   public:
       //Default Constructor
       GradedActivity();
       //Constructor
       GradedActivity(int);
       //Accessor Functions
       int getScore() const;
       //Mutator Functions
       void setScore(int);
};

class Essay: public GradedActivity{
   private:
       int grammar;
       int spell;
       int length;
       int content;
   public:
       //Default Constructor
       Essay();
       //Constructor
       Essay(int,int,int,int);
       //Accessor Functions
       int getGran() const;
       int getSpell() const;
       int getLeng() const;
       int getCont() const;
       //Mutator Functions
       void setGran(int);
       void setSpell(int);
       void setLeng(int);
       void setCont(int);
};



#endif	/* CLASS4_H */

