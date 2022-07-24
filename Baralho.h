/*
 * Baralho.h
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */

#ifndef HEADERS_BARALHO_H_
#define HEADERS_BARALHO_H_

#pragma once
#include <iostream>
#include <ios>
#include <limits>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <algorithm>

#include "Carta.h"

using namespace std;


class DeckDeCartas
{
public:
    DeckDeCartas();
    void criabaralho();
    void shuffle();
    void Deal(Carta* card);
    Carta* Draw();
    Carta * colocar(long long unsigned int posicao);
    int tamanho(){return baralho.size();}
    void printbaralho();


private:
    vector <Carta*> baralho;

};

#endif /* HEADERS_BARALHO_H_ */
