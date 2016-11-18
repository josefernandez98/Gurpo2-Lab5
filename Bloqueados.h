#pragma once
#include <iostream>
#include "Contacto.h"

class Bloqueados : public Contacto{
    private:
        int nivelOdio;
    public:
        Bloqueados();
        int getNivelOdio();
        void setNivelOdio(int);
        string toString();
};
