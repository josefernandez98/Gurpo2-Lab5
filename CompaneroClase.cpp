#include <sstream>
#include "CompaneroClase.h"

using std::stringstream;

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
  return ss.c_str();
}
