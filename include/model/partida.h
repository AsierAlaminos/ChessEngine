#ifndef PARTIDA_H
# define PARTIDA_H

#include "jugador.h"
# include "tablero.h"
# include "../data.h"

class Partida {

	public:
		Partida();
		Partida(Tablero tablero, Jugador blanco, Jugador negro);
		~Partida();
		void iniciarPartida();

	private:
		Jugador blanco;
		Jugador negro;
		Tablero tablero;
		Color turno;

};

Color cambiarTurno(Color turno);

#endif
