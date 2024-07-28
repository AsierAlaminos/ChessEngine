#include "../../include/chess_engine.h"

Torre::Torre(std::string nombre, Color color, int x, int y): Pieza(nombre, color, x, y) {}

Torre::~Torre(){}

int *Torre::movimientosPosibles() {
	return (0);
}
