#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"


class Pareja: public Contacto {
  private:
    string fecha;

  public:
    Pareja();
    string getFecha();
    void setFecha(string);

};
