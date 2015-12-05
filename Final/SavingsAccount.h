/* 
 * File:   SavingsAccount.h
 * Author: Andrew Kim
 * Created on June 11, 2014, 7:10 PM
 */

#ifndef SAVINGSACCOUNT_H
#define	SAVINGSACCOUNT_H

class SavingsAccount{
   private:
       float Withdraw(float);
       float Deposit(float);
       float Balance;
       int   FreqWithDraw;
       int   FreqDeposit;
   public:
       SavingsAccount(float);
       void  Transaction(float);
       float Total(float=0,int=0);
       float TotalRecursive(float=0,int=0);
       void  toString();
};


#endif	/* SAVINGSACCOUNT_H */

