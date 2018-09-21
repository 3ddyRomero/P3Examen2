#include "Jugador.h"
#include "Items.h"
#include "Bombas.h"
#include "Tablero.h"
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#include <iostream>
#include <string>

using namespace std;

//Jugador *jugador;

int main(){
    string nombre;
    char key = ' '; 
     
    Tablero* tab =  new Tablero();


    cout<<"Ingrese El Nombre del Jugador: ";
    cin>>nombre;

    Jugador *jugador = new Jugador(nombre,1,1,1,0,0);
    Jugador *jugadorbota = new Jugador("Bot1",2,1,1,10,0);
    Jugador *jugadorbotb = new Jugador("Bot2",2,1,1,10,12);
    Jugador *jugadorbotc = new Jugador("Bot3",2,1,1,5,6);
    Jugador *jugadorbotd = new Jugador("Bot4",2,1,1,0,12);

   
    tab->setMatrix((Items*)jugador, 0, 0);
    tab->setMatrix((Items*)jugadorbota, 10, 0);
    tab->setMatrix((Items*)jugadorbotb, 10, 12);
    tab->setMatrix((Items*)jugadorbotc, 5, 6);
    tab->setMatrix((Items*)jugadorbotd, 0, 12);

    tab->printMatrix();


    cout<<"Para Mover Su Jugador."<<endl
        <<"Utilice Las teclas" 
        <<"W (Arriba)"<<endl
        <<"A (Izquierda)"<<endl
        <<"S (Abajo)"<<endl
        <<"D (Derecha)"<<endl;
        cout<<"¡¡¡Los Movimientos solo pueden hacerse de uno en uno!!!"<<endl;
        cout<<"****Buena Suerte****"<<endl;

    key = getch();

    bool turno = false;
    int opcion;
    
    while(turno = false){
        






        cout<<"¿Seguir Jugando?"<<endl<<"Pulse:"<<endl
            <<"0--> NO"<<endl
            <<"1--> SI"<<endl;
            cin>>opcion;
            if(opcion == 0){
            turno = true;
            }
    }

    return 0;
}