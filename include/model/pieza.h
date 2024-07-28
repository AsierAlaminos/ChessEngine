#ifndef PIEZA_H
#define PIEZA_H

#include "../data.h"
#include <string>

class Pieza {
	
	public:
		Pieza();
		Pieza(std::string nombre, Color color, int x, int y);
		virtual ~Pieza();

		std::string nombre;
		Color color;
		int x;
		int y;

		virtual int *movimientosPosibles();

};

#endif
