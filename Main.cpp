#include <iostream>
#include "Contacto.h"
#include "Amigos.h"
#include "Pareja.h"
#include "CompaneroTrabajo.h"
#include "CompaneroClase.h"
#include "Familiares.h"
#include "Amantes.h"
#include "Bloqueados.h"


using namespace std;

void menu();
void menu2();

int main(int argc, char const *argv[]) {
  int opcion=0;
  int opcion2=0;
  do {
    menu();
    cin>>opcion;
    cout << endl;
    if(opcion==1){
      do {
        menu2();
        cin>>opcion2;
        cout << endl;
        if(opcion2==1){

        }
        if(opcion2==2){

        }
        if(opcion2==3){

        }
        if(opcion2==4){

        }
        if(opcion2==5){

        }
        if(opcion2==6){

        }
        if(opcion2==7){

        }
        if(opcion2==8){
          cout << endl;
          cout << "Regresando... "<<endl;
        }
      } while(opcion2!=8);
    }//Fin del if opcion 1
    if(opcion==2){

    }//Fin del if opcion 2
    if(opcion==3){
      cout << "Adios" << endl;
    }//Fin del if opcion 3
  } while(opcion!=3);
  return 0;
}//Fin del main

void menu(){
  cout << "Bienvenido al Guarda Contactos || Made by Grupo 2" << endl;
  cout << "1) Agregar Contacto"<< endl;
  cout << "2) Eliminar Contacto" << endl;
  cout << "3) Salir" << endl;
  cout << "Ingrese su opcion: ";
}
void menu2(){
  cout << "Escoger el tipo de contacto" << endl;
  cout << "1) Amigo"<< endl;
  cout << "2) Pareja" << endl;
  cout << "3) Companero de Trabajo" << endl;
  cout << "4) Companero de Clase" << endl;
  cout << "5) Familiares" << endl;
    cout << "6) Amantes" << endl;
      cout << "7) Bloqueados" << endl;
        cout << "8) Regresar" << endl;
  cout << "Ingrese su opcion: ";
}
