#ifndef PEON_H
#define PEON_H

#include "pieza.h"
#include "../data.h"
#include <string>

class Peon: public Pieza {
	
	public:
		Peon(std::string nombre, Color color, int x, int y);
		~Peon();
		int *movimientosPosibles() override;

};

#endif
