/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Resultado.cpp
 * Author: federico
 *
 * Created on 8 de noviembre de 2016, 16:14
 */


#include "Resultado.h"

Resultado::Resultado() {
    widget.setupUi(this);
}
Resultado::Resultado( string foto, string datos) {
    this->foto=foto;
    this->datos=datos;
    widget.setupUi(this);
    QString aux, auxfoto;
    widget.textBrowser->setText(aux.fromStdString( datos));
    widget.foto_1->setPixmap(QPixmap(auxfoto.fromStdString(foto)));
}

Resultado::~Resultado() {
}

void Resultado :: generar(){
    QString aux, auxfoto, nombre ;
    
    
    PDF *pdf = new PDF("Resultado.PDF", auxfoto.fromStdString(foto), datos);
    pdf->crearPDF();
    
}