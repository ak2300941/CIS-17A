/* 
 * File:   Array1D.h
 * Author: Andrew Kim
 * Created on April 9, 2014, 1:26 PM
 */

#ifndef ARRAY1D_H
#define	ARRAY1D_H

class Array1D{
public:
    Array1D(int);
    ~Array1D(){
        delete []data;
    }
    void prntArray(int);
private:
    int *data;
    int size;
    void fillArray();//Utility Function
    void setSize(int);//Another Utility Function
};


#endif	/* ARRAY1D_H */