#include "../../include/chess_engine.h"
#include <string>

Alfil::Alfil(std::string nombre, Color color, int x, int y): Pieza(nombre, color, x, y) {}

Alfil::~Alfil(){}

int *Alfil::movimientosPosibles() {
	return (0);
}
