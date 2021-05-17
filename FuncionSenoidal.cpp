/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FuncionSenoidal.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 2 de noviembre de 2016, 10:35
 */

#include "FuncionSenoidal.h"

FuncionSenoidal::FuncionSenoidal() {	
    this->incremento=0.05;
}

FuncionSenoidal::FuncionSenoidal(float xi,float xf,float a,float b,float w){
	this->x0=xi;
	this->xf=xf;
	this->a=a;
	this->b=b;
	this->w=w;
	this->incremento=0.05;
	discretizarDominio();
	calcularOrdenadas();
    transformar_A_CargaPuntual();
}

FuncionSenoidal::~FuncionSenoidal() {
}

void FuncionSenoidal::discretizarDominio(){
	float aux=x0;
	while(aux<=xf){
		x.push_back(aux);
		aux=aux+incremento;       
	}
}

void FuncionSenoidal::calcularOrdenadas(){
	float aux;
	for(size_t i=0; i<x.size(); i++){
		aux = a*sin(w*x[i])+b;
		cout << aux << endl;
		y.push_back(aux);
	}
}

void FuncionSenoidal::transformar_A_CargaPuntual(){
    for(size_t i=0; i<x.size(); i++){
        CargaPuntual1 aux(x[i], incremento*y[i]);
        cargas_puntuales.push_back(aux);
    }
}

vector<CargaPuntual1> FuncionSenoidal::getCargaDiscretizada(){
    return this->cargas_puntuales;
}



