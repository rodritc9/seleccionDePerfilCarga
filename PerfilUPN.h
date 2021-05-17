/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilUPN.h
 * Author: Rodrigo Torres
 *
 * Created on 31 de octubre de 2016, 16:48
 */

#ifndef PERFILUPN_H
#define PERFILUPN_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;


class PerfilUPN {
	friend ostream& operator << (ostream&, const PerfilUPN &);
public:
    PerfilUPN();
    PerfilUPN(const PerfilUPN& orig);
	PerfilUPN(vector<string> , vector<string>);
    virtual ~PerfilUPN();
private:
     /*Dimensiones*/
    int h;
    int b;
    float s;
    float t;
    /*Términos de Seccion*/
	float F;
	float Ix;
	float Iy;
	float Wx;
	float Wy;
	float ix;
	float iy;
    
    float peso;
    string id;
};

#endif /* PERFILUPN_H */

