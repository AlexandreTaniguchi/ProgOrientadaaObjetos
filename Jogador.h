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
	void MoveMesa();
	void MoveMesaDealer();
	void MoveMaoDealer();
	void MoveMaoDescarte();
	void MoveMesaDescarte();
	DeckDeCartas * retornamao(){return &mao;}
	DeckDeCartas * retornadescarte(){return &descarte;}
	void printmao(){mao.printbaralho();}
	void printmesa(){mesa.printbaralho();}
	void printdescarte(){descarte.printbaralho();}
	void printvalortotal(){ cout << valortotal << endl;}
	int sizeofmao(){return mao.tamanho();}
	int sizeofmesa(){return mesa.tamanho();}
	int somavalor();
	int somavalormesa();
private:
	DeckDeCartas mao;
	DeckDeCartas mesa;
	DeckDeCartas descarte;
	int valortotal=0;

};
#endif /* JOGADOR_H_ */
