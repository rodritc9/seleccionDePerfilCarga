/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CargaPuntual.h
 * Author: ariel
 *
 * Created on 31 de octubre de 2016, 17:14
 */

#ifndef CARGAPUNTUAL1_H
#define CARGAPUNTUAL1_H

#include <iostream>
#include <string>
#include "CPexception.h"
using namespace std;

class CargaPuntual1 {
public:
    CargaPuntual1();
  //  CargaPuntual1(float u,float m);
    CargaPuntual1(float u,float m, int );
    virtual ~CargaPuntual1();
    float getUbicacion();
    float getMagnitud();

private:
    float ubicacion;
    float magnitud;
};

#endif /* CARGAPUNTUAL1_H */

