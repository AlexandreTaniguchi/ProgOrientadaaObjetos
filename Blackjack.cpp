/*
 * Blackjack.cpp
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */
#include "Carta.h"
#include "Baralho.h"
#include "Jogador.h"
#include "Blackjack.h"


Blackjack::Blackjack()
{
	// TODO Auto-generated constructor stub

}
void Blackjack::menu(Jogador * Player,Jogador * Dealer,DeckDeCartas *baralho)
{

	int m=0,n=0,b=0;
	Player->DealJogador(baralho,2);
	Dealer->DealJogador(baralho,2);
	Player->printmao();
	Dealer->MoveMesaDealer();
	//Jogador 1 comeÃ§a o jogo
	while(1)
	{

		cout << "Escolha o modo de jogo:"
				<<endl<<"Digite 1 para jogar:"
				<<endl<<"Digite 2 para encerrar o jogo:";
		cin >> m;
		switch (m) {
		case 1: {
			while (1)
			{
				fflush(stdin);
				cout << "Escolha uma opção:" << endl
						<< "Digite <1> para ver sua mão;" << endl
						<< "Digite <2> para ver as cartas na mesa;" << endl
						<< "Digite <3> para ver o valor da sua mão;" << endl
						<< "Digite <4> HIT;" << endl << "Digite <5> STAND"
						<< endl;
				cin >> n;
				cout << "você escolheu a opção: " << n << endl;
			}
			switch (n) {
			case 1: {
				Player->printmao();
				break;
			}
			case 2: {
				fflush(stdin);
				Dealer->printmesa();
				break;
			}
			case 3: {
				if (Player->sizeofmao() != 0) {
						Player->somavalor();

					}
					break;
				}
			}
			case 4: {
				if (Player->sizeofmao() != 0 && b == 0) {
					Player->DealJogador(baralho, 1);
					b++;
				}
			}
			break;
			case 5: {
				break;
			} }
			break;
		case 2: {
			cout << "Função não implementada. " << endl;

			break;
		}
	}

		}
	}







