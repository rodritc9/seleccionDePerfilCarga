

#include "prueba2.h"

prueba2::prueba2(QString nombre_del_PDF, QString nombre_de_la_imagen,QString nombre_de_la_informacion) {
    
    this->nombre_del_PDF=nombre_del_PDF;
    this->nombre_de_la_imagen=nombre_de_la_imagen;
    this->nombre_de_la_informacion=nombre_de_la_informacion;
    
    
}

prueba2::~prueba2() {
    
}

int prueba2::crearPDF(){

printer.setOutputFormat(QPrinter::PdfFormat);
printer.setOutputFileName(nombre_del_PDF);
QPainter painter;

if(! painter.begin(&printer)){
    qWarning("failed");
    return 1;
}

QPixmap pixmap(nombre_de_la_imagen);

painter.drawText(710,10,nombre_de_la_informacion);
painter.drawPixmap(0,0,700,500, pixmap);

painter.end();

return 0;
}
