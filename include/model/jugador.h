#ifndef JUGADOR_H
#define JUGADOR_H

#include "tablero.h"
#include "../data.h"
#include <string>

class Jugador {

	public:
		Jugador(std::string nombre, Color color);
		std::string nombre;
		Color color;
		bool realizarMovimiento(Tablero tablero, int origen[2], int destino[2]);

};

#endif
