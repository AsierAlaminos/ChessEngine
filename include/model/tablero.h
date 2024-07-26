#ifndef TABLERO_H
# define TABLERO_H

#include <string>
#include "pieza.h"
#include "../data.h"

class Tablero {
	
	public:
		Tablero();
		int casillas[8][8];
		void mostrarTablero();
		bool moverPieza(int origen[2], int destino[2]);
		
	private:
		bool movimientoValido(int origen[2], int destino[2]);
		bool revisarJaque(Color color);
		bool revisarJaqueMate(Color color);

};

#endif
