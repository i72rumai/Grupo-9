//alumno.h
//Esta clase recoge los datos de los alumnos de la base de datos

#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>
#include "persona.h"

class Alumno: public Persona
{
  private:
    int grupo_;
    bool lider_;
  public:
    Alumno(int grupo, bool lider, std::string dni, std::string NombreCompleto,
      int telefono, std::string email, int DPostal, std::string FechaNac):Persona(dni,
      NombreCompleto, telefono, email, DPostal, FechaNac)
      {
        grupo_=grupo;
        lider_=lider;
      }

    inline void setGrupo(int grupo){grupo_=grupo;};
    inline int getGrupo(){return grupo_;};

    inline void setLider(bool lider){lider_=lider;};
    inline bool getLider(){return lider_;}

};

#endif
