#ifndef PEON_H
#define PEON_H

#include "pieza.h"
#include "../data.h"

class Peon: public Pieza {
	
	public:
		Peon(Color color, int x, int y);
		~Peon();
		int *movimientosPosibles() override;

};

#endif
