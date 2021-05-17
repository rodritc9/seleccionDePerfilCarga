/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estatica.h
 * Author: Rodrigo Torres
 *
 * Created on 7 de noviembre de 2016, 16:08
 */

#ifndef _ESTATICA_H
#define _ESTATICA_H
#include <QApplication>
#include <string>
#include <iostream>

#include "ui_Estatica.h"
#include <QCloseEvent>
#include <QtGui/qdialog>
#include <QtGui/QMessageBox>
#include "CargaDistribuida.h"
#include "CargaPuntual.h"
#include "Configuracion.h"

#include <vector>

#include "FuncionPolinomica.h"
#include "FuncionSenoidal.h"
#include "Buscador.h"
#include "vigaEx.h"
#include "Resultado.h"

class Estatica : public QMainWindow {
    Q_OBJECT
public:
    Estatica();
    void calcularReacciones();
    void calcularMomentoMax(); /* Error relativo aprox de 0.3% respecto a los cálculos analiticos debido al error relativo en las reacciones */
    void ordenarCargas();
    float getMomentoMax();
    
    virtual ~Estatica();
private:
    Ui::Estatica widget;
    vector <CargaPuntual1> cargas;
    float momentoMax;
    int longitud;
    float RA;
    float RB;
    float tension_admisible;
    string perfil1;
    string perfil2;
    string perfil3;
    string perfil4;
   
    private slots:
        void AgregarCpuntual();
        void AgregarCdistribuida();
        void Calcular();
        void salirypreguntar(QCloseEvent *event);
        void ingresarparametros();
        void botonperfilL();
        void botonperfilI();
        void botonperfilu();
        void botonperfilc();
        protected:
        void closeEvent(QCloseEvent *event) ;
        void paintEvent(QPaintEvent *event);
        
        
    
};

#endif /* _ESTATICA_H */
