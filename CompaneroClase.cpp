#include <sstream>
#include "CompaneroClase.h"
#include "Contacto.h"

using std::stringstream;
using std::string;
//construcctor
CompaneroClase::CompaneroClase(){
  clase="";
}

string CompaneroClase::getClase(){
  return clase;
}

void CompaneroClase::setClase(string clase){
  this->clase=clase;
}

string CompaneroClase::toString(){
  stringstream ss;
  ss << "Companero de Clase; Clase: ";
  ss<< clase;
  return ss.str();
}
