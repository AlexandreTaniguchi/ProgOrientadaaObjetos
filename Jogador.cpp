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
void Jogador::somavalor()
{
	int i;
	Carta * temp;
	for(i=0;i<sizeofmao();i++)
	{
		Carta *temp = mao.colocar(i-1);
		valortotal = valortotal+temp->retornavalor();
	}
}





