//profesor.h
//Esta clase recoge los datos de los alumnos de la base de datos

#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <string>
#include "persona.h"

class Profesor: public Persona
{
  private:
    int CAgenda_;
    int rol_;
  public:
    Profesor(int CAgenda, int rol, std::string dni, std::string NombreCompleto,
      int telefono, std::string email, int DPostal, std::string FechaNac):Persona(dni,
      NombreCompleto, telefono, email, DPostal, FechaNac)
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
