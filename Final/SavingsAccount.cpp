/* 
 * File:   SavingsAccount.cpp
 * Author: Andrew Kim
 * Created on June 11, 2014, 7:10 PM
 */

#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(float a){
    if(a>0)Balance=a;
    else{Balance=0;}
    FreqWithDraw=0;
    FreqDeposit=0;
}

void SavingsAccount::Transaction(float a){
    //Transaction >0 then make deposit
    if(a>0){
        Deposit(a);
        FreqDeposit++;
    }
    //Transaction not greater than 0
    else{
        Withdraw(a);
        FreqWithDraw++;
    }
}

float SavingsAccount::Withdraw(float a){
    //If Balance is negative
    if(Balance<0){
        //Lehrs Display for cout
        cout<<"WithDraw not Allowed"<<endl;
    }
    else if(Balance>0){
        //Withdraw
        Balance=Balance-a;
    }
}

float SavingsAccount::Deposit(float a){
    Balance=Balance+a;
}

void SavingsAccount::toString(){
    //Display
    cout<<"Balance="<<Balance<<endl;
    cout<<"WithDraws="<<FreqWithDraw<<endl;
    cout<<"Deposits="<<FreqDeposit<<endl;
}

float SavingsAccount::Total(float savint, int time){
    //Temp is 1 because anything times 0 is 0
    float total,temp=1;
    //Equation in for loop form
    for(int i=0;i<time;i++){
        temp=temp*(savint+1);
    }
    total=Balance*temp;
    return total;
}

float SavingsAccount::TotalRecursive(float savint,int time){
    //When time is 0, it successfully looped all 7 times
    if(time==0){
        return Balance;
    }
    //If Time is not 0 keep calling itself
    else{
        
        //Subtract 1 from time to conclude it did once;
        return(1+savint)*TotalRecursive(savint,time-1);
    }
}