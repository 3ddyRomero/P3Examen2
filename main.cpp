#include "Jugador.h"
#include "Items.h"
#include "Bombas.h"
#include "Tablero.h"

#include <iostream>
#include <string>

using namespace std;

//Jugador *jugador;

int main(){
    string nombre;
     
    Tablero* tab =  new Tablero();


    cout<<"Ingrese El Nombre del Jugador: ";
    cin>>nombre;

    Jugador *jugador = new Jugador(nombre,1,1,1,0,0);
    Jugador *jugadorbota = new Jugador("Bot1",1,0,1,10,0);
    Jugador *jugadorbotb = new Jugador("Bot2",1,1,1,10,12);
    Jugador *jugadorbotc = new Jugador("Bot3",1,1,1,0,12);

    //tab->getMatrix()[0][0] = jugador;
    /*tab->setMatrix(jugador, 0, 0);
    tab->setMatrix(jugadorbota, 0, 12);
    tab->setMatrix(jugadorbotb, 10, 12);
    tab->setMatrix(jugadorbotc, 5, 6);*/

    tab->printMatrix();






    return 0;
}