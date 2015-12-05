/* 
 * File:   Prob1Random.h
 * Author: Andrew Kim
 * Created on June 10, 2014, 6:39 PM
 */

#ifndef PROB1RANDOM_H
#define	PROB1RANDOM_H


class Prob1Random{
   private:
       char *set;
       char nset;
       int *freq;
       int numRand;
   public:
       Prob1Random(const char,const char *);
       ~Prob1Random(void);
       char randFromSet(void);
       int *getFreq(void) const;
       char *getSet(void) const;
       int getNumRand(void) const;
};



#endif	/* PROB1RANDOM_H */

