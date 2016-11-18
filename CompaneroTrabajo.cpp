#include <sstream>
#include "CompaneroTrabajo.h"
#include "Contacto.h"
#include <string>

using std::stringstream;
using std::string;
//construcctor
CompaneroTrabajo::CompaneroTrabajo(){
  departamento="";
}

CompaneroTrabajo::CompaneroTrabajo(string nombreCompleto, string numeroTelefono, string direccionCorreo, string deparamento):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),departamento(departamento){

}

string CompaneroTrabajo::getDepartamento(){
  return departamento;
}

void CompaneroTrabajo::setDepartamento(string departamento){
  this->departamento=departamento;
}

string CompaneroTrabajo::toString(){
  stringstream ss;
  ss << "Companero de Trabajo; Departemento: ";
  ss<< departamento;
  return ss.str();
}
