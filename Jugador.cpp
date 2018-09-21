#include "Jugador.h"
#include <iostream>
#include <string>

using namespace std;

Jugador::Jugador(){

}

Jugador::Jugador(string pNombre,int pTipo, int pEstado,int pObjeto , int px, int py):Items(pObjeto,px,py){
    Nombre = pNombre;
    Estado = pEstado;
    Tipo = pTipo;
}


string Jugador::getNombre(){
    return Nombre;
}

void Jugador::setNombre(string pNombre){
    Nombre = pNombre;
}

int Jugador::getEstado(){
    return Estado;
}

void Jugador::setEstado(int pEstado)
{

    Estado = pEstado;
}

int Jugador::getTipo(){
    return Tipo;
}

void Jugador::setTipo(int pTipo){

    Tipo = pTipo;
}

string Jugador::toString(){
    if(Tipo==1){
        Figura="Y";
    }else{
        Figura = "+";
    }
    return Figura;
}

Jugador::~Jugador(){

}

