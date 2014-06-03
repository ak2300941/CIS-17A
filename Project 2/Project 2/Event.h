/* 
 * File:   Event.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 12:10 PM
 * Event Specification
 */

#ifndef EVENT_H
#define	EVENT_H
#include <string>
using namespace std;

class Event{
   private:
       string eve;
   public:
       //Default Constructor
       Event();
       //Constructor
       Event(int);
       //Accessor Functions
       string getEve() const;
       //Mutator Functions
       void setEve(string);
};



#endif	/* EVENT_H */

