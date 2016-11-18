#include <iostream>
#include <sstream>
#include "Bloqueados.h"
#include "Contacto.h"

using namespace std;

Bloqueados::Bloqueados () {
    nivelOdio = 0;
}

Bloqueados::Bloqueados(string nombreCompleto, string numeroTelefono, string direccionCorreo, int nivelOdio):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),nivelOdio(nivelOdio){

}

int Bloqueados::getNivelOdio() {
    return nivelOdio;
}//Fin del metodo

void Bloqueados::setNivelOdio (int nivelOdio) {
    this->nivelOdio=nivelOdio;
}//Fin del metodo

string Bloqueados::toString () {
    stringstream ss;
    ss << Contacto::toString() << nivelOdio << ";";
    return ss.str();
}//Fin del metodo
