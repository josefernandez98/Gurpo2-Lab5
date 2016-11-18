#include "Familiares.h"

using namespace std;

string Familiares::toString() {
    stringstream ss;
    ss << "Relacion Familiar;"
    ss << relacionFamiliar << ";";
    return ss.str();
}

string Familiares::getRelacionFamiliar() {
    return relacionFamiliar;
}//Fin del metodo

void Familiares::setRelacionFamiliar (string relacionFamiliar) {
    this->relacionFamiliar=relacionFamiliar;
}//Fin del metodo
