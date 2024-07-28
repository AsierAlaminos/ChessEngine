#include <iostream>
#include "../include/chess_engine.h"

int main(void)
{
	std::cout << "Empieza el proyecto\n";

	Tablero tablero;

	Jugador blanco("Blanco", BLANCO);
	Jugador negro("Negro", NEGRO);

	Partida partida(tablero, blanco, negro);

	partida.iniciarPartida();

	return (0);
}
