#include <sstream>
#include <string>
#include "Familiares.h"
#include "Contacto.h"

using namespace std;

Familiares::Familiares() {
    relacionFamiliar = "";
}
Familiares::Familiares(string nombreCompleto, string numeroTelefono, string direccionCorreo, string relacionFamiliar):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),relacionFamiliar(relacionFamiliar){

}

string Familiares::toString() {
    stringstream ss;
    ss << Contacto::toString() << relacionFamiliar << ";";
    return ss.str();
}

string Familiares::getRelacionFamiliar() {
    return relacionFamiliar;
}//Fin del metodo

void Familiares::setRelacionFamiliar (string relacionFamiliar) {
    this->relacionFamiliar=relacionFamiliar;
}//Fin del metodo
