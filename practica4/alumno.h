//alumno.h
//Esta clase recoge los datos de los alumnos de la base de datos

#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

class Alumno: public Persona //Herencia de persona
{
  private:
    string grupo_;
    string lider_;
  public:
    Alumno(){};
    Alumno(int grupo, bool lider, string dni, string ApellidosNombre,
      int telefono, string email, int DPostal, string FechaNac):Persona(dni,
      ApellidosNombre, telefono, email, DPostal, FechaNac)
      {
        grupo_=grupo;
        lider_=lider;
      }

    inline void setGrupo(string grupo){grupo_=grupo;};
    inline string getGrupo(){return grupo_;};

    inline void setLider(string lider){lider_=lider;};
    inline string getLider(){return lider_;};

};

#endif
