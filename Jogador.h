/*
 * Jogador.h
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_

#include <iostream>
#include <vector>


#include "Baralho.h"
#include "Carta.h"

class Jogador {
public:
	Jogador();
	void DealJogador(DeckDeCartas *baralho, int qnt);
	DeckDeCartas * retornamao(){return &mao;}
	void DealDealer(DeckDeCartas baralho, int qnt);
	void printmao();
private:
	DeckDeCartas mao;
	DeckDeCartas mesa;
	DeckDeCartas descarte;
};
#endif /* JOGADOR_H_ */
