#include "Buscador.h"

Buscador::Buscador() {
	nombres.push_back("Perfil IPN.csv");
	nombres.push_back("PerfilUPN.csv");
	nombres.push_back("Perfil LD.csv");
	nombres.push_back("Perfil Estructural C.csv");
}

Buscador::~Buscador() {
	delete pi;
	delete pu;
	delete pc;
	delete pl;
}

vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str); // Turn the string into a stream.
	string tok;
	while(getline(ss, tok, delimiter)) {
		internal.push_back(tok);
	}
	return internal;
}

string Buscador::buscar(float modulo, int m){
	int pos_fila;
	int pos_columna;
	int ind;
	bool llego=false;
	string linea;
	vector< vector<string> > matrizTexto;
	
	archivo.open(nombres[m].c_str());
	if(archivo.fail()){
		cerr << "Error al abrir el archivo" << endl;
		exit (1);
	}else{
		while(!archivo.eof()){
			getline(archivo,linea);
			vector<string> sep = split(linea, ';');
			matrizTexto.push_back(sep);
		}
	}
	
	for(size_t i=0;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(matrizTexto[i][j]=="Wx"){
				pos_columna=j;
				ind=i;
			}
			//cout<< setw(15) << matrizTexto[i][j] ;
		}
		//cout << endl;
	}
	
	for(size_t i=ind;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(atof(matrizTexto[i][pos_columna].c_str()) >= modulo){
				pos_fila=i;
				llego=true;
				break;
			}	
		}
		if(llego){ 
			break;
		}
	}
	archivo.close();
        if(!llego){
            throw BuscEx(m);
        }
	
	/* Teniendo en cuenta que algunos valores pueden estar cargados con coma (,) */
	for(size_t i=0;i<matrizTexto[pos_fila].size();i++){
		for(int j=0; j<matrizTexto[pos_fila][i].length();j++){
			switch(matrizTexto[pos_fila][i][j]){
			case ',':
				matrizTexto[pos_fila][i][j]='.';
				break;
			}
		}
		
	}
	
	switch(m){
	case 0:
		pi=new PerfilI(matrizTexto[ind],matrizTexto[pos_fila]);
		// return pi;
		break;
	case 1:
		pu=new PerfilUPN(matrizTexto[ind],matrizTexto[pos_fila]);
		// return pu;
		break;
	case 2:
		pl=new PerfilL(matrizTexto[ind],matrizTexto[pos_fila]);
		// return pl;
		break;
	case 3:
		pc=new PerfilC(matrizTexto[ind],matrizTexto[pos_fila]);
		// return pc;
		break;
	}
	return matrizTexto[pos_fila][pos_columna];
}

PerfilI* Buscador::buscarI(float modulo){ 
	int pos_fila;
	int pos_columna;
	int ind;
	bool llego=false;
	string linea;
	vector< vector<string> > matrizTexto;
	
	archivo.open(nombres[0].c_str());
	if(archivo.fail()){
		cerr << "Error al abrir el archivo" << endl;
		exit (1);
	}else{
		while(!archivo.eof()){
			getline(archivo,linea);
			vector<string> sep = split(linea, ';');
			matrizTexto.push_back(sep);
		}
	}
	
	for(size_t i=0;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(matrizTexto[i][j]=="Wx"){
				pos_columna=j;
				ind=i;
			}
		}
	}
	
	for(size_t i=ind;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(atof(matrizTexto[i][pos_columna].c_str()) >= modulo){
				pos_fila=i;
				llego=true;
				break;
			}	
		}
		if(llego){ 
			break;
		}
	}
	archivo.close();
        if(!llego){
            throw BuscEx(0);
        }
	
	/* Teniendo en cuenta que algunos valores pueden estar cargados con coma (,) */
	for(size_t i=0;i<matrizTexto[pos_fila].size();i++){
		for(int j=0; j<matrizTexto[pos_fila][i].length();j++){
			switch(matrizTexto[pos_fila][i][j]){
			case ',':
				matrizTexto[pos_fila][i][j]='.';
				break;
			}
		}
	}
	
	pi=new PerfilI(matrizTexto[ind],matrizTexto[pos_fila]);
	return this->pi;
}


PerfilUPN* Buscador::buscarU(float modulo){ 
	int pos_fila;
	int pos_columna;
	int ind;
	bool llego=false;
	string linea;
	vector< vector<string> > matrizTexto;
	
	archivo.open(nombres[1].c_str());
	if(archivo.fail()){
		cerr << "Error al abrir el archivo" << endl;
		exit (1);
	}else{
		while(!archivo.eof()){
			getline(archivo,linea);
			vector<string> sep = split(linea, ';');
			matrizTexto.push_back(sep);
		}
	}
	
	for(size_t i=0;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(matrizTexto[i][j]=="Wx"){
				pos_columna=j;
				ind=i;
			}
		}
	}
	
	for(size_t i=ind;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(atof(matrizTexto[i][pos_columna].c_str()) >= modulo){
				pos_fila=i;
				llego=true;
				break;
			}	
		}
		if(llego){ 
			break;
		}
	}
	archivo.close();
        if(!llego){
            throw BuscEx(1);
        }
	
	/* Teniendo en cuenta que algunos valores pueden estar cargados con coma (,) */
	for(size_t i=0;i<matrizTexto[pos_fila].size();i++){
		for(int j=0; j<matrizTexto[pos_fila][i].length();j++){
			switch(matrizTexto[pos_fila][i][j]){
			case ',':
				matrizTexto[pos_fila][i][j]='.';
				break;
			}
		}
	}
	
	pu=new PerfilUPN(matrizTexto[ind],matrizTexto[pos_fila]);
	return this->pu;
}


PerfilL* Buscador::buscarL(float modulo){ // PerfilC *
	int pos_fila;
	int pos_columna;
	int ind;
	bool llego=false;
	string linea;
	vector< vector<string> > matrizTexto;
	
	archivo.open(nombres[2].c_str());
	if(archivo.fail()){
		cerr << "Error al abrir el archivo" << endl;
		exit (1);
	}else{
		while(!archivo.eof()){
			getline(archivo,linea);
			vector<string> sep = split(linea, ';');
			matrizTexto.push_back(sep);
		}
	}
	
	for(size_t i=0;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(matrizTexto[i][j]=="Wx"){
				pos_columna=j;
				ind=i;
			}
		}
	}
	
	for(size_t i=ind;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(atof(matrizTexto[i][pos_columna].c_str()) >= modulo){
				pos_fila=i;
				llego=true;
				break;
			}	
		}
		if(llego){ 
			break;
		}
	}
	archivo.close();
        if(!llego){
            throw BuscEx(2);
        }
	
	/* Teniendo en cuenta que algunos valores pueden estar cargados con coma (,) */
	for(size_t i=0;i<matrizTexto[pos_fila].size();i++){
		for(int j=0; j<matrizTexto[pos_fila][i].length();j++){
			switch(matrizTexto[pos_fila][i][j]){
			case ',':
				matrizTexto[pos_fila][i][j]='.';
				break;
			}
		}
	}
	
	pl=new PerfilL(matrizTexto[ind],matrizTexto[pos_fila]);
	return this->pl;
}


PerfilC* Buscador::buscarC(float modulo){ 
	int pos_fila;
	int pos_columna;
	int ind;
	bool llego=false;
	string linea;
	vector< vector<string> > matrizTexto;
	
	archivo.open(nombres[3].c_str());
	if(archivo.fail()){
		cerr << "Error al abrir el archivo" << endl;
		exit (1);
	}else{
		while(!archivo.eof()){
			getline(archivo,linea);
			vector<string> sep = split(linea, ';');
			matrizTexto.push_back(sep);
		}
	}
	
	for(size_t i=0;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(matrizTexto[i][j]=="Wx"){
				pos_columna=j;
				ind=i;
			}
		}
	}
	
	for(size_t i=ind;i<matrizTexto.size();i++){
		for(size_t j=0;j<matrizTexto[i].size();j++){
			if(atof(matrizTexto[i][pos_columna].c_str()) >= modulo){
				pos_fila=i;
				llego=true;
				break;
			}	
		}
		if(llego){ 
			break;
		}
	}
	archivo.close();
        if(!llego){
            throw BuscEx(3);
        }
	
	/* Teniendo en cuenta que algunos valores pueden estar cargados con coma (,) */
	for(size_t i=0;i<matrizTexto[pos_fila].size();i++){
		for(int j=0; j<matrizTexto[pos_fila][i].length();j++){
			switch(matrizTexto[pos_fila][i][j]){
			case ',':
				matrizTexto[pos_fila][i][j]='.';
				break;
			}
		}
	}
	
	pc=new PerfilC(matrizTexto[ind],matrizTexto[pos_fila]);
	return this->pc;
}
