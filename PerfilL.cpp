/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PerfilL.cpp
 * Author: Rodrigo Torres
 * 
 * Created on 31 de octubre de 2016, 16:51
 */

#include "PerfilL.h"

PerfilL::PerfilL() {
    this->id="L.D. (Angulos Desiguales)";
}

PerfilL::PerfilL(const PerfilL& orig) {
}

PerfilL::PerfilL(vector<string> p_name, vector<string> valores){
	for(size_t i=0; i<p_name.size(); i++){
		if(p_name[i]=="a" || p_name[i]=="a "){
			this->a=atoi(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Designation" || p_name[i]=="Designation "){
			this->id=valores[i];
			//cout << "__" << i << endl;
		}else if (p_name[i]=="b" || p_name[i]=="b "){
			this->b=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="G" || p_name[i]=="g "){
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
		}else if (p_name[i]=="A" || p_name[i]=="A "){
			this->A=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="r1" || p_name[i]=="r1 "){
			this->r1=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="r2" || p_name[i]=="r2 "){
			this->r2=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="t" || p_name[i]=="t "){
			this->t=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="cx" || p_name[i]=="cx "){
			this->cx=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="cy" || p_name[i]=="cy "){
			this->cy=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="w'" || p_name[i]=="w' "){
			this->w_=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="w''" || p_name[i]=="w'' "){
			this->w__=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="V'" || p_name[i]=="V' "){
			this->V_=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="V''" || p_name[i]=="V'' "){
			this->V__=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="V'''" || p_name[i]=="V''' "){
			this->V___=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="Ixita" || p_name[i]=="Ixita "){
			this->I_xita=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="ixita" || p_name[i]=="ixita "){
			this->i_xita=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="In" || p_name[i]=="In "){
			this->I_n=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}else if (p_name[i]=="in" || p_name[i]=="in "){
			this->i_n=atof(valores[i].c_str());
			//cout << "__" << i << endl;
		}
	}
	//cout << this->A << endl;
}



PerfilL::~PerfilL() {
}

ostream &operator <<(ostream& os, const PerfilL &perfil){
	return (os << setw(50) << setfill('_') << "_" << endl 
			<< setfill(' ') << "Denominacion: " << perfil.id << endl
			<< "Dimensiones" << endl
			<< setw(10) << setiosflags(ios::left) << "a = " << perfil.a << " [mm]" << endl
			<< setw(10) << setiosflags(ios::left) << "b = " << perfil.b << " [mm]" <<endl								   
			<< setw(10) << setiosflags(ios::left) << "t = " << perfil.t << " [mm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "r1 = " << perfil.r1 << " [mm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "r2 = " << perfil.r2 << " [mm]" <<endl
			<< "Propiedades del centro" << endl
			<< setw(10) << setiosflags(ios::left) << "cx = " << perfil.cx << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "cy = " << perfil.cy << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "w' = " << perfil.w_ << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "w'' = " << perfil.w__ << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "V' = " << perfil.V_ << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "V'' = " << perfil.V__ << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "V''' = " << perfil.V___ << " [cm]" <<endl
			<< setw(10) << setiosflags(ios::left) << "Seccion = " << perfil.A << " [cm^2]" << endl
			<< setw(10) << setiosflags(ios::left) << "Peso = " << perfil.peso << " [kg/m]" << endl
			<< "Valores estaticos" << endl
			<< setw(10) << setiosflags(ios::left) << "Ix = " << perfil.Ix << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Iy = " << perfil.Iy << " [cm^4]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wx = " << perfil.Wx << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "Wy = " << perfil.Wy << " [cm^3]" << endl
			<< setw(10) << setiosflags(ios::left) << "ix = " << perfil.ix << " [cm]" << endl
			<< setw(10) << setiosflags(ios::left) << "iy = " << perfil.iy << " [cm]" << endl
			<< setw(10) << setiosflags(ios::left) << "Ixita = " << perfil.I_xita << " [cm^4]" << endl						   
			<< setw(10) << setiosflags(ios::left) << "ixita = " << perfil.i_xita << " [cm]" << endl						   
			<< setw(10) << setiosflags(ios::left) << "In = " << perfil.I_n << " [cm^4]" << endl						   
			<< setw(10) << setiosflags(ios::left) << "in = " << perfil.i_n << " [cm]" << endl
			<< setw(50) << setfill('_') << "_" << endl);
}

