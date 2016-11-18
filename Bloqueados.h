#pragma once
#include <iostream>

class Bloqueados : public Contacto{
    private:
        int nivelOdio;
    public:
        int getNivelOdio();
        void setNivelOdio();
        string toString();
};
