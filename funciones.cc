//funciones.cc

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "funciones.h"

using namespace std;

int menu()
{
  int opc;
  cout<<"------SISTEMA DE GESTION DE CLASE------"<<endl;
  cout<<"1. Buscar alumno por DNI"<<endl;
  cout<<"2. Insertar alumno"<<endl;
  cout<<"3. Modificar alumno"<<endl;
  cout<<"4. Borrar alumno"<<endl;
  //METER FUNCIONES DE GRUPOS
  cout<<"5. Copia de seguridad"<<endl;
  cout<<"6. Borrado total"<<endl;
  cout<<"Elige una opción: ";
  cin>>opc;
  return opc;
}

bool login(char* codigo)
{
  char code[5];

  ifstream f("permisos.bin", ios::binary);

  if(f.is_open())
  {
    f.read((char*)code,5*sizeof(char));
    if(strcmp(codigo,code))
    {
      cout<<"Login correcto"<<endl;
      f.close();
      return true;
    }
    f.close();
  }
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit (-1);
  }
  return false;
}

bool buscarAlumno(string dni)
{
  Alumno a;

  ifstream f("clase.bin", ios::binary);

  if(f.is_open())
  {
    while(!f.eof())
    {
      f.read((char*)&a,sizeof(Alumno));
      if(dni.compare(a.dni))
      {

        f.close();
        return true;
      }
    }
  }
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit (-1);
  }
  f.close();
  return false;

}
