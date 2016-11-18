#include <sstream>
#include "CompaneroClase.h"
#include "Contacto.h"

using std::stringstream;
using std::string;
//construcctor
CompaneroClase::CompaneroClase(){
  clase="";
}
CompaneroClase::CompaneroClase(string nombreCompleto, string numeroTelefono, string direccionCorreo, string clase):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),clase(clase){

}

string CompaneroClase::getClase(){
  return clase;
}

void CompaneroClase::setClase(string clase){
  this->clase=clase;
}

string CompaneroClase::toString(){
  stringstream ss;
  ss << Contacto::toString() << clase;
  return ss.str();
}
