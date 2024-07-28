#include "../../include/chess_engine.h"

Caballo::Caballo(std::string nombre, Color color, int x, int y): Pieza(nombre, color, x, y) {}

Caballo::~Caballo(){}

int *Caballo::movimientosPosibles() {
	return (0);
}
