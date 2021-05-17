/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FuncionPolinomica.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 2 de noviembre de 2016, 10:32
 */

#include "FuncionPolinomica.h"

FuncionPolinomica::FuncionPolinomica() {
    this->incremento=0.05;	
}

FuncionPolinomica::FuncionPolinomica(float xi, float xf, float A, float B, float C, float D){
	this->a=A;
	this->b=B;
	this->c=C;
	this->d=D;
	this->x0=xi;
	this->xf=xf;
        this->incremento=0.05;
	discretizarDominio();
	calcularOrdenadas();
        transformar_A_CargaPuntual();
}
				  
FuncionPolinomica::~FuncionPolinomica() {
	
}

void FuncionPolinomica::discretizarDominio(){
	float aux=x0;
	while(aux<=xf){
		x.push_back(aux);
		//cout << aux << endl;
		aux=aux+incremento;       
	}
}

void FuncionPolinomica::calcularOrdenadas(){
	float aux;
	for(size_t i=0; i<x.size(); i++){
		aux = a*pow(x[i],3) + b*pow(x[i],2) + c*x[i] + d;
		y.push_back(aux);
	}
}

void FuncionPolinomica::transformar_A_CargaPuntual(){
    for(size_t i=0; i<x.size(); i++){
        CargaPuntual1 aux(x[i],incremento*y[i]);
        cargas_puntuales.push_back(aux);
    }
}

vector<CargaPuntual1> FuncionPolinomica::getCargaDiscretizada(){
    return this->cargas_puntuales;
}
