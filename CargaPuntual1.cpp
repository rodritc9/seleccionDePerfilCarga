/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CargaPuntual.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 31 de octubre de 2016, 17:14
 */

#include "CargaPuntual1.h"

CargaPuntual1::CargaPuntual1() {
    this->magnitud=0;
    this->ubicacion=0;
}
/*
CargaPuntual1::CargaPuntual1(float u,float m) {
   
    if(u < 0){
        throw CPexception(1);
    }
    this->ubicacion=u;
    this->magnitud=m;
}
 */
CargaPuntual1::CargaPuntual1(float u,float m, int l ) {
    
    if(u<0 || u > l){
        throw CPexception(1);
    }
    if(m==0){
        throw CPexception(0);
    }
    this->ubicacion=u;
    this->magnitud=m;
    
}

CargaPuntual1::~CargaPuntual1() {
    
}

float CargaPuntual1::getUbicacion(){
    return this->ubicacion;
}

float CargaPuntual1::getMagnitud(){
    return this->magnitud;
}
