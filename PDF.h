
#ifndef PDF_H
#define PDF_H

#include "ui_Resultado.h"
#include<QtGui/QPainter>
#include<QtGui/QPrinter>
#include<QtGui/QPixmap>
#include <QString>
#include<string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <vector>
using namespace std;

class PDF : public QDialog {
    Q_OBJECT
    
public:
    PDF();
    PDF(QString , QString ,string );
    PDF(const PDF& orig);
    int crearPDF();
    virtual ~PDF();
private:
   
    QString nombre_del_PDF;
    QString nombre_de_la_imagen;
    string datos;
    QPrinter printer;
    QPainter painter;

};

#endif /* PDF_H */

