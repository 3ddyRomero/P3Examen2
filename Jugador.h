#ifndef JUGADOR_H
#define JUGADOR_H

#include "Items.h"

#include <string>
#include <iostream>

using namespace std;

class Jugador : Items{
    private:
        string Nombre, Figura;
        int Tipo, Estado;
    public:
        Jugador();
        Jugador(string,int,int,int,int,int);

        string getNombre();
        void setNombre(string);

        int getTipo();
        void setTipo(int);

        int getEstado();
        void setEstado(int);

    string toString();

    ~Jugador();

};
#endif