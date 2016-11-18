#pragma once
#include <iostream>
#include <string>

using namespace std;

class Familiares : public Contacto {
    private:
        string relacionFamiliar = "";
    public:
        string getRelacionFamiliar();
        void setRelacionFamiliar(string);
        string toString();
};
