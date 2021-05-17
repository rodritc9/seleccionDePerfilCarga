/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/* 
* File:   Buscador.h
* Author: Rodrigo Torres
*
* Created on 31 de octubre de 2016, 16:48
*/
#ifndef BUSCADOR_H
#define BUSCADOR_H

#include "PerfilI.h"
#include "PerfilC.h"
#include "PerfilL.h"
#include "PerfilUPN.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include "BuscEx.h" 
using namespace std;

class Buscador {
private:
	ifstream archivo;
	vector<string> nombres;
	PerfilC *pc;
	PerfilUPN *pu;
	PerfilL *pl;
	PerfilI *pi;
	//vector< vector<string> > matrizTexto;

public:
	Buscador();
	~Buscador();
	string buscar(float,int);
	PerfilC* buscarC(float);
	PerfilI* buscarI(float);
	PerfilUPN* buscarU(float);
	PerfilL* buscarL(float);
};

#endif

