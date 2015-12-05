/* 
 * File:   Prob2Sort.h
 * Author: Andrew Kim
 * Created on June 12, 2014, 11:02 AM
 */

#ifndef PROB2SORT_H
#define	PROB2SORT_H

template<class T>
class Prob2Sort{
   private:
       int *index;\
   public:
       Prob2Sort(){index=NULL;}; 
       ~Prob2Sort(){delete []index;};
       T * sortArray(const T*,int,bool);
       T * sortArray(T*,int,int,int,bool);
}; 

template<class T>
T *Prob2Sort<T>::sortArray(const T* array, int row, bool ascend){
    /*
    for(int i=0;i<row;i++){
        index[i]=array[choice+(17*i)];
    }
    int temp;
    for(int i=0;i<row;i++){
        if(index[i]<index[i+1]){
            //Swap
            ascend=true;
            temp=index[i];
            index[i]=index[i+1];
            index[i+1]=temp;
        }
    }
    */
}

template<class T>
T *Prob2Sort<T>::sortArray(T *array, int row, int cols, int choice, bool ascend){
    int temp;
    choice=choice-1;
    //Use index since its used in De-constructor
    index=new int[row];
    //Copying array into index for the choice of cols. typed in
    //10 Rows
    for(int i=0;i<row;i++){
        index[i]=array[choice+(17*i)];
    }
    //Descending Order (lehr output is descending order)
    //Sort Cols and move the entire rows accordingly
    do{
        //This should be in the other sort Array (Dont know how to implement)
        ascend=false;
        for(int i=0;i<row;i++){
            //Row # < Row #+1
            if(index[i]<index[i+1]){
                //Swap
                ascend=true;
                temp=index[i];
                index[i]=index[i+1];
                index[i+1]=temp;
                ///////////////////////////////////////
                sortArray(array,row,ascend);
                for(int j=0;j<cols-1;j++){
                    //In Array given, swap the row
                    temp=array[j+(17*i)];
                    array[j+(17*i)]=array[j+(17*(i+1))];
                    array[j+(17*(i+1))]=temp;
                }
            }
        }
    }while(ascend==true);
    return array;
}



#endif	/* PROB2SORT_H */

