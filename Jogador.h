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
	void DealJogador(DeckDeCartas *baralho, int num);
	//void DealDealer(DeckDeCartas baralho, int qnt);
	void MoveMesa();
	void MoveMesaDealer();
	DeckDeCartas * retornamao(){return &mao;}
	void printmao(){mao.printbaralho();}
	void printmesa(){mesa.printbaralho();}
	int sizeofmao(){return mao.tamanho();}
	void somavalor();
private:
	DeckDeCartas mao;
	DeckDeCartas mesa;
	DeckDeCartas descarte;
	int valortotal=0;

};
#endif /* JOGADOR_H_ */
