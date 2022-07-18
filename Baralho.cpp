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

#include "Baralho.h"

#define SIZE 52
using namespace std;


//constructor com 3 parametros
Carta::Carta(int faceDaCarta, int naipeDaCarta, int valorDaCarta)
{
    face = faceDaCarta;
    naipe = naipeDaCarta;
    valor = valorDaCarta;
}
//print function definition

string Carta::toString()
{
    string faceAux;
    string naipeAux;
    switch(face)
    {
        case 1:
            faceAux = "Às";
            break;
        case 11:
            faceAux = "Valete";
            break;
        case 12:
            faceAux = "Rainha";
            break;
        case 13:
            faceAux = "Rei";
            break;
        default:
            stringstream A;
            A << face;
            A >> faceAux;
            break;
    }
    switch(naipe)
    {
        case 0:
            naipeAux = "Paus";
            break;
        case 1:
            naipeAux = "Copas";
            break;
        case 2:
            naipeAux = "Espadas";
            break;
        case 3:
            naipeAux = "Ouros";
            break;
    }
    return (faceAux + " de " + naipeAux);
}
//Cria o as SIZE cartas do deck
deckDeCartas::deckDeCartas()
{
    int arrayDeValores[] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    // ----------- Inserindo cartas ----------- //
        //cria um loop para colocar cada carta no novo array
    for(int naipe = 0; naipe < 4; naipe++){
    	for(int face = 1; face < 14; face++){
    		 baralho.push_back(Carta(face, naipe, arrayDeValores[face-1]));
    	}
    }
}

void deckDeCartas::printbaralho()
{
	int n=1;
	vector<Carta>::iterator vi;
	for (vi=baralho.begin(); vi!=baralho.end(); vi++) {
		   cout << n++ << ": " << (*vi).toString() << (*vi);
	}

}



