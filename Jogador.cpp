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
#include "Carta.h"

Jogador::Jogador()
{
	// TODO Auto-generated constructor stub

}
void Jogador::DealJogador(DeckDeCartas *baralho, int num){
	while(num != 0){
		mao.Deal(baralho->Draw());
		num = num - 1;
	}
}
void Jogador::MoveMesa(){
	while(sizeofmao() != 0){
		Carta * tmp = mao.colocar(sizeofmao()-1);
		// Remove a carta solicitada da mao e adiciona no campo
			mesa.Deal(tmp);
		}
}
void Jogador::MoveMesaDealer()
{
	while(sizeofmao() != 1){
			Carta * tmp = mao.colocar(sizeofmao()-1);
			// Remove a carta solicitada da mao e adiciona no campo
				mesa.Deal(tmp);
			}
}
int Jogador::somavalor()
{
	valortotal =0;
	Carta *temp=0;
	DeckDeCartas TEMP1;
	while(sizeofmao()!=0)
	{

		temp = mao.colocar(0);
		valortotal = valortotal+temp->retornavalor();
		TEMP1.Deal(temp);

	}
	while(TEMP1.tamanho()!=0)
	{
		mao.Deal(TEMP1.colocar(0));
	}
	return valortotal;
}






