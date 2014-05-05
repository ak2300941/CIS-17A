/* 
 * File:   Midterm.h
 * Author: Andrew
 *
 * Created on April 23, 2014, 6:39 PM
 */

#ifndef MIDTERM_H
#define	MIDTERM_H



//Problem 1
struct Custom{
    int *person;
    int size;
    int account;
    int balance;
    int checks;
    int deposits;
    int totbal1;
    int totbal2;
};

//Problem 2
struct Employ{
    int *worker;
    int size;
    int hours;
    int rate;
    int gross;
};

//Problem 3
struct statsResult{
    float avg;
    float median;
    int *modes;
    int nModes;
    int maxFreq;
};

#endif	/* MIDTERM_H */

