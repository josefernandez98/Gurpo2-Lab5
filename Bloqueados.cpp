#include <iostream>
#include <sstream>
#include "Bloqueados.h"

using namespace std;

int Bloqueados::getNivelOdio() {
    return nivelOdio;
}//Fin del metodo

void Bloqueados::setNivelOdio (nivelOdio) {
    this->nivelOdio=nivelOdio;
}//Fin del metodo

string Bloqueados::toString () {
    stringstream ss;
    ss << "Nivel de Odio;"
    ss << nivelOdio << ";";
    return ss.str();
}//Fin del metodo
