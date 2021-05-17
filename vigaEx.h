/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vigaEx.h
 * Author: federico
 *
 * Created on 8 de noviembre de 2016, 15:13
 */
#include <exception>
#include<iostream>
using namespace std;
        
#ifndef VIGAEX_H
#define VIGAEX_H

class vigaEx: public exception{
public:
    vigaEx(int mot ) : exception(), motivo(mot){
    }
    const char* what() const throw();
private:
    int motivo;
};

#endif /* VIGAEX_H */

