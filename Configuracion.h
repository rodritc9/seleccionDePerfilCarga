
#ifndef _CONFIGURACION_H
#define _CONFIGURACION_H

#include "ui_Configuracion.h"

class Configuracion : public QDialog {
    Q_OBJECT
    
public:
    Configuracion();
    virtual ~Configuracion();
    int getLongitud();
    float getTensionAdmisible();
    
private:
    Ui::Configuracion widget;
    int longitud;
    float tensionAdmisible;
    
private slots:
        
    void configurar();
};

#endif /* _CONFIGURACION_H */
