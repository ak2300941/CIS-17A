/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on February 24, 2014, 12:58 PM
 */

//System Libraries
#include <cstdlib>//srand
#include <ctime>//time
#include <iostream>//cout
using namespace std;

//Global Constants

//Function Prototypes
int *filAray(int);
void prtAray(const int *,int,int);
int *cpy(const int *,int);
void mrkSort(int *,int);
void swap(int &,int &);
bool findVal(int *,int,int);
void destroy(int *);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=100;
    //Fill Array
    int *array=filAray(SIZE);
    //Initialize random seed
    srand(static_cast<unsigned int>(time(0)));
    // Array
    int *brray=cpy(array,SIZE);
    //Sort the copy
    mrkSort(brray,SIZE);
    //Print Array
    prtAray(array,SIZE,10);
    prtAray(brray,SIZE,10);
    //Pick a random number to find
    int val=rand()%90+10;
    cout<<"The value to find in the array = "<<val<<endl;
    if(findVal(array,SIZE,val))cout<<"This value is in the array"<<endl;
    else cout<<"The value is not found"<<endl;
    destroy(array);
    destroy(brray);
    //Exit Stage Right
    return 0;
}

void destroy(int *a){
    delete [] a;
}

bool findVal(int *a,int n,int val){
    for(int i=0;i<n;i++){
        if(*(a+i)==val);return true;
    }
    return false;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void mrkSort(int *a,int n){
    //Find the minimum at this starting position
    for(int i=0;i<n-1;i++){
        //Swap the larger values as you go down the list
        for(int j=i+1;j<n;j++){
            //Check for swap
            if(*(a+i)>*(a+j))swap(*(a+i),*(a+j));
        }
    }
}

int *cpy(const int *a,int n){
    //Copy to array a to b
    if(n<=1)n=2;
    int *b=new int[n];
    for(int i=0;i<n;i++){
        *(b+i)=*(a+i);
    }
    return b;
}

void prtAray(const int *a,int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int *filAray(int n){
    //Check size of array
    if(n<=1)n=2;
    //Allocate dynamic memory
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
    }
    return a;
}