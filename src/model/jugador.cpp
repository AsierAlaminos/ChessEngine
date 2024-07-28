#include "../../include/chess_engine.h"
#include <string>

Jugador::Jugador(){}

Jugador::Jugador(std::string nombre, Color color): nombre(nombre), color(color) {}

Jugador::~Jugador(){}

bool Jugador::realizarMovimiento(Tablero& tablero, int origen[2], int destino[2], Color color){
	return (tablero.moverPieza(origen, destino, color));
}

