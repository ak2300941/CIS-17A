/* 
 * File:   Calculate.cpp
 * Author: Andrew Kim
 * Created on June 6, 2014, 6:36 PM
 * Calculate Implementation
 */

#include "Calculate.h"

Calculate::Calculate(){
    total=0;
    bday=0;
    gday=0;
    hday=0;
    vday=0;
    wday=0;
    bperc=0;
    gperc=0;
    hperc=0;
    vperc=0;
    wperc=0;
}

Calculate::Calculate(int b, int g, int h, int v, int w){
    total=b+g+h+v+w;
    bday=b;
    gday=g;
    hday=h;
    vday=v;
    wday=w;
    //Get percentage
    bperc=(float)b/(float)total;
    gperc=(float)g/(float)total;
    hperc=(float)h/(float)total;
    vperc=(float)v/(float)total;
    wperc=(float)w/(float)total;
}

int Calculate::getT() const{
    return total;
}

float Calculate::getBP() const{
    return bperc;
}

float Calculate::getGP() const{
    return gperc;
}

float Calculate::getHP() const{
    return hperc;
}

float Calculate::getVP() const{
    return vperc;
}

float Calculate::getWP() const{
    return wperc;
}

