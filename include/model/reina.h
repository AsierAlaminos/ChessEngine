#ifndef REINA_H
#define REINA_H

#include "pieza.h"

class Reina: public Pieza {
	
	public:
		Reina(Color color, int x, int y);
		~Reina();
		int *movimientosPosibles() override;

};

#endif
