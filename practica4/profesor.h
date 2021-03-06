//profesor.h
//Esta clase recoge los datos de los alumnos de la base de datos

#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "alumno.h"
#include "persona.h"

using namespace std;

class Profesor: public Persona
{
  private:
    int CAgenda_;
    int rol_;
  public:
    Profesor(){};
    Profesor(int CAgenda, int rol, string dni="", string ApellidosNombre="",
      int telefono=0, string email="", int DPostal=0, string FechaNac=""):Persona(dni,
      ApellidosNombre, telefono, email, DPostal, FechaNac)
      {
        CAgenda_=CAgenda;
        rol_=rol;
      };

    inline void setCAgenda(int CAgenda){CAgenda_=CAgenda;};
    inline int getCAgenda(){return CAgenda_;};

    inline void setRol(int rol){rol_=rol;};
    inline int getRol(){return rol_;};
};

#endif
