#include "../../include/chess_engine.h"

Rey::Rey(std::string nombre, Color color, int x, int y): Pieza(nombre, color, x, y) {}

Rey::~Rey(){}

int *Rey::movimientosPosibles() {
	return (0);
}
