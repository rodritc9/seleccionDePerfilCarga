/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilC.h
 * Author: Rodrigo Torres
 *
 * Created on 3 de noviembre de 2016, 17:06
 */

#ifndef PERFILC_H
#define PERFILC_H

#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;

class PerfilC {
	friend ostream& operator <<(ostream &, const PerfilC &);
	
public:
    PerfilC();
    PerfilC(const PerfilC& orig);
	PerfilC(vector<string> , vector<string>);
    virtual ~PerfilC();
private:
    float A;
    float peso;
    
    string medidas;
    /*Valores estaticos*/
	float Ix;
	float Iy;
	float Wx;
	float Wy;
	float ix;
	float iy;
    
    string id;
};

#endif /* PERFILC_H */

