#pragma once
#include <iostream>
#include "Contacto.h"

class Bloqueados : public Contacto{
    private:
        int nivelOdio;
    public:
        Bloqueados();
        Bloqueados(string, string, string, int);
        int getNivelOdio();
        void setNivelOdio(int);
        string toString();
};
