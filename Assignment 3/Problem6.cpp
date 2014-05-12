/* 
 * File:   Class.h
 * Author: Andrew Kim
 * Created on May 7, 2014, 10:30 AM
 * Problem 6 Implementation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Class6.h"
using namespace std;

void Numbers::trans(){
    cout<<"Enter Number to translate ";
    cin>>number;
    //Translation
    string lessThan20[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred="hundred";
    string thousand="thousand";
    int a[4];//Test 4021
    for(int i=3;i>=0;i--){
        a[i]=number%10;
        number=number/10;
    }
    cout<<lessThan20[a[0]]<<" "<<thousand;//four thousand
    if(a[1]==0&&a[2]>0)cout<<" and ";//If No hundreds
    if(a[1]>0)cout<<" "<<lessThan20[a[1]]<<" "<<hundred;//If has hundred
    if(a[1]>0)cout<<" and ";
    if(a[2]==1)cout<<lessThan20[a[3]];
    if(a[1]==0&&a[2]==0)cout<<" and "<<lessThan20[a[3]];
    if(a[1]==0&&a[2]==1)cout<<lessThan20[a[3]];
    cout<<endl;
}