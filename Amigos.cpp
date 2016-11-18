#include <sstream>
#include "Amigos.h"

using std::stringstream;

//construcctor
Amigos::Amigos(){
  nivel=0;
}

int Amigos::getNivel(){
  return nivel;
}

void Amigos::setNivel(int nivel){
  this->nivel=nivel;
}

string Amigos::toString(){
  stringstream ss;
  ss << "Amigo; Nivel: ";
  ss<< nivel;
  return ss.c_str();
}
