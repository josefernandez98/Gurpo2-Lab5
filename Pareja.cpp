#include <sstream>
#include "Pareja.h"
#include "Contacto.h"

using std::stringstream;

//construcctor
Pareja::Pareja(){
  fecha="";
}

Pareja::Pareja(string nombreCompleto, string numeroTelefono, string direccionCorreo, string fecha):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),fecha(fecha){

}

string Pareja::getFecha(){
  return fecha;
}

void Pareja::setFecha(string fecha){
  this->fecha=fecha;
}

string Pareja::toString(){
  stringstream ss;
  ss << Contacto::toString() << fecha;
  return ss.str();
}
