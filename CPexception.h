/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CPexception.h
 * Author: ariel
 *
 * Created on 8 de noviembre de 2016, 09:32
 */

#ifndef CPEXCEPTION_H
#define CPEXCEPTION_H

#include <exception>
#include <iostream>
using namespace std;

class CPexception : public exception {
public:
    CPexception(int mot) : exception(), motivo(mot){
    }
    const char * what() const throw();
private:
    int motivo;

};

#endif /* CPEXCEPTION_H */

