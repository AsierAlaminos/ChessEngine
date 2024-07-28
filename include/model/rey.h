#ifndef REY_H
#define REY_H

#include "pieza.h"

class Rey: public Pieza {
	
	public:
		Rey(std::string nombre, Color color, int x, int y);
		~Rey();
		int *movimientosPosibles() override;

};

#endif
