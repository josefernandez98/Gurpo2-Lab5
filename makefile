Main: Main.o Amantes.o Amigos.o Bloqueados.o CompaneroClase.o CompaneroTrabajo.o Contacto.o Familiares.o Pareja.o
	g++ Main.o Amantes.o Amigos.o Bloqueados.o CompaneroClase.o CompaneroTrabajo.o Contacto.o Familiares.o Pareja.o -o Main
Main.o: Main.cpp Amantes.h Amigos.h Bloqueados.h CompaneroClase.h CompaneroTrabajo.h Contacto.h Familiares.h Pareja.h
	g++ -c Main.cpp
Amantes.o: Contacto.h Amantes.h Amantes.cpp
	g++ -c Amantes.cpp
Amigos.o: Contacto.h Amigos.h Amigos.cpp
	g++ -c Amigos.cpp
Bloqueados.o: Contacto.h Bloqueados.h Bloqueados.cpp
	g++ -c Bloqueados.cpp
CompaneroClase.o: Contacto.h CompaneroClase.h CompaneroClase.cpp
	g++ -c CompaneroClase.cpp
CompaneroTrabajo.o: Contacto.h CompaneroTrabajo.h CompaneroTrabajo.cpp
	g++ -c CompaneroTrabajo.cpp
Contacto.o: Contacto.h Contacto.cpp
	g++ -c Contacto.cpp
Familiares.o: Contacto.h Familiares.h Familiares.cpp
	g++ -c Familiares.cpp
Pareja.o: Contacto.h Pareja.h Pareja.cpp
	g++ -c Pareja.cpp 
