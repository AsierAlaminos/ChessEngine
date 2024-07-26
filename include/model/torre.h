#ifndef TORRE_H
#define TORRE_H

#include "pieza.h"

class Torre: public Pieza {
	
	public:
		Torre(Color color, int x, int y);
		~Torre();
		int *movimientosPosibles() override;

};

#endif
