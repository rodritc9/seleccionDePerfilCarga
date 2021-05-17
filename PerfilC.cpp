/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilC.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 3 de noviembre de 2016, 17:06
 */

#include "PerfilC.h"

PerfilC::PerfilC() {
    this->id="C -estructural-";
}

PerfilC::PerfilC(const PerfilC& orig) {
}


PerfilC::PerfilC( vector<string> p_name,vector<string> valores){
	for(size_t i=0; i<p_name.size(); i++){
		if(p_name[i]=="Medidas" || p_name[i]=="Medidas "){
			this->medidas=valores[i];
			this->id = "C -estructural- " + valores[i];
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Seccion" || p_name[i]=="Seccion "){
			this->A=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Peso" || p_name[i]=="Peso "){
			this->peso=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Ix" || p_name[i]=="Ix "){
			this->Ix=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Iy" || p_name[i]=="Iy "){
			this->Iy=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="iy" || p_name[i]=="iy "){
			this->iy=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="ix" || p_name[i]=="ix "){
			this->ix=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Wx" || p_name[i]=="Wx "){
			this->Wx=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Wy" || p_name[i]=="Wy "){
			this->Wy=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}
	}
	// cout << this->A << endl;
	// cout << this << endl;
}

PerfilC::~PerfilC() {
}

ostream &operator <<(ostream& os, const PerfilC &perfil){
	return (os << setw(50) << setfill('_') << "_" << endl
			<< setfill(' ') << "Denominacion: " << perfil.id << endl
			<< setw(10) << setiosflags(ios::left) << "Medidas: " << perfil.medidas << endl
			<< setw(10) << setiosflags(ios::left) << "Peso = " << perfil.peso << " [kg/m]" << endl
			<< setw(10) << setiosflags(ios::left) << "Seccion = " << perfil.A << " [cm^2]" << endl
			<< "Valores estaticos relativos a los ejes XX-YY" << endl
			<< setw(10) << setiosflags(ios::left) << "Ix = " << perfil.Ix << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Iy = " << perfil.Iy << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wx = " << perfil.Wx << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wy = " << perfil.Wy << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "ix = " << perfil.ix << " [cm]" << endl
			<< setw(10) << setiosflags(ios::left) << "iy = " << perfil.iy << " [cm]" << endl
			<< setw(50) << setfill('_') << "_" << endl);
}

