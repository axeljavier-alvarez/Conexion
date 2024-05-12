#pragma once
#include <iostream>

using namespace std;
class Persona {

	// atributos
protected: string nombres, apellidos, direccion, fecha_nacimiento;
		 int telefono = 0;


		 // el telefono lo puse como string, voy a ver si lo puedo cambiar xd
protected:
	Persona() {

	}

	Persona(string nom, string ape, string dir, int tel, string fn) {

		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;

	}
};

