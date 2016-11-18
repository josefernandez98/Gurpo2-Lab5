#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"


class Pareja: public Contacto {
  private:
    string fecha;
  public:
    Pareja();
    Pareja(string, string, string, string);
    string getFecha();
    void setFecha(string);
    string toString();
};
