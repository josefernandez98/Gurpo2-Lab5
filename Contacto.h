#pragma once
#include <iostream>
#include <string>

using namespace std;

class Contacto {
    private:
        string nombreCompleto = "";
        string numeroTelefono = "";
        string direccionCorreo = "";
    public:
        string getNombreCompleto();
        string getNumeroTelefono();
        string getDireccionCorreo();
        void setNombreCompleto(string);
        void setNumeroTelefono(string);
        void setDireccionCorreo(string);
        string toString();
};
