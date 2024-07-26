#ifndef PIEZA_H
#define PIEZA_H

#include "../data.h"

class Pieza {
	
	public:
		Color color;
		int x;
		int y;

		Pieza(Color color, int x, int y);
		~Pieza();

		virtual int *movimientosPosibles();

};

#endif
