/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilI.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 31 de octubre de 2016, 16:41
 */

#include "PerfilI.h"

PerfilI::PerfilI() {
    this->id="I.P.N";
}

PerfilI::PerfilI(const PerfilI& orig) {
}

PerfilI::PerfilI(vector<string> p_name, vector<string> valores){
	for(size_t i=0; i<p_name.size(); i++){
		if(p_name[i]=="h" || p_name[i]=="h "){
			this->h=atoi(valores[i].c_str());
			this->id = "IPN " + valores[i];
			//cout << "__" << i << endl;
		}else if (p_name[i]=="b" || p_name[i]=="b "){
			this->b=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="G" || p_name[i]=="g "){
			this->peso=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Jx" || p_name[i]=="Jx "){
			this->Ix=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Jy" || p_name[i]=="Jy "){
			this->Iy=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Iy" || p_name[i]=="Iy "){
			this->iy=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Ix" || p_name[i]=="Ix "){
			this->ix=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Wx" || p_name[i]=="Wx "){
			this->Wx=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="Wy" || p_name[i]=="Wy "){
			this->Wy=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="F" || p_name[i]=="F "){
			this->F=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="s" || p_name[i]=="S "){
			this->s=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}else if (p_name[i]=="t" || p_name[i]=="t "){
			this->t=atof(valores[i].c_str());
		//	cout << "__" << i << endl;
		}
	}
	//cout << this->A << endl;
}
	

PerfilI::~PerfilI() {
}

ostream &operator <<(ostream& os, const PerfilI &perfil){
	return (os << setw(50) << setfill('_') << "_" << endl
			<< setfill(' ') << "Denominacion: " << perfil.id << endl
			<< "Dimensiones" << endl
			<< setw(10) << setiosflags(ios::left) << "h = " << perfil.h << " [mm]" << endl
			<< setw(10) << setiosflags(ios::left) << "b = " << perfil.b << " [mm]" <<endl								   
			<< setw(10) << setiosflags(ios::left) << "s = " << perfil.s << " [mm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "t = " << perfil.t << " [mm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "Seccion = " << perfil.F << " [cm^2]" << endl
			<< setw(10) << setiosflags(ios::left) << "Peso = " << perfil.peso << " [kg/m]" << endl
			<< "Valores estaticos relativos a los ejes XX-YY" << endl
			<< setw(10) << setiosflags(ios::left) << "Ix = " << perfil.Ix << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Iy = " << perfil.Iy << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wx = " << perfil.Wx << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wy = " << perfil.Wy << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "ix = " << perfil.ix << " [cm]" << endl
			<< setw(10) << setiosflags(ios::left) << "iy = " << perfil.iy << " [cm]" << endl
			<< setw(50) << setfill('_') << "_" << endl);
}


