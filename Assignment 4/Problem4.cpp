/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on May 12, 2014, 10:46 AM
 * Problem 4 Implementation
 */

//System Libraries
#include "Class4.h"
#include <iostream>
using namespace std;

GradedActivity::GradedActivity(){
}

GradedActivity::GradedActivity(int s){
    score=s;
}

int GradedActivity::getScore() const{
    return score;
}

void GradedActivity::setScore(int s){
    score=s;
}

Essay::Essay(){
}

Essay::Essay(int g, int s, int l, int c){
    grammar=g;
    spell=s;
    length=l;
    content=c;
}
int Essay::getGran() const{
    return grammar;
}

int Essay::getSpell() const{
    return spell;
}

int Essay::getLeng() const{
    return length;
}

int Essay::getCont() const{
    return content;
}

void Essay::setGran(int g){
    grammar=g;
}

void Essay::setSpell(int s){
    spell=s;
}

void Essay::setLeng(int l){
    length=l;
}

void Essay::setCont(int c){
    content=c;
}