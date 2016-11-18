#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"
using namespace std;

class Amantes : public Contacto  {
    private:
        string horarioDisponible;
    public:
        Amantes();
        Amantes(string, string, string, string);
        string getHorarioDisponible();
        void setHorarioDisponible(string);
        string toString();
};
