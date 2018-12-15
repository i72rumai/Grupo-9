//profesor.cc

#include "profesor.h"

#include <iostream>
#include <cstdlib>
#include <ctime>


Profesor::Profesor()
{
  CAgenda_;
  rol_;
}


void Profesor::Insertaralumno()
{
  char alumno[10000];
  int i=0;
  int contador_alumno;
  ofstream alumnoSaliente("socios.dat", ios::app|ios::binary);
  ofstream Archivo_I_Saliente("i.dat", ios::out);
  ifstream Archivo_I_Entrante("i.dat", ios::in);
  ofstream ContadorAlumnoSaliente("contador_socios.dat", ios::out);

  Archivo_I_Entrante>>i;



  if(i<100000000)
  {
         cout<<"Digite el nombre del Alumno #"<<i<<endl;
         cin>>alumno[i];

         alumnoSaliente.write((char*)&alumno[i], sizeof(alumnos[i]));
         i++;
         contador_alumno=i;
         }
         else
         {
             cout<<"Memoria Llena"<<endl;
             cout<<endl;
             }
             Archivo_I_Saliente<<i;

             ContadorAlumnoSaliente<<contador_alumno;
}
