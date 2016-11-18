#pragma once
#include <iostream>
#include <string>
#include "Contacto.h"



class CompaneroTrabajo: public Contacto {
  private:
    string departamento;
  public:
    CompaneroTrabajo();
    CompaneroTrabajo();
    string getDepartamento();
    void setDepartamento(string);
    string toString();
};
