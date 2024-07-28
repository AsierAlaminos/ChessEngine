#include "../../include/chess_engine.h"

Partida::Partida(){}

Partida::Partida(Tablero tablero, Jugador blanco, Jugador negro):blanco(blanco), negro(negro), tablero(tablero) {
	turno = BLANCO;
}

Partida::~Partida(){}

void Partida::iniciarPartida(){
	
}

Color cambiarTurno(Color turno){
	if (turno == BLANCO){
		return (NEGRO);
	}else {
		return (BLANCO);
	}
}
