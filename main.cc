//main.cc

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "funciones.h"

using namespace std;

int main(int argc, char** argv)
{
  if(login(argv[1])==true)
  {
    int opcion, permisos;
    string dni;

    permisos=atoi(argv[4]);

    opcion=menu();
    switch(opcion)
    {
      case 1:
        cin>>dni;
        buscarAlumno(dni);
        break;
    }
  }
  else
  {
    cout<<"Fallo de identificacion ..."<<endl;
  }
  return 0;
}
