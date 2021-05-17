
#include "PDF.h"

PDF::PDF() {
}
PDF::PDF(QString nombre_del_PDF, QString nombre_de_la_imagen, string datos) {
    this->nombre_del_PDF=nombre_del_PDF;
    this->nombre_de_la_imagen=nombre_de_la_imagen;
    this->datos=datos;
}

PDF::~PDF() {
}

int PDF::crearPDF(){
    
    

printer.setOutputFormat(QPrinter::PdfFormat);
printer.setOutputFileName(nombre_del_PDF);


if(! painter.begin(&printer)){
    qWarning("failed");
    return 1;
}

QPixmap pixmap(nombre_de_la_imagen);
//painter.drawPixmap(0,0,119,198, pixmap);

vector<string> a;
string word;
stringstream ss;
ss<<datos;
	
	
while( getline(ss, word, '\n') ){
	a.push_back(word);
}

int auxiliar=0;
for(size_t i=0; i<a.size();i++){
QString aux;
painter.drawText(400,auxiliar,aux.fromStdString( a[i]));
auxiliar=auxiliar+30;
}

painter.drawPixmap(0,0,160,200, pixmap);

painter.end();

return 0;
}