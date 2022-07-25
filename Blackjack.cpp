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
void Blackjack::menu(Jogador * Player,Jogador * Dealer,DeckDeCartas *baralho,Blackjack * number21)
{

	int m=0,n=0;
	Player->DealJogador(baralho,2);
	Dealer->DealJogador(baralho,2);
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
					Player->somavalor();
					Player->printvalortotal();
					break;
				}
				case 4: {
						Player->DealJogador(baralho, 1);
					if(Player->somavalor()>21){
						cout << "Você Estourou!"<< endl;
						Player->somavalor();
						cout << "Sua m�o vale:";
						Player->printvalortotal();
						Player->MoveMaoDescarte();
						Dealer->MoveMaoDescarte();
						Dealer->MoveMesaDescarte();
						Player->DealJogador(baralho,2);
						Dealer->DealJogador(baralho,2);
						Dealer->MoveMesaDealer();

					}
					else
					{
						cout << "EL KAPPA" <<endl;
					}
				}
				break;
				case 5: {
					number21->game(Player, Dealer, baralho);
					break;
				}
				}
				}
				case 2: {
					cout << "EL KAPPA " << endl;

					break;
				}
			}

		}
		}
}
void Blackjack::game(Jogador * Player, Jogador * Dealer, DeckDeCartas *baralho)
{
	Player->MoveMesa();
	Dealer->MoveMaoDealer();
	while(Dealer->somavalor()<17){
		Dealer->DealJogador(baralho, 1);
	}
	Dealer->MoveMesa();
	if(Dealer->somavalormesa()>21){
		Player->somavalormesa();
		cout << "Sua mão vale: ";
		Player->printvalortotal();
		cout << " " << endl;
		Dealer->somavalormesa();
		cout << "A mão do Dealer vale: ";
		Dealer->printvalortotal();
		cout << " " << endl;
		cout << "Dealer Perdeu1" << endl;
		cout << "Você Ganhou" << endl;
		Player->MoveMesaDescarte();
		Dealer->MoveMesaDescarte();
	}
	else if(Player->somavalormesa()==Dealer->somavalormesa())
	{
		Player->somavalormesa();
		cout << "Sua mão vale: ";
		Player->printvalortotal();
		cout << " " << endl;
		Dealer->somavalormesa();
		cout << "A mão do Dealer vale: ";
		Dealer->printvalortotal();
		cout << " " << endl;
		cout << "Dealer Ganhou2" << endl;
		cout << "Você Perdeu" << endl;
		Player->MoveMesaDescarte();
		Dealer->MoveMesaDescarte();
	}
	else if(Player->somavalormesa() > Dealer->somavalormesa())
	{
		Player->somavalormesa();
		cout << "Sua mão vale: ";
		Player->printvalortotal();
		cout << " " << endl;
		Dealer->somavalormesa();
		cout << "A mão do Dealer vale: ";
		Dealer->printvalortotal();
		cout << " " << endl;
		cout << "Dealer Perdeu3" << endl;
		cout << "Você Ganhou" << endl;
		Player->MoveMesaDescarte();
		Dealer->MoveMesaDescarte();
	}
	else if(Player->somavalormesa() < Dealer->somavalormesa())
	{
		Player->somavalormesa();
		cout << "Sua mão vale: ";
		Player->printvalortotal();
		cout << " " << endl;
		Dealer->somavalormesa();
		cout << "A mão do Dealer vale: ";
		Dealer->printvalortotal();
		cout << " " << endl;
		cout << "Dealer Ganhou4" << endl;
		cout << "Você Perdeu" << endl;
		Player->MoveMesaDescarte();
		Dealer->MoveMesaDescarte();
	}
		Player->DealJogador(baralho,2);
		Dealer->DealJogador(baralho,2);
		Dealer->MoveMesaDealer();
}











