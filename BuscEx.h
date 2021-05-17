#ifndef BUSCEX_H
#define BUSCEX_H

#include <exception>
#include <iostream>
using namespace std;

class BuscEx : public exception {
public:
	BuscEx(int mot) : exception(), motivo(mot){
	}
	const char* what() const throw();
	
private: 
	int motivo;
};

#endif

