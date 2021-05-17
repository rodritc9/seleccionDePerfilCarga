/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Rodrigo Torres
 *
 * Created on 7 de noviembre de 2016, 16:08
 */

#include <QApplication>

#include "Estatica.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv); //seria el constructor de la interfaz
    Estatica principal;
    principal.show();
    // create and show your widgets here

    return app.exec(); //aca ingreso a un bucle de eventos que me permitira interactuar con la interfaz
}
