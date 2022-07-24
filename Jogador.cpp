/*
 * Jogador.cpp
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */
#include <iostream>
#include <vector>
#include "Jogador.h"
#include "Baralho.h"

Jogador::Jogador()
{
	// TODO Auto-generated constructor stub

}
void Jogador::DealJogador(DeckDeCartas *baralho, int qnt){
	while(qnt != 0){
		mao.Deal(baralho->Draw());
		qnt = qnt - 1;
	}
}
void Jogador::printmao()
{
	mao.printbaralho();


}





