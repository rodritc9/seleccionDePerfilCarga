/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilL.h
 * Author: Rodrigo Torres
 *
 * Created on 31 de octubre de 2016, 16:51
 */

#ifndef PERFILL_H
#define PERFILL_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

class PerfilL {
	friend ostream& operator << (ostream&, const PerfilL &);
public:
    PerfilL();
    PerfilL(const PerfilL& orig);
	PerfilL(vector<string> , vector<string>);
    virtual ~PerfilL();
private:
     /*Dimensiones*/
    int a;
    int b;
    float t;
    float r1;
    float r2;
    /*Posición del centro*/
    float cx;
    float cy;
    float w_;
    float w__;
    float V_;
    float V__;
    float V___;    
    /*Términos de Seccion*/
    float A;
    float Ix;
    float Wx;
    float ix;
    float Iy;
	float Wy;
	float iy;
	float I_xita;
	float i_xita;
	float I_n;
	float i_n;
    
    float peso;
    string id;
};

#endif /* PERFILL_H */

