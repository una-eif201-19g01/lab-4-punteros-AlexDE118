/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H

#include <string>
#include <iostream>

using namespace std;

const int IDMIN = 1;
const int IDMAX = 100;
const float SALARIO_BASE = 800000;

class Empleado {
//atributos
protected:
	string *nombre;
	int *id;
	float *salario;
	bool *flagRevision;
//Metodo

public:
	Empleado();
private:

};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
