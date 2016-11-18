#include <iostream>
#include "Contacto.h"
#include "Amigos.h"
#include "Pareja.h"
#include "CompaneroTrabajo.h"
#include "ComppaneroClase.h"
#include "Familiares.h"
#include "Amantes.h"
#include "Bloqueados.h"


using namespace std;

void menu();
void menu2();

int main(int argc, char const *argv[]) {
  int opcion=0;
  do {
    menu();
    cin>>opcion;
    cout << endl;
    if(opcion==1){

    }
    if(opcion==2){

    }
    if(opcion==3){
      cout << "Adios" << endl;
    }






  } while(opcion!=3);








  return 0;
}

void menu(){
  cout << "Bienvenido al Guarda Contactos || Made by Grupo 2" << endl;
  cout << "1) Agregar Contacto"<< endl;
  cout < "2) Eliminar Contacto" << endl;
  cout < "3) Eliminar Contacto" << endl;
  cout << "Ingrese su opcion: ";
}
void menu2(){
  cout << "Escoger el tipo de contacto" << endl;
  cout << "1) Amigo"<< endl;
  cout < "2) Pareja" << endl;
  cout < "3) Companero de Trabajo" << endl;
  cout < "4) Companero de Clase" << endl;
  cout < "5) Familiares" << endl;
    cout < "6) Amantes" << endl;
      cout < "7) Bloqueados" << endl;
        cout < "8) Regresar" << endl;
  cout << "Ingrese su opcion: ";
}
