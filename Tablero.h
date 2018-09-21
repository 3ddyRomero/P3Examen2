#ifndef TABLERO_H
#define TABLERO_H

#include "Items.h"

#include <iostream>
#include <string>

using namespace std;

class Tablero : Items {
    private:
        Items*** Matrix;
    
    public:
        Tablero();
    
        void setMatrix(Items*, int, int);
        Items*** getMatrix();
        
        ~Tablero();


};
#endif