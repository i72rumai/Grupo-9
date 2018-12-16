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


class Agenda : public Alumno //Herencia de alumno
{
  private:

  public:
    Agenda(){};
	bool BuscarAlumno(string dni);
	void ModificarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, string fechanac, string lider, string grupo);
	void BorrarAlumno(string dni);
	void InsertarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, string fechanac, string lider, string grupo);
	void MostrarBaseDatos();
	void CopiaSeguridad();
	void BorrarBaseDatos();
};
#endif
