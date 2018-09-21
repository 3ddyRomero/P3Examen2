#include "Tablero.h"

Tablero::Tablero(){
    Matrix = new Items **[11];

    for (int i = 0; i < 11; i++){
        Matrix[i] = new Items *[13];
    }

    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 13; j++){
            Matrix[i][j] = new Items(0, i, j);
        }
    }

    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 13; j++){
            if (i % 2 != 0 && j % 2 != 0){
                Matrix[i][j] = new Items(1 ,i, j);
            }
        }
    }
}