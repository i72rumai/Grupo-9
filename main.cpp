#include "Agenda.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Persona.h"
#include "grupo.h"

using namespace std;

int main(){

int Rolp,Rol;
int opcion;
string credencialp, CAgenda, dni, ApellidosNombre, apellido1, apellido2, email, telefono, DPostal, FechaNac;
int opcion2, numero, confirmacion, nmiembros;
Profesor p;
Alumno a;
Grupo g;
Agenda ag;

cout<<endl<<"Introduzca su Credencial --->";
cin >> credencialp;


do{

  Rolp=p.AccederSistema(credencialp);

cin >> opcion;

  switch(opcion){

    case 1:

    cout<<endl<<"Introduzca el DNI del alumno que desea insertar --->";
    cin >> dni;

    if(ag.ExisteAlumno(dni)==1){
      cout<<endl<<"El alumno ya se encuentra registrado en el sistema"<<endl;
    }
    else{

      cout<<endl<<"Nombre del alumno:  ";
      cin>>nombre;
      cout<<endl<<"Primer apellido:  ";
      cin>>apellido1;
      cout<<endl<<"Segundo apellido:  ";
      cin>>apellido2;
      cout<<endl<<"Fecha de nacimiento:  ";
      cin>>FechaNac;
      cout<<endl<<"Email:  ";
      cin>>email;
      cout<<endl<<"Nº de grupo:  ";
      cin>>numGrupo;
      cout<<endl<<"Teléfono: ";
      cin>>telefono;
      cout<<endl<<"Dirección Postal: ";
      cin>>DPostal;

        ag.InsertarAlumno(dni, nombre, apellido1, apellido2, edad, email, numero, telefono, DPostal);

        cout<<endl<<"Los datos se introdujeron satisfactoriamente"<<endl;
    }

    break;

    case 2:

      cout<<endl<<"Introduzca el DNI del alumno que desea mostrar"<<endl;
      cin >> dni;
      ag.MostrarAlumno(dni);
    break;

    case 3:

    cout<<endl<<"Introduzca el DNI del alumno que desea modificar sus datos --->";
    cin >> dni;

    if(ag.ExisteAlumno(dni)==1){

    cout<<endl<<endl<<"Nuevo nombre del alumno:  ";
    cin>>nombre;
    cout<<endl<<endl<<"Nuevo Primer apellido:  ";
    cin>>apellido1;
    cout<<endl<<endl<<"Nuevo Segundo apellido:  ";
    cin>>apellido2;
    cout<<endl<<endl<<"Nueva fecha de nacimiento:  ";
    cin>>FechaNac;
    cout<<endl<<endl<<"Nuevo Email:  ";
    cin>>email;
    cout<<endl<<endl<<"Nuevo nº de grupo:  ";
    cin>>numGrupo;
    cout<<endl<<endl<<"Nuevo nº de teléfono:  ";
    cin>>numGrupo;
    cout<<endl<<"Nueva dirección postal: ";
    cin>>DPostal;
    ag.ModificarAlumno(dni, nombre, apellido1, apellido2, FechaNac, email, numero, telefono, DPostal);

    cout<<endl<<"El alumno se modificó satisfactoriamente"<<endl;

    }

    else{
        cout<<endl<<"El alumno no se encuentra en el sistema"<<endl;
    }
    break;

    case 4:

    cout<<endl<<endl<<"Introduzca el DNI del alumno que desea borrar --->";
    cin >> dni;
    ag.BorrarAlumno(dni);

    cout<<endl<<"El alumno fue borrado satisfactoriamente"<<endl;
    break;

    case 5:
      cout<<endl;
      ag.MostrarTodosAlumnos();
    break;

    case 6:

        cout<<endl<<endl<<"Introduzca el Numero de Grupo que desea Modificar --->";
        cin >> numero;

      do{
        cout<<endl<<endl<<"¿Que desea modificar?"<<endl<<endl;
        cout<<"1. Añadir integrante"<<endl;
        cout<<"2. Borrar integrante"<<endl;
        cout<<"3. Modificar Líder"<<endl;
        cout<<"4. Borrar Grupo"<<endl;
        cout<<"5. Mostrar Grupo"<<endl<<endl;
        cout<<"0. Salir"<<endl<<endl;
        cin >> opcion2;

              switch(opcion2){

              case 1:
                g.MostrarGrupo(0);

                NumMiembros=g.ContarMiembros(numero);
                cout<<endl<<"Introduzca el DNI del alumno que desea añadir al grupo --->";
                cin>>dni;

                g.AnadirIntegrante(dni,numero,nmiembros);

              break;

              case 2:

                cout<<endl<<"Introduzca el DNI del alumno que desea borrar del grupo --->";
                cin>>dni;
                g.BorrarIntegrante(dni);

                cout<<endl<<"El alumno se eliminó del grupo satisfactoriamente"<<endl;
              break;

              case 3:

                cout<<endl<<"Introduzca el DNI del nuevo líder --->";
                cin>>dni;
                g.ModificarLider(dni,numero);

                cout<<endl<<"Se ha cambiado el lider satisfactoriamente"<<endl;
              break;

              case 4:
              cout<<endl<<"¿Está seguro que desea borrar este grupo? (Si->1//No->0) ";
              cin>>confirmacion;
                if(confirmacion==1){
                    g.BorrarGrupo(numero);

                    cout<<endl<<"El grupo ha sido borrado satisfactoriamente"<<endl;
                }
                else{
                    cout<<endl<<endl<<"No se borró el grupo seleccionado"<<endl;
                }
              break;

            case 5:

              g.MostrarGrupo(numero);

            break;
          }
        }
          while(opcion2!=0);
    break;

    case 7:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{
      cout<<endl<<"Introduzca el DNI del profesor:  ";
      cin>>dni;
      cout<<endl<<"Nombre del profesor:  ";
      cin>>nombre;
      cout<<endl<<"Primer apellido del profesor:  ";
      cin>>apellido1;
      cout<<endl<<"Segundo apellido del profesor:  ";
      cin>>apellido2;
      cout<<endl<<"Edad del profesor:  ";
      cin>>edad;
      cout<<endl<<"Email del Profesor:  ";
      cin>>email;
      cout<<endl<<"Usuario del profesor:  ";
      cin>>usuario;
      cout<<endl<<"Credencial del profesor:  ";
      cin>>credencial;
      cout<<endl<<"Rol del Profesor: (C->1/A->0)  ";
      cin>>Rol;

        p.AltaProfesor(dni, nombre, apellido1, apellido2, edad, email, usuario, credencial, Rol);


        cout<<endl<<"Se realizó correctamente"<<endl;
    }
    break;

    case 8:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{

      cout<<endl<<"Introduzca el DNI del profesor que desea dar de baja --->";
      cin >> dni;
      p.BajaProfesor(dni);

      cout<<endl<<"El profesor ha sido dado de baja satisfactoriamente"<<endl;
  }
    break;

    case 9:

      if(Rolp!=1){
          cout<<endl<<"Permiso Denegado"<<endl;
          break;
      }
      else{

      cout<<endl<<"¿Desea realizar una copia de Seguridad? (Si->1//No->0) ";
        cin >> confirmacion;
          if(confirmacion==1){
              p.CrearBackupAlumnos();
              p.CrearBackupProfesores();

              cout<<endl<<"La copia de seguridad se ha realizado satisfactoriamente"<<endl;
          }
          else{
              cout<<endl<<"No se realizó la copia de seguridad"<<endl;

          }
        }
    break;

    case 10:

    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
    }
    else{

      cout<<endl<<"¿Desea cargar una copia de Seguridad? (Si->1//No->0) ";
      cin >> confirmacion;
        if(confirmacion==1){
            p.CargarBackupAlumnos();
            p.CargarBackupProfesores();

            cout<<endl<<"Se cargó la copia de seguridad correctamente"<<endl;
        }
        else{
            cout<<endl<<"No se realizó la copia de Seguridad"<<endl;
        }
    }
    break;

    case 11:
    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
      }
      else{
    cout<<endl<<"¿Seguro que desea borrar todos los alumnos? (Si->1//No->0) ";
    cin>>confirmacion;
    if(confirmacion==1){
      ag.BorrarTodosAlumnos();
        cout<<endl<<"Los alumnos se borraron satisfactoriamente"<<endl;
    }
    else{
        cout<<endl<<"No se realizó el borrado de los alumnos"<<endl;
    }
      }
    break;

    case 12:
    if(Rolp!=1){
        cout<<endl<<"Permiso Denegado"<<endl;
        break;
      }
      else{

      cout<<endl;
      p.MostrarTodosProfesores();
    }
    break;

    case 0:

        cout<<endl<<"¿Desea salir del sistema? (Si->1//No->0) ";
          cin >> confirmacion;
        if(confirmacion==1){
          cout<<endl<<endl<<"Saliendo del sistema..."<<endl;
        }
        else{
          opcion=NULL;
        }
          break;
}
}
while(opcion!=0);
}
