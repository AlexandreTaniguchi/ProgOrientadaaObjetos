//============================================================================
// Name        : Disney.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Carta.h"
#include "Baralho.h"
#include "Jogador.h"
#include "Blackjack.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	DeckDeCartas caralho;
	Jogador Player;
	Jogador Dealer;
	Blackjack number21;
	srand ( unsigned ( std::time(0) ) );
	caralho.criabaralho();
	caralho.shuffle();
	caralho.printbaralho();
	Player.DealJogador(&caralho,2);
	cout << " " << endl;
	Player.printmao();
	caralho.printbaralho();

	//number21.menu(&Player,&Dealer,&caralho);
	return 0;
}
