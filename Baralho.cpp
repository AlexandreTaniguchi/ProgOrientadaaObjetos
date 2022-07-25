/*
 * Baralho.cpp
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */
#include <iostream>
#include <ios>
#include <limits>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <algorithm>

#include "Baralho.h"
#include "Jogador.h"
#include "Carta.h"


using namespace std;

DeckDeCartas::DeckDeCartas()
{

}
//Cria o as SIZE cartas do deck
void DeckDeCartas::criabaralho()
{
    int arrayDeValores[] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    // ----------- Inserindo cartas ----------- //
        //cria um loop para colocar cada carta no novo array
    for(int naipe = 0; naipe < 4; naipe++){
    	for(int face = 1; face < 14; face++){
    		 baralho.push_back(new Carta(face, naipe, arrayDeValores[face-1]));
    	}
    }
}

void DeckDeCartas::printbaralho()
{
	int n=1;
	vector<Carta*>::iterator vi;
	for (vi=baralho.begin(); vi!=baralho.end(); vi++) {
		   cout << n++ << ": " << (*(*vi)).toString() << *(*vi);
	}
}
int random_int(int i) { return std::rand()%i;}
void DeckDeCartas::shuffle()
{
	random_shuffle(baralho.begin(), baralho.end(), random_int);
}
void DeckDeCartas::Deal(Carta* card)
{
	baralho.push_back(card);
}
Carta* DeckDeCartas::Draw()
{
	Carta* currentCard = baralho.back();
			baralho.pop_back();
		return currentCard;
}
Carta* DeckDeCartas::colocar(long long unsigned int index) {
	if(index >= baralho.size())
		return 0;
	Carta *currentCard = baralho[index];
		baralho.erase(baralho.begin()+index);
	return currentCard;
}



