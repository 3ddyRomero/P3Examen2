#ifndef BOMBAS_H
#define BOMBAS_H

#include "Items.h"

#include <iostream>
#include <string>

using namespace std;

class Bombas : Items{
    private:
        int conta;
    public:
        Bombas();
        Bombas(int,int,int,int);

        int getContador();
        void setContador(int);

	string toString();

    ~Bombas();


};
#endif