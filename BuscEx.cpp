#include "BuscEx.h"

const char* BuscEx::what() const throw(){
	switch(motivo){
	case 0:
		return "No se encuentran perfiles IPN";
	case 1:
		return "No se encuentran perfiles UPN";
	case 2:
		return "No se encuentran perfiles L";
	case 3:
		return "No se encuentran perfiles C";
	}
}
