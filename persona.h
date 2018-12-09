//persona.h
//Gestiona y opera los datos de una persona

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

class Persona
{
  private:
    std::string dni_;
    std::string NombreCompleto_;
    int telefono_;
    std::string email_;
    int DPostal_;
    std::string FechaNac_;
  public:
    Persona(std::string dni, std::string NombreCompleto, int telefono, std::string email,
       int DPostal, std::string FechaNac)
    {
      dni_=dni;
      NombreCompleto_=NombreCompleto;
      telefono_=telefono;
      email_=email;
      DPostal_=DPostal;
      FechaNac_=FechaNac;
    };

    inline void setDNI(std::string dni){dni_=dni;};
    inline std::string getDNI(){return dni_;};

    inline void setNombreCompleto(std::string NombreCompleto){NombreCompleto_=NombreCompleto;};
    inline std::string getNombreCompleto(){return NombreCompleto_;};

    inline void setTelefono(int telefono){telefono_=telefono;};
    inline int getTelefono(){return telefono_;};

    inline void setEmail(std::string email){email_=email;};
    inline std::string getEmail(){return email_;};

    inline void setDPostal(int DPostal){DPostal_=DPostal;};
    inline int getDPostal(){return DPostal_;};

    inline void setFechaNac(std::string FechaNac){FechaNac_=FechaNac;};
    inline std::string getFechaNac(){return FechaNac_;};
};

#endif
