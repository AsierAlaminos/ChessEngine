#include "../../include/chess_engine.h"
#include <string>

Pieza::Pieza(){}

Pieza::Pieza(std::string nombre, Color color, int x, int y): nombre(nombre), color(color), x(x), y(y){};

Pieza::~Pieza(){};

int *Pieza::movimientosPosibles(){
	return NULL;
}
