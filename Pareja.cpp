#include <sstream>
#include "Pareja.h"
#include "Contacto.h"

using std::stringstream;

//construcctor
Pareja::Pareja(){
  fecha="";
}

string Pareja::getFecha(){
  return fecha;
}

void Pareja::setFecha(string fecha){
  this->fecha=fecha;
}

string Pareja::toString(){
  stringstream ss;
  ss << "Pareja; Fecha de Aniversario: ";
  ss<< fecha;
  return ss.str();
}
