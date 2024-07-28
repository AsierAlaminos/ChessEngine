#ifndef TABLERO_H
# define TABLERO_H

#include <string>
#include "pieza.h"
#include "../data.h"

class Tablero {
	
	public:
		Tablero();
		~Tablero();
		Pieza* casillas[8][8];
		void mostrarTablero();
		bool moverPieza(int origen[2], int destino[2], Color color);
		
	private:
		struct Private;
		
};

bool movimientoValido(Pieza *pieza, Pieza *lugarDestino);

#endif
