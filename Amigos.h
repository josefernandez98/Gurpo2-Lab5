#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"


class Amigos: public Contacto {
  private:
    int nivel;
  public:
    Amigos();
    int getNivel();
    void setNivel(int);
    string toString();
};
