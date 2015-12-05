/* 
 * File:   Prob3TableInherited.h
 * Author: Andrew Kim
 * Created on June 12, 2014, 6:08 PM
 */

#ifndef PROB3TABLEINHERITED_H
#define	PROB3TABLEINHERITED_H
#include "Prob3Table.h"



template<class T>
class Prob3TableInherited:public Prob3Table<T>{
   protected:
       T *augTable;                                  //Augmented Table with sums
   public:
       Prob3TableInherited(char *,int,int);          //Constructor
       ~Prob3TableInherited(){delete [] augTable;};  //Destructor
       const T *getAugTable(void){return augTable;}; 
};

template<class T>
//Inherited
Prob3TableInherited<T>::Prob3TableInherited(char *a, int r, int c):Prob3Table<T>(a,r,c){
    
}


#endif	/* PROB3TABLEINHERITED_H */

