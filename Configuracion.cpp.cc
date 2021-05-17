
#include "Configuracion.h"

Configuracion::Configuracion() {
    widget.setupUi(this);
    
    this->longitud=0;
    this->tensionAdmisible=0;
}

Configuracion::~Configuracion() {
}

void Configuracion::configurar(){

    longitud=widget.logitud_viga->text().toInt();
  tensionAdmisible=widget.tension_adm->text().toFloat();
  
  close();
    
}


int Configuracion::getLongitud(){

    return this->longitud;
    
}

float Configuracion::getTensionAdmisible(){

    return this->tensionAdmisible;
}