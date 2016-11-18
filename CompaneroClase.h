#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"


class CompaneroClase: public Contacto {
  private:
    string clase;
  public:
    CompaneroClase();
    CompaneroClase();
    string getClase();
    void setClase(string);
    string toString();
};
