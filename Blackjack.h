/*
 * Blackjack.h
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */

#ifndef BLACKJACK_H_
#define BLACKJACK_H_

#include "Baralho.h"
#include "Jogador.h"



class Blackjack {
public:
	Blackjack();
	void menu(Jogador * Player,Jogador * Dealer,DeckDeCartas * baralho);
	void limpa();
};




#endif /* BLACKJACK_H_ */
