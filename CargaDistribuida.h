

#ifndef _CARGADISTRIBUIDA_H
#define _CARGADISTRIBUIDA_H

#include "ui_CargaDistribuida.h"
#include<iostream>
#include "CPexception.h"
using namespace std;

class CargaDistribuida : public QDialog {
    Q_OBJECT
public:
    CargaDistribuida();
     CargaDistribuida(int);
        virtual ~CargaDistribuida();
        float getmagnitud();
        float getmagnitudP();
        float getposicion();
        float getxinicial();
        float getxfinal();
    
        
private:
    Ui::CargaDistribuida widget;
    float magnitud_distribuida;
    float magnitud_puntuald;
    float xinicial;
    float xfinal;
    float posicion_distribuida;
    int l ;
    
private slots:
        
    void ingresar_magnitud_y_dominio();
};

#endif /* _CARGADISTRIBUIDA_H */
