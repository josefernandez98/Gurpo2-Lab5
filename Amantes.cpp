#include "Amantes.h"
#include "Contacto.h"
#include <string>
#include <sstream>

using namespace std;

Amantes::Amantes () {
    horarioDisponible = "";
}

Amantes::Amantes(string nombreCompleto, string numeroTelefono, string direccionCorreo, string horarioDisponible):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),horarioDisponible(horarioDisponible){

}

string Amantes::toString () {
    stringstream ss;
    ss << "Horario Disponible;";
    ss << horarioDisponible << ";";
    return ss.str();
}//Fin del metodo

string Amantes::getHorarioDisponible () {
    return horarioDisponible;
}//Fin del metodo

void Amantes::setHorarioDisponible (string horarioDisponible) {
    this->horarioDisponible=horarioDisponible;
}//Fin del metodo
