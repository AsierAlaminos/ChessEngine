#ifndef ALFIL_H
#define ALFIL_H

#include "pieza.h"

class Alfil: public Pieza {
	
	public:
		Alfil(std::string nombre, Color color, int x, int y);
		~Alfil();
		int *movimientosPosibles() override;

};

#endif
