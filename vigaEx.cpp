/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vigaEx.cpp
 * Author: federico
 * 
 * Created on 8 de noviembre de 2016, 15:13
 */

#include "vigaEx.h"

 const char*  vigaEx :: what() const throw(){
     switch (motivo){
         case 0:
             return "La longitud no puede ser negativa";
         case 1:
            return "La  tension admisible no puede ser negativa";
         case 2:
            return "Ingrese  carga  ";
     }
 }


