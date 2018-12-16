//main.cc

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "funciones.h"

using namespace std;

int main()
{
  string codigo;
  cout<<"Introduce codigo para entrar en el sistema: "<<endl;
  cin>>codigo;

  if(login(codigo)==true)
  {
  do{
    int opcion, permisos, opc;
    string dni;
    Agenda ag();
    Grupo g();

    permisos=atoi(argv[4]);

	opcion=menu();
        switch(opcion)
    {
      case 1:
        cout<<endl<<"Introduzca el DNI del alumno que desea buscar: ";
        cin>>dni;
        ag.BuscarAlumno(dni);
        break;
      case 2:
        cout<<endl<<"Introduzca el DNI del alumno que desea insertar: ";
        cin>>dni;
        if(ag.BuscarAlumno(dni)==true)
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
        ag.InsertarAlumno(dni, ApellidosNombre, telefono, email, dpostal, fechanac, lider, grupo);
        }
        break;
      case 3:
        cout<<endl<<"Introduzca el DNI del alumno que desea modificar: ";
        cin>>dni;
        if(ag.BuscarAlumno(dni)!=)
        {
          cout<<endl<<"El alumno que desea introducir no existe en la base de datos";
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
	if(ag.BuscarAlumno==true)
	{
	ag.BorrarAlumno(dni);
	}
	else
	{
	  cout<<"ERROR, el alumno no existe en la base de datos"<<endl;
        break;
      case 5:
	if(permisos==1)
	{
	  cout<<"Creando copia de seguridad..."<<endl;
          ag.CopiaSeguridad();
	}
	else
	{
	  cout<<"ERROR, no tienes los permisos necesarios"<<endl;
        break;
      case 6:
        ag.MostarBaseDatos();
        break;
      case 7:
	if(permisos==1)
	{
	  cout<<"¿Seguro que desea borrar toda la base de datos? 1=Si, 0=No"<<endl;
	  cin>>opc;
	  if(opc==1)
	  {
          ag.BorrarBaseDatos();
	  }
	}
	else
	{
	  cout<<"ERROR, no tienes los permisos necesarios"<<endl;
	}
        break;
      case 8:
        cout<<endl<<"Introduzca el numero del grupo que desea borrar: ";
        cin>>numero;
        g.BorrarGrupo(numero);
      case 9:
        cout<<endl<<"Introduzca el numero del grupo que desea mostrar: ";
        cin>>numero;
        g.MostrarGrupo(numero);
      case 10:
        cout<<endl<<"Introduzca el numero del grupo que desea modificar: ";
        cin>>numero;
        nmiembros=g.ContarMiembros(numero);
        cout<<endl<<"Introduzca el dni del alumno: ";
        cin>>dni;
        g.ModificarIntegrantes(dni, numero, nmiembros);
      case 11:
        cout<<endl<<"Introduzca el numero del grupo del que desea cambiar de lider: ";
        cin>>numero;
        cout<<endl<<"Introduzca el dni del alumno que quiere asignar como lider: ";
        cin>>dni;
        g.ModificarLider(dni, numero);
      case 0:
          cout<<endl<<"¿Desea salir del sistema? (Si=1, No=0) ";
          cin>>opc;
          if(confirmacion==1)
          {
            cout<<"Saliendo del sistema..."<<endl;
          }
          else
          {
            opcion=NULL;
          }
        break;
	default:
		cout<<"ERROR al introducir opción, volviendo al menú..."<<endl;
	break;
   }
  }while(opcion!=0);
  }
  else
  {
    cout<<"Fallo de identificacion ..."<<endl;
  }
  return 0;
}
