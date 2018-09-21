#include "Tablero.h"
#include "Jugador.h"

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

    //Imprimir Obstaculos
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 13; j++){
            if (i % 2 != 0 && j % 2 != 0){
                Matrix[i][j] = new Items(1 ,i, j);
            }
        }
    }
}

void Tablero::setMatrix(Items* Obj, int i, int j){
    Matrix[i][j] = Obj;
}

Items*** Tablero::getMatrix(){
    return Matrix;
}

void Tablero::printMatrix(){
    
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 13; j++){
            cout<<"["<<Matrix[i][j]->toString()<<"]";
            /*if (i % 2 != 0 && j % 2 != 0){
                cout<<Matrix[i][j]->toString();
            }*/
        }cout<<endl;
    }

    //Imprimir Obstaculos
    /*for (int i = 0; i < 11; i++){
        for (int j = 0; j < 13; j++){
            if (i % 2 != 0 && j % 2 != 0){
                cout<<Matrix[i][j]->toString();
            }
        }cout<<endl;
    }*/
}