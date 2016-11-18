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
        string getHorarioDisponible();
        void setHorarioDisponible(string);
        string toString();
};
