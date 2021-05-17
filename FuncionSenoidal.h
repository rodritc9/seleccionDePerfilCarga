/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FuncionSenoidal.h
 * Author: Rodrigo Torres
 *
 * Created on 2 de noviembre de 2016, 10:35
 */

#ifndef FUNCIONSENOIDAL_H
#define FUNCIONSENOIDAL_H

#include "CargaPuntual1.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class FuncionSenoidal {
private:
	float x0;
	float xf;
	vector<float> x;
	vector<float> y;
        vector <CargaPuntual1> cargas_puntuales;
	float incremento;
	
	/* Constantes de la funcion 3: f(x)=a*sen(w*x)+b */
	float a;
	float b;
	float w;
	
public:
	FuncionSenoidal();
	FuncionSenoidal(float,float,float,float,float);
	~FuncionSenoidal();
	void discretizarDominio();
	void calcularOrdenadas();
        void transformar_A_CargaPuntual();
        vector<CargaPuntual1> getCargaDiscretizada();  
};

#endif /* FUNCIONSENOIDAL_H */

