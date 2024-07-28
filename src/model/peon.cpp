#include "../../include/chess_engine.h"
#include <string>

Peon::Peon(std::string nombre, Color color, int x, int y): Pieza(nombre, color, x, y) {}

Peon::~Peon(){}

int *Peon::movimientosPosibles() {
	return (0);
}
