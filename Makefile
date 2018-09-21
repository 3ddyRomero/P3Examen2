exe:	main.o Items.o Jugador.o Bombas.o Tablero.o
	g++ main.o Items.o Jugador.o Bombas.o Tablero.o -o exe
	rm *.o
main.o:	main.cpp Items.h Jugador.h Bombas.h Tablero.h 
	g++ -c main.cpp
Items.o:	Items.cpp Items.h
	g++ -c Items.cpp
Jugador.o:	Items.h Jugador.cpp Jugador.h
	g++ -c Jugador.cpp
Bombas.o:	Items.h Bombas.cpp Bombas.h
	g++ -c Bombas.cpp
Tablero.o:	Items.h Tablero.cpp Tablero.h
	g++ -c Tablero.cpp