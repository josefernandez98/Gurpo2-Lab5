#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"
using namespace std;

class Familiares : public Contacto {
    private:
        string relacionFamiliar;
    public:
        Familiares();
        Familiares();
        string getRelacionFamiliar();
        void setRelacionFamiliar(string);
        string toString();
};
