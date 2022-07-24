/*
 * Carta.h
 *
 *  Created on: 23 de jul. de 2022
 *      Author: User
 */

#ifndef CARTA_H_
#define CARTA_H_
/*
 * Baralho.h
 *
 *  Created on: 17 de jul. de 2022
 *      Author: User
 */


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
    int retornavalor(){return valor;}

private:
    int face;
    int naipe;
    int valor;


};




#endif /* CARTA_H_ */
