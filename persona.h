//persona.h
//Gestiona y opera los datos de una persona

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

using namespace std;

class Persona
{
  private:
    string dni_;
    string ApellidosNombre_;
    string telefono_;
    string email_;
    string DPostal_;
    string FechaNac_;
  public:
    Persona(){};
    Persona(string dni, string ApellidosNombre, int telefono, string email,
       int DPostal, string FechaNac)
    {
      dni_=dni;
      ApellidosNombre_=ApellidosNombre;
      telefono_=telefono;
      email_=email;
      DPostal_=DPostal;
      FechaNac_=FechaNac;
    };

    inline void setDNI(string dni){dni_=dni;};
    inline string getDNI(){return dni_;};

    inline void setApellidosNombre(string ApellidosNombre){ApellidosNombre_=ApellidosNombre;};
    inline string getApellidosNombre(){return ApellidosNombre_;};

    inline void setTelefono(string telefono){telefono_=telefono;};
    inline string getTelefono(){return telefono_;};

    inline void setEmail(string email){email_=email;};
    inline string getEmail(){return email_;};

    inline void setDPostal(string DPostal){DPostal_=DPostal;};
    inline string getDPostal(){return DPostal_;};

    inline void setFechaNac(string FechaNac){FechaNac_=FechaNac;};
    inline string getFechaNac(){return FechaNac_;};
};

#endif
