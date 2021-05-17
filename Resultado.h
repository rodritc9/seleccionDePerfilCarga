/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Resultado.h
 * Author: federico
 *
 * Created on 8 de noviembre de 2016, 16:14
 */



#ifndef _RESULTADO_H
#define _RESULTADO_H
#include"PDF.h"
#include "ui_Resultado.h"



#include<string>
using namespace std;



class Resultado : public QDialog {
    Q_OBJECT
public:
    Resultado();
    Resultado(string, string );
    
    virtual ~Resultado();
private:
    Ui::Resultado widget;
    string foto;
    string datos;
private slots:
    void generar();
};

#endif /* _RESULTADO_H */
