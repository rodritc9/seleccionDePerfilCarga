/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/* 
* File:   CargaPuntual.h
* Author: Rodrigo Torres
*
* Created on 31 de octubre de 2016, 16:48
*/
#ifndef _CARGAPUNTUAL_H
#define _CARGAPUNTUAL_H

#include "ui_CargaPuntual.h"
#include<iostream>
using namespace std;

class CargaPuntual : public QDialog {
    
    Q_OBJECT
    
public:
    CargaPuntual();
    virtual ~CargaPuntual();
    float getmagnitud();
    float getposicion();
    
private:
    
    Ui::CargaPuntual widget;
    
    float magnitud_puntual;
    float posicion_puntual;
    
private slots:
    void ingresar_magnitud_y_posicion();
    


};

#endif /* _CARGAPUNTUAL_H */
