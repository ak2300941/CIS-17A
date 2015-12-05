/* 
 * File:   Prob3Table.h
 * Author: Andrew Kim
 * Created on June 12, 2014, 3:08 PM
 */

#ifndef PROB3TABLE_H
#define	PROB3TABLE_H
#include <fstream>
#include <iostream>
using namespace std;

template<class T>
class Prob3Table{
   protected:
       int rows;                                 //Number of rows in the table
       int cols;                                 //Number of cols in the table
       T *rowSum;                                //RowSum array
       T *colSum;                                //ColSum array
       T *table;                                 //Table array
       T grandTotal;                             //Grand total
       void calcTable(void);                     //Calculate all the sums
   public:
       Prob3Table(char *,int,int);               //Constructor then Destructor
       ~Prob3Table(){delete [] table;delete [] rowSum;delete [] colSum;};
       const T *getTable(void){return table;};
       const T *getRowSum(void){return rowSum;};
       const T *getColSum(void){return colSum;};
       T getGrandTotal(void){return grandTotal;};
};

template<class T>
Prob3Table<T>::Prob3Table(char *a, int r, int c){
    rows=r;
    cols=c;
    int store=0;
    table=new int[rows*cols];
    ifstream infile;
    infile.open(a,ios::in);
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            infile>>table[i][j];
        }
    }
    infile.close();
    
    
    
    
    //size to fit all the elements
    
}





#endif	/* PROB3TABLE_H */

