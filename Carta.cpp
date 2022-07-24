/*
 * Carta.cpp
 *
 *  Created on: 23 de jul. de 2022
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



