#include "Bombas.h"

Bombas::Bombas(){
    
}

Bombas::Bombas(int pconta, int pObject, int px, int py) : Items(pObject, px, py){
    conta = pconta;
}

int Bombas::getContador(){
    return conta;
}

void Bombas::setContador(int pconta){
    conta = pconta;
}

string Bombas::toString(){
    return "B";
}

Bombas::~Bombas(){

}