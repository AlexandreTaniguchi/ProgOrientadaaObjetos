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

#define SIZE 52

using namespace std;

class Carta
{
public:

        //Construtor com parametros, para preencher as cartas vazias criadas
    Carta(int faceDaCarta, int naipeDaCarta, int valorDacarta);
    	//função pra printar
    string toString();
    friend ostream& operator<<(ostream &output, const Carta &c){
    		output << ": " << c.valor << endl;
    		return output;
    	}
        //Cria 3 strings para naipe e pesos da carta
    int face;
    int naipe;
    int valor;

private:

};

class deckDeCartas
{
public:

    vector <Carta> baralho;

    deckDeCartas();
    void printbaralho();
private:


};

#endif /* HEADERS_BARALHO_H_ */
