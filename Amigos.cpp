#include <sstream>
#include "Amigos.h"
#include "Contacto.h"

using std::stringstream;
using std::string;
//construcctor
Amigos::Amigos(): Contacto(){
  nivel=0;
}
Amigos::Amigos(string nombreCompleto, string numeroTelefono, string direccionCorreo, int nivel):Contacto(nombreCompleto, numeroTelefono
,direccionCorreo),nivel(nivel){

}


int Amigos::getNivel(){
  return nivel;
}

void Amigos::setNivel(int nivel){
  this->nivel=nivel;
}

string Amigos::toString(){
  stringstream ss;
  ss << Contacto::toString() << nivel;
  return ss.str();
}
