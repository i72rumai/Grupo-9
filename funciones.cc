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
  cout<<"5. Copia de seguridad"<<endl;
  cout<<"6. Mostrar base de datos"<<endl;
  cout<<"7. Borrado total"<<endl;
  cout<<"8. Borrar grupo"<<endl;
  cout<<"9. Mostrar grupo"<<endl;
  cout<<"10. Modificar integrantes de un grupo"<<endl;
  cout<<"11. Modificar lider de un grupo"<<endl;
  cout<<"0. SALIR DEL SISTEMA"<<endl;
  cout<<"Elige una opción: ";
  cin>>opc;
  return opc;
}

bool login(string codigo)
{
  string code;

  ifstream f("permisos.bin", ios::out | ios::binary);

  if(f.is_open())
  {
    getline(f,code,'\n');
    if(code.compare(codigo))
    {
      cout<<"Login correcto"<<endl;
      f.close();
      return true;
    }
    f.close();
    return false;
  }
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit (-1);
  }
  return false;
}
