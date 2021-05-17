

#include "CargaDistribuida.h"

CargaDistribuida::CargaDistribuida() {
    //widget.setupUi(this);
      this->xinicial=0;
    this->xfinal=0;
}
CargaDistribuida::CargaDistribuida(int l) {
    this->l = l;
    this->xinicial=0;
    this->xfinal=0;
    widget.setupUi(this);
}

CargaDistribuida::~CargaDistribuida() {
}

void CargaDistribuida::ingresar_magnitud_y_dominio(){

  
  magnitud_distribuida=widget.Magnitud->text().toFloat();
  xinicial=widget.Xinicial->text().toFloat();
  xfinal=widget.Xfinal->text().toFloat();
  
  try{
      if(xfinal<0 || xinicial<0 || xfinal>l || xinicial>l){
          
          this->posicion_distribuida=-5;
          throw CPexception(2);
      }
      if(xfinal<= xinicial){
          
          this->posicion_distribuida=-5;
          throw CPexception (3);
      }
      magnitud_puntuald=magnitud_distribuida*(xfinal-xinicial);
      posicion_distribuida=xinicial+((xfinal-xinicial)/2);
  } catch (CPexception &e){
      cout<<e.what()<<endl;
  }
  close();
  
} 


 float CargaDistribuida::getmagnitud(){
 
     return this->magnitud_distribuida;
 }
 
  float CargaDistribuida::getmagnitudP(){
 
     return this->magnitud_puntuald;
 }
  
   float CargaDistribuida::getxinicial(){
 
     return this->xinicial;
 }
   
    float CargaDistribuida::getxfinal(){
 
     return this->xfinal;
 }
 
  
 
float CargaDistribuida::getposicion(){

    return this->posicion_distribuida;
}
