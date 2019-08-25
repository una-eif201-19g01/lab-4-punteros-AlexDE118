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
const float SALARIO_BASE = 800000.00;

class Empleado {
//atributos
protected:
	string *nombre;
	int *id;
	int *annosExperiencia;
	float *salario;
	bool *flagRevision;

	
//Metodos

public:
	Empleado();
	Empleado(string*,int*, float*, bool*);
	string reporteEmpleado();
	string getNombre();
	int getID();
	int getAnnosExperiencia();
	float getSalario();
	bool getFlagRevision();
	void setNombre(string *nom);
	void setID();
	void setAnnosExperiencia(int *annosExp);
	void setSalario(float *salary);
	void setFlagRevision(bool *flagRevisionValue);
	int randomizerID();
private:
	float aumentarSalario();
	void revisionAleatoria();

};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
