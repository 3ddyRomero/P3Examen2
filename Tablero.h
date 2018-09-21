#ifndef TABLERO_H
#define TABLERO_H

#include "Items.h"
#include "Jugador.h"

#include <iostream>
#include <string>

using namespace std;

class Tablero : Items {
    private:
        Items*** Matrix;
    
    public:
        Tablero();

        Items*** getMatrix();
        void setMatrix(Items*, int, int);

        void printMatrix(); 
        
        ~Tablero();
};
#endif