#include "Contacto.h"
#include <string>
#include <sstream>

using namespace std;


Contacto::Contacto () {
    nombreCompleto = "";
    numeroTelefono = "";
    direccionCorreo = "";
}//Fin del constructor
Contacto::Contacto (string nombreCompleto, string numeroTelefono, string direccionCorreo):
nombreCompleto(nombreCompleto), numeroTelefono(numeroTelefono), direccionCorreo(direccionCorreo) {

}//Fin del constructor

string Contacto::getNombreCompleto () {
    return nombreCompleto;
}//Fin del metodo

string Contacto::toString() {
    stringstream ss;
    ss << "Nombre Completo; Numero de Telefono; Direccion de Correo;";
    ss << nombreCompleto << ";";
    ss << numeroTelefono << ";";
    ss << direccionCorreo << ";";
    return ss.str();
}//Fin del metodo

string Contacto::getNumeroTelefono () {
    return numeroTelefono;
}//Fin del metodo

string Contacto::getDireccionCorreo () {
    return direccionCorreo;
}//Fin del metodo

void Contacto::setDireccionCorreo (string direccionCorreo) {
    this->direccionCorreo=direccionCorreo;
}//Fin del metodo

void Contacto::setNumeroTelefono (string numeroTelefono) {
    this->numeroTelefono=numeroTelefono;
}//Fin del metodo

void Contacto::setNombreCompleto (string nombreCompleto){
    this->nombreCompleto=nombreCompleto;
}//Fin del metodo
