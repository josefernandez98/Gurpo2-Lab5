#include <sstream>
#include "CompaneroTrabajo.h"

using std::stringstream;

//construcctor
CompaneroTrabajo::CompaneroTrabajo(){
  departamento="";
}

string CompaneroTrabajo::getDepartamento(){
  return departamento;
}

void CompaneroTrabajo::setCompaneroTrabajo(string departamento){
  this->departamento=departamento;
}

string CompaneroTrabajo::toString(){
  stringstream ss;
  ss << "Companero de Trabajo; Departemento: ";
  ss<< departamento;
  return ss.c_str();
}
