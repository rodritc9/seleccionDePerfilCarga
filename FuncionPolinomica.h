/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FuncionPolinomica.h
 * Author: Rodrigo Torres
 *
 * Created on 2 de noviembre de 2016, 10:32
 */

#ifndef FUNCIONPOLINOMICA_H
#define FUNCIONPOLINOMICA_H

#include "CargaPuntual1.h"



#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class FuncionPolinomica {
private:
	float x0;
	float xf;
	vector<float> x;
	vector<float> y;
	vector <CargaPuntual1> cargas_puntuales;
	float incremento;
	
	/* Constantes de polinomio grado 3: p(x)=a.x^3+b.x^2+c.x+d */
	float a;
	float b;
	float c;
	float d;
	
public:
	FuncionPolinomica();
	FuncionPolinomica(float, float, float, float, float, float);
	~FuncionPolinomica();
	void discretizarDominio();
	void calcularOrdenadas();
        void transformar_A_CargaPuntual();
        vector<CargaPuntual1> getCargaDiscretizada();
};
#endif /* FUNCIONPOLINOMICA_H */

