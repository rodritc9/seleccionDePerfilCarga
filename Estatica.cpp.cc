/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Estatica.cpp
 * Author: Rodrigo Torres
 *
 * Created on 7 de noviembre de 2016, 16:08
 */

#include "Estatica.h"


#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui>
#include <QtGui/QPainter>


/*
 * En el caso de modificar Estatica.ui, agregar desp estas lineas de codigo
 QGraphicsScene *scene;
 * scene = new QGraphicsScene(0,0,100,100);
        graphicsView->setScene(scene);
 */



Estatica::Estatica() {
    widget.setupUi(this);
    this->longitud=0;
    this->tension_admisible=0;
    
}

Estatica::~Estatica() {
    
}

void Estatica::ingresarparametros(){
    Configuracion *parametros;
    parametros = new Configuracion;
    parametros->exec();
    
    try{ 
        longitud=parametros->getLongitud();
        tension_admisible=parametros->getTensionAdmisible();
        
        if(longitud < 0){
            throw vigaEx (0);
        }
        if(tension_admisible < 0){
            throw vigaEx (1);
        }
        longitud=parametros->getLongitud();
        tension_admisible=parametros->getTensionAdmisible();
        QString sslongitud, sstension_admisible;
        sslongitud.setNum(longitud);
        sstension_admisible.setNum(tension_admisible);
    
    widget.valorparametro->setText(sslongitud);
    widget.valtensionadmisible->setText(sstension_admisible);
    }catch ( vigaEx &e){
            QMessageBox:: StandardButton ret ;
             ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
    }
        
        
    

}

void  Estatica ::AgregarCpuntual(){
    
    CargaPuntual *cargap;
    cargap=new CargaPuntual;
    cargap->exec();
   
    if( cargap->getmagnitud()!=0 ){
    try{
        CargaPuntual1 aux(cargap->getposicion(),cargap->getmagnitud(),longitud);
        cargas.push_back(aux);
        QPolygonF polygon, recta;
        int posgrafica;
       
        posgrafica= ((619.0*cargap->getposicion())/longitud);
        
        polygon << QPointF((-255+posgrafica),100) << QPointF((-265+posgrafica),90) <<  QPointF((-245+posgrafica),90);
        recta<< QPointF((-255+posgrafica),100) << QPointF((-255+posgrafica),10);
        widget.scene->addPolygon(polygon , QPen( Qt ::blue),  QBrush(Qt ::blue));
        widget.scene->addPolygon(recta, QPen( Qt ::blue),  QBrush(Qt ::blue));
       
        
    } catch (CPexception &e){
        QMessageBox:: StandardButton ret ;
        ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
    }
    }
    
    
    
    
    

    
}
void Estatica::AgregarCdistribuida(){
    CargaDistribuida *cargad;
    cargad = new CargaDistribuida(longitud);
    cargad->exec();
    if(cargad->getmagnitud()!=0){
        try{
           CargaPuntual1 aux(cargad->getposicion(),cargad->getmagnitudP(),longitud);
           cargas.push_back(aux);
           QPolygonF polygon;
           int posgraficai, posgraficaf;
           posgraficai= ((619*cargad->getxinicial())/longitud);
           posgraficaf= ((619*cargad->getxfinal())/longitud);
           polygon << QPointF((-255+posgraficai),100) << QPointF((-255+posgraficai),80) <<  QPointF((-255+posgraficaf),80)<<  QPointF((-255+posgraficaf),100);
           widget.scene->addPolygon(polygon , QPen( Qt ::black),  QBrush(Qt ::VerPattern));
           
       } catch (CPexception &e){
           QMessageBox:: StandardButton ret ;
           ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
       }
    }
    
}
void Estatica::Calcular(){
   
    try{
        if(cargas.size()== 0){
            throw vigaEx (2);
        }
        
        ordenarCargas();
        calcularReacciones();
        calcularMomentoMax();

        Buscador *busc;
        busc=new Buscador;
        
        vector< string> wxresultado;
        cout << "Momento max: " << getMomentoMax() << endl;


        float Wx_deseado = getMomentoMax()/(float)tension_admisible;
        cout << "Wx deseado: " << Wx_deseado << endl;

        for(int i=0;i<4;i++){
            try{
                cout << "Catalogo " << i << " -->  Wx= ";
                cout << busc->buscar(Wx_deseado,i) << endl;
                wxresultado.push_back(busc->buscar(Wx_deseado,i));
            }catch (BuscEx &e){
                QMessageBox:: StandardButton ret ;
                ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
            }
        }
        
        QString ssmomentomax, sswxdeseado, sswxr1, sswxr2, sswxr3, sswxr4;  

        widget.wxdeseado->setText(sswxdeseado.setNum(Wx_deseado));
        widget.momentomax->setText(ssmomentomax.setNum(getMomentoMax()));
        widget.catalogo1->setText(sswxr1.fromStdString( wxresultado[0]));
        widget.catalogo2->setText(sswxr2.fromStdString(wxresultado[1]));
        widget.catalogo3->setText(sswxr3.fromStdString(wxresultado[2]));
        widget.catalogo4->setText(sswxr4.fromStdString( wxresultado[3]));
        widget.momentomax->setStyleSheet("color: brown;");
        widget.wxdeseado->setStyleSheet("color: brown;");
          
stringstream  aux_ss, borrar;

        try{
                    aux_ss << *busc->buscarI(Wx_deseado);
                    perfil1+=aux_ss.str();
            }catch (BuscEx &e){
                    QMessageBox:: StandardButton ret ;
                    ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
                }
            try{
                    aux_ss.str("");
                    aux_ss << *busc->buscarU(Wx_deseado);
                    perfil2=aux_ss.str();
            }catch (BuscEx &e){
                    QMessageBox:: StandardButton ret ;
                    ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
                }
            try{
                    aux_ss.str("");
                    aux_ss << *busc->buscarL(Wx_deseado);
                    perfil3=aux_ss.str();
            }catch (BuscEx &e){
                    QMessageBox:: StandardButton ret ;
                    ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
                }
            try{
                    aux_ss.str("");
                    aux_ss<< *busc->buscarC(Wx_deseado);
                    perfil4=aux_ss.str();
            }catch (BuscEx &e){
                    QMessageBox:: StandardButton ret ;
                    ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
                }
        }catch ( vigaEx &e){
            QMessageBox:: StandardButton ret ;
             ret = QMessageBox::warning(this, tr("Error"),e.what(),  QMessageBox::Ok);
        }
}
void Estatica::salirypreguntar(QCloseEvent *event){
    
}


void Estatica::closeEvent(QCloseEvent *event){
    QMessageBox:: StandardButton ret ;
    
   ret = QMessageBox::warning(this, tr("Application"),tr("Desea salir del programa?"),  QMessageBox::Close | QMessageBox::Cancel); 
   if (ret == QMessageBox::Cancel) {
       event->ignore();
   }
}


void Estatica :: botonperfilL(){
    Resultado *resultadoL;
    resultadoL = new Resultado(":/L.jpg",perfil3);
    resultadoL->showNormal();
    
}
void Estatica :: botonperfilI(){
    Resultado *resultadoI;
    resultadoI = new Resultado(":/IPN.jpg",perfil1);
    resultadoI->showNormal();
}
void Estatica :: botonperfilu(){
    Resultado *resultadou;
    resultadou = new Resultado(":/UPN.jpg",perfil2);
    resultadou->showNormal();
}
void Estatica ::botonperfilc(){
    Resultado *resultadoc;
    resultadoc = new Resultado(":/C.jpg",perfil4);
    resultadoc->showNormal();
}
void Estatica::calcularReacciones(){
    float suma=0;
    
    for(size_t i=0; i<cargas.size(); i++){
        suma=suma+cargas[i].getMagnitud()*cargas[i].getUbicacion();
    }
    this->RB=suma/(float)longitud;
    suma=0;
    for(size_t i=0; i<cargas.size(); i++){
        suma=suma+cargas[i].getMagnitud()*(longitud-cargas[i].getUbicacion());
    }
    this->RA=suma/(float)longitud;
    
    CargaPuntual1 Ra(0,-RA);
    cargas.insert(cargas.begin(),Ra);
    CargaPuntual1 Rb(longitud,-RB);
    cargas.push_back(Rb);
    
    // cout << RA << endl << RB << endl;
}
void Estatica::calcularMomentoMax(){
    //vector<float> momento;
    momentoMax=0;
    float suma=0;
    //momento.push_back(suma);
    for(size_t i=1;i<cargas.size()-1;i++ ){
        for(int j=0;j<i;j++){
            suma=suma+cargas[j].getMagnitud()*abs(cargas[j].getUbicacion()-cargas[i].getUbicacion());
        }
        //cout << cargas[i].getUbicacion() << "____" << suma << endl;
        //momento.push_back(suma);
        if(abs(suma)>=momentoMax){
            this->momentoMax=abs(suma);
        }
        suma=0;
    }
}
void Estatica::ordenarCargas(){
	CargaPuntual1 temp;
	for (size_t i=1; i<cargas.size(); i++){
		for (size_t j=0;j<cargas.size()-1;j++){
			if(cargas[j].getUbicacion() > cargas[j+1].getUbicacion()){
				temp = cargas[j];
				cargas[j] = cargas[j+1];
				cargas[j+1] = temp;
			}
		}
	}
	for(size_t i=0; i<cargas.size()-1; i++){
		if( cargas[i].getUbicacion() == cargas[i+1].getUbicacion() ){
			CargaPuntual1 suma ( cargas[i].getUbicacion() , cargas[i].getMagnitud() + cargas[i+1].getMagnitud());
			cargas[i+1]=suma;
			cargas.erase(cargas.begin()+i);
			i--;
		}
	}
}

float Estatica::getMomentoMax(){
    return this->momentoMax;
}

void Estatica::paintEvent(QPaintEvent *event){
    QPainter painter(this);
}