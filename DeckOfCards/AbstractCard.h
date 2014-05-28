/* 
 * File:   AbstractCard.h
 * Author: Dr. Mark E. Lehr
 * Created on May 21, 2014, 12:59 PM
 * Specification for the Abstract Card class
 */

#ifndef ABSTRACTCARD_H
#define	ABSTRACTCARD_H

class AbstractCard{
       virtual char suit()=0;
       virtual char name()=0;
       virtual char value()=0;
};

#endif	/* ABSTRACTCARD_H */

