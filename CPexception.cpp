/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CPexception.cpp
 * Author: ariel
 * 
 * Created on 8 de noviembre de 2016, 09:32
 */

#include "CPexception.h"

const char* CPexception::what() const throw(){
    switch (motivo){
        case 0:
            return "La magintud de la carga no puede valer cero";
        case 1:
            return "Ubicacion fuera del rango de la viga";
        case 2:
            return "La carga distribuida debe estar dentro del rango de la viga";
        case 3:
            return "Puntos del dominio mal ingresados";
    }
}