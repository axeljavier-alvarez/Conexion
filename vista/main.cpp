// vista.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// #include <mysql.h>
#include "Cliente.h"
#include <iostream>
using namespace  std;

int main()
{

	// OPCION PARA AGREGAR PALABRAS CASE 1
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin >> fecha_nacimiento;

	// preguntar sobre este orden, se determina en el constructor de clientes?
	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);

	c.crear();

	// OPCION PARA LEER PALABRAS, CASE 2
	c.leer();

	system("pause");
	return 0;

}

// nuevo codigo para crear
// int q_estado;

// MYSQL* conectar;
	// MYSQL_ROW fila;
	// MYSQL_RES* resultado;
	// conectar = mysql_init(0);
	// conectar = mysql_real_connect(conectar, "localhost", "root", "admin1234", "db_empresa", 3306, NULL, 0);


		// cout << "Conexion Exitosa";

		// INGRESAR DATOS
	// TODO EL CODIGO COMENTADO
		/* string puesto;
		cout << "Ingrese puesto ";
		// capturar todo el dato
		getline(cin, puesto);

		string insert = "insert into puestos(puesto) values('" + puesto + "')";

		const char* i = insert.c_str();
		q_estado = mysql_query(conectar, i);

		if (!q_estado) {
			cout << "Ingreso exitoso" << endl;

		}
		else {
			cout << "Error al ingresar" << endl;

		}*/


		//  VER LOS PUESTOS QUE EXISTEN
		/* string consulta = "select * from puestos";

		const char* c = consulta.c_str();

		q_estado = mysql_query(conectar, c);

		if (!q_estado) {
			resultado = mysql_store_result(conectar);

			while (fila = mysql_fetch_row(resultado)) {
				cout << fila[0] << "." <<fila[1] << endl;

			}

		} else {
			cout << "Error al ingresar" << endl;

		}*/



		/*
		}
	 else {
		cout << "No fue posible conectar";
	} */


// LLAMANDO AL CLIENTE Y COMENZANDO EL CRUD :)
// Cliente c = Cliente();
// c.leer();