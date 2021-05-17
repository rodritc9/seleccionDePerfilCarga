

#include "CargaPuntual.h"
using namespace std;

CargaPuntual::CargaPuntual() {
    widget.setupUi(this);
    this->magnitud_puntual=0;
    this->posicion_puntual=0;
            
}

CargaPuntual::~CargaPuntual() {
}

void CargaPuntual::ingresar_magnitud_y_posicion(){

  
  magnitud_puntual=widget.magnitudF->text().toFloat();
  posicion_puntual=widget.posicionF->text().toFloat();
  
  close();
} 


 float CargaPuntual::getmagnitud(){
 
     return this->magnitud_puntual;
 }
 
 
float CargaPuntual::getposicion(){

    return this->posicion_puntual;
}