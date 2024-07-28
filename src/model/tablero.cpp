#include "../../include/chess_engine.h"
#include <cstdlib>

Tablero::Tablero(){

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			casillas[i][j] = nullptr;
		}
	}
}

Tablero::~Tablero(){}

void Tablero::mostrarTablero(){
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::cout << casillas[i][j]->nombre << " ";
		}
		std::cout << "\n";
	}
}

bool Tablero::moverPieza(int origen[2], int destino[2], Color color){
	Pieza *pieza = casillas[origen[0]][origen[1]];

	if (pieza->color != color){
		return (false);
	}

	Pieza *lugarDestino = casillas[destino[0]][destino[1]];
	if (movimientoValido(pieza, lugarDestino)){
		lugarDestino = pieza;
		pieza = nullptr;
		return (true);
	}
	return (false);
}

bool movimientoValido(Pieza *pieza, Pieza *lugarDestino){
	if (pieza != nullptr){
		if (lugarDestino == nullptr){
			return (true);
		}else if (lugarDestino != nullptr && lugarDestino->color != pieza->color){
			return (true);
		}else if (lugarDestino != nullptr && lugarDestino->color == pieza->color){
			return (false);
		}
	}
	return (false);
}

/*bool revisarJaque(Pieza casillas[8][8], Color color){
	return (true);
}

bool revisarJaqueMate(Pieza casillas[8][8], Color color){
	return (true);
}*/
