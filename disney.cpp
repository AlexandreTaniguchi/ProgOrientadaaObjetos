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
	DeckDeCartas baralho;
	Jogador Player;
	Jogador Dealer;
	Blackjack number21;
	baralho.criabaralho();
	baralho.shuffle();
	number21.menu(&Player,&Dealer,&baralho);
	return 0;
}
