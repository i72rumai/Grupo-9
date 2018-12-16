#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>

#include "persona.h"
#include "alumno.h"

using namespace std;


class Agenda : public Alumno
{
  private:

  public:
    Agenda(){};
    Agenda(string dni,string ApellidosNombre,string telefono, string email, string dpostal, stringfechanac, string lider, string grupo):
	 Alumno(dni,ApellidosNombre, telefono, email, dpostal, fechanac, lider, grupo){};

	bool BuscarAlumno(string dni);
	void ModificarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, stringfechanac, string lider, string grupo);
	void BorrarAlumno(string dni);
	void InsertarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, stringfechanac, string lider, string grupo);
	void MostrarBaseDatos();
	void CopiaSeguridad();
	void BorrarBaseDatos();

#endif
