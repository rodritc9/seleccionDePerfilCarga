/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilI.h
 * Author: Rodrigo Torres
 *
 * Created on 31 de octubre de 2016, 16:41
 */

#ifndef PERFILI_H
#define PERFILI_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

class PerfilI {
	friend ostream& operator << (ostream&, const PerfilI &);
public:
    PerfilI();
    PerfilI(const PerfilI& orig);
	PerfilI(vector<string> , vector<string>);
    virtual ~PerfilI();
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

#endif /* PERFILI_H */

