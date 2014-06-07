/* 
 * File:   Event.h
 * Author: Andrew Kim
 * Created on June 2, 2014, 12:10 PM
 * Event Specification
 */

#ifndef EVENT_H
#define	EVENT_H

#include "Birthday.h"
#include "Groceries.h"
#include "Holidays.h"
#include "Vacation.h"
#include "Work.h"
using namespace std;

class Event: public Birthday, public Groceries, public Holidays, public Vacation, public Work{
   public:
       //Default Constructor
       Event();
       Event(int b,int g,int h,int v,int w);
       void addUp() const;
};

#endif	/* EVENT_H */

