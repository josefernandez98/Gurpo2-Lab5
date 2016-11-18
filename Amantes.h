#pragma once
#include <iostream>
#include <string>

using namespace std;

class Amantes : public Contacto  {
    private:
        string horarioDisponible = "":
    public:
        string getHorarioDisponible();
        void setHorarioDisponible(string);
        string toString();
};
