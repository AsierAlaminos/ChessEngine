#ifndef PARTIDA_H
# define PARTIDA_H

#include "jugador.h"
# include "tablero.h"
# include "../data.h"

class Partida {

	public:
		Partida();
		Tablero tablero;
		Jugador blanco;
		Jugador negro;
		Color turno;
		void iniciarPartida();

	private:
		void cambiarTurno();

};

#endif
