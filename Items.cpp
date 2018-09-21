#include "Items.h"
#include <iostream>
#include <string>

using namespace std;

Items::Items(){

}

Items::Items(int pObject, int px, int py){
    Object = pObject;
    x = px;
    y = py;
}

int Items::getObject(){
    return Object;
}

void Items::setObject(int pObject){
    Object = pObject;
}

int Items::getX(){
    return x;
}

void Items::setX(int px){
    x = px;
}

int Items::getY(){
    return y;
}

void Items::setY(int py){
    y = py;
}

string Items::toString(){
    if (Object == 1)
        return "&";
    else
        return " ";
}

Items::~Items(){

}
