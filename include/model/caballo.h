#ifndef CABALLO_H
#define CABALLO_H

#include "pieza.h"

class Caballo: public Pieza {
	
	public:
		Caballo(Color color, int x, int y);
		~Caballo();
		int *movimientosPosibles() override;

};

#endif
