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
    int opcion, permisos, confirmacion;
    string dni, apellido1, apellido2, nombre, telefono, email, dpostal, fechanac, lider, ApellidosNombre, grupo;

    permisos=atoi(argv[4]);

    opcion=menu();
    switch(opcion)
    {
      case 1:
        cout<<endl<<"Introduzca el DNI del alumno que desea buscar: ";
        cin>>dni;
        BuscarAlumno(dni);
        break;
      case 2:
        cout<<endl<<"Introduzca el DNI del alumno que desea insertar: ";
        cin>>dni;
        if(BuscarAlumno(dni)==TRUE)
        {
          cout<<endl<<"El alumno que desea introducir ya existe en la base de datos";
        }
        else
        {
        cout<<endl<<"Introduzca el nombre del alumno: ";
        cin>>nombre;
        cout<<endl<<"Introduzca el primer apellido: ";
        cin>>apellido1;
        cout<<endl<<"Introduzca el segundo apellido: ";
        cin>>apellido2;
        cout<<endl<<"Introduzca el telefono: ";
        cin>>telefono;
        cout<<endl<<"Introduzca el email: ";
        cin>>email;
        cout<<endl<<"Introduzca la direccion postal: ";
        cin>>dpostal;
        cout<<endl<<"Introduzca la fecha de nacimiento (xx/yy/zzzz): ";
        cin>>fechanac;
        cout<<endl<<"Introduzca el grupo: ";
        cin>>grupo;
        cout<<endl<<"Introduzca si el alumno es lider (1->SI/0->NO): ";
        cin>>lider;
        ApellidosNombre=apellido1+' '+apellido2+', '+nombre;
        InsertarAlumno(dni, ApellidosNombre, telefono, email, dpostal, fechanac, lider, grupo);
        }
        break;
      case 3:
        cout<<endl<<"Introduzca el DNI del alumno que desea modificar: ";
        cin>>dni;
        if(BuscarAlumno(dni)==TRUE)
        {
          cout<<endl<<"El alumno que desea introducir ya existe en la base de datos";
        }
        else
        {
          cout<<endl<<"Introduzca el nombre del alumno: ";
          cin>>nombre;
          cout<<endl<<"Introduzca el primer apellido: ";
          cin>>apellido1;
          cout<<endl<<"Introduzca el segundo apellido: ";
          cin>>apellido2;
          cout<<endl<<"Introduzca el telefono: ";
          cin>>telefono;
          cout<<endl<<"Introduzca el email: ";
          cin>>email;
          cout<<endl<<"Introduzca la direccion postal: ";
          cin>>dpostal;
          cout<<endl<<"Introduzca la fecha de nacimiento (xx/yy/zzzz): ";
          cin>>fechanac;
          cout<<endl<<"Introduzca el grupo: ";
          cin>>grupo;
          cout<<endl<<"Introduzca si el alumno es lider (1->SI/0->NO): ";
          cin>>lider;
          ApellidosNombre=apellido1+' '+apellido2+', '+nombre;
          ModificarAlumno(dni, ApellidosNombre, telefono, email, dpostal, fechanac, lider, grupo);
        }
        break;
      case 4:
        cout<<endl<<"Introduzca el DNI del alumno que desea borrar: ";
        cin>>dni;
        BorrarAlumno(dni);
        break;
      case 5:
        MostarBaseDatos();
        break;
      case 6:
        CopiaSeguridad();
        break;
      case 7:
        BorrarBaseDatos();
        break;
      case 0:
          cout<<endl<<"¿Desea salir del sistema? (Si->1//No->0) ";
            cin >> confirmacion;
          if(confirmacion==1)
          {
            cout<<endl<<endl<<"Saliendo del sistema..."<<endl;
          }
          else
          {
            opcion=NULL;
          }
        break;
    }
  }
  else
  {
    cout<<"Fallo de identificacion ..."<<endl;
  }
  return 0;
}
