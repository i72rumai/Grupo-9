//Funcionan todos




#include "Profesor.h"
#include "Agenda.h"

//CrearBackup
//Crea una copia de seguridad de Alumnos.bin
void Profesor::CrearBackupAlumnos(){

ifstream f1;         //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream f2;
string linea;
f1.open("Clase.bin", ios::in | ios::binary);                 //Abrimos los ficheros, ambos en binario
f2.open("BackupAlumnos.bin", ios::out | ios:: binary);

  if(principal.is_open()){                                // Comprobamos si los ficheros se han abierto
      if(secundario.is_open()){
          while(getline(f1,linea,' ')){          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              f2 << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(f1,linea, ' ');
              f2 << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, '\n');           //Finaliza la linea
              f2 << linea <<endl;

        }

        f2.close();                               // Cerramos el fichero de escritura
      cout<<"Se realizó correctamente el backup"<<endl;

    }

    else{                                             // Si no se abre el fichero de escritura, aparece un mensaje de error

      cout<<"No se realizó el backup correctamente"<<endl;
    }
  f1.close();                                  // Cerramos el fichero de lectura
}
  else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

    cout<<"El fichero no se abrió correctamente"<<endl;
  }
}





//CrearBackup
//Crea una copia de seguridad de Profesores.bin
void Profesor::CrearBackupProfesores(){

ifstream f1;         //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream f2;
string linea;
principal.open("Profesores.bin", ios::in | ios::binary);                 //Abrimos los ficheros, ambos en binario
secundario.open("BackupProfesores.bin", ios::out | ios:: binary);

  if(f1.is_open()){                                // Comprobamos si los ficheros se han abierto
      if(f2.is_open()){
          while(getline(f1,linea,' ')){          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              f2 << linea << ' ';               // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(f1,linea, ' ');
              f2 << linea << ' ';               //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, ' ');
              f2 << linea << ' ';
              getline(f1,linea, '\n');           //Finaliza la linea del fichero
              f2 << linea <<endl;

        }

            secundario.close();                               // Cerramos el fichero de escritura
            cout<<"Se realizó correctamente el backup"<<endl;

    }

    else{                                             // Si no se abre el fichero de escritura, aparece un mensaje de error

            cout<<"No se realizó el backup correctamente"<<endl;
    }

            principal.close();                                  // Cerramos el fichero de lectura
  }
    else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

            cout<<"El fichero no se abrió correctamente"<<endl;
    }
  }



//CargarBackupAlumnos
//Carga una copia de seguridad de BackupAlumnos.bin

void Profesor:: CargarBackupAlumnos(){
ifstream f1;                                    //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
ofstream f2;
string linea;
principal.open("BackupAlumnos.bin", ios::in | ios::binary);              //Abrimos los ficheros, ambos en binario
secundario.open("Clase.bin", ios::out | ios:: binary);

  if(principal.is_open()){                                         // Comprobamos si los ficheros se han abierto
    if(secundario.is_open()){
     while(getline(f1,linea,' ')){                          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
            f2 << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
            getline(f1,linea, ' ');
            f2 << linea << ' ';                             //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
            getline(f1,linea, ' ');
            f2 << linea << ' ';
            getline(f1,linea, ' ');
            f2 << linea << ' ';
            getline(f1,linea, ' ');
            f2 << linea << ' ';
            getline(f1,linea, ' ');
            f2 << linea << ' ';
            getline(f1,linea, ' ');
            f2 << linea << ' ';
            getline(f1,linea, '\n');                       //Finaliza la linea del fichero
            f2 << linea <<endl;

        }

    f2.close();                                         // Cerramos el fichero de escritura
    }
    else{                                               // Si no se abre el fichero de escritura, aparece un mensaje de error

      cout<<"No se cargó el backup correctamente"<<endl;
    }
    f1.close();                                  // Cerramos el fichero de lectura
    }

    else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

      cout<<"El fichero no se abrió correctamente"<<endl;
    }
  }



  //CargarBackupProfesores
  //Carga una copia de seguridad de BackupAlumnos.bin

  void Profesor:: CargarBackupProfesores(){
  ifstream principal;                                    //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
  ofstream secundario;
  string linea;
  principal.open("BackupProfesores.bin", ios::in | ios::binary);              //Abrimos los ficheros, ambos en binario
  secundario.open("Profesores.bin", ios::out | ios:: binary);

    if(principal.is_open()){                                         // Comprobamos si los ficheros se han abierto
      if(secundario.is_open()){
        while(getline(principal,linea,' ')){                          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
              secundario << linea << ' ';                             // Escribimos lo que hay en linea en el fichero, junto a un espacio
              getline(principal,linea, ' ');
              secundario << linea << ' ';                             //Realizamos esto hasta que finalice la linea del fichero que estamos leyendo
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, ' ');
              secundario << linea << ' ';
              getline(principal,linea, '\n');                       //Finaliza la linea del fichero
              secundario << linea <<endl;

          }
      secundario.close();                                         // Cerramos el fichero de escritura
      }
      else{                                               // Si no se abre el fichero de escritura, aparece un mensaje de error

        cout<<"No se cargó el backup correctamente"<<endl;
      }
      principal.close();                                  // Cerramos el fichero de lectura
      }

      else{                                               // Si no se abre el fichero de lectura, aparece un mensaje de error

        cout<<"El fichero no se abrió correctamente"<<endl;
      }
    }



// menuCoordinador
// Imprime por pantalla las opciones que puede elegir en el programa en caso de ser Coordinador
void Profesor:: menuCoordinador(){
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"1. Insertar Alumno"<<endl;
  cout<<"2. Mostrar Alumno"<<endl;
  cout<<"3. Modificar Alumno"<<endl;
  cout<<"4. Borrar Alumno"<<endl;
  cout<<"5. Mostrar todos los alumnos"<<endl;
  cout<<"6. Modificar grupo"<<endl;
  cout<<"7. Dar de Alta un profesor"<<endl;
  cout<<"8. Dar de Baja un profesor"<<endl;
  cout<<"9. Guardar Backup"<<endl;
  cout<<"10. Cargar Backup"<<endl;
  cout<<"11. Borrar todos los alumnos"<<endl;
  cout<<"12. Mostrar todos los profesores"<<endl;
  cout<<"0. Salir del sistema"<<endl;
}


// menuAyudante
// Imprime por pantalla las opciones que puede elegir en el programa en caso de ser Ayudante
void Profesor:: menuAyudante(){               //Funciona
  cout<<"Seleccione una opcion"<<endl<<endl;
  cout<<"1. Insertar Alumno"<<endl;
  cout<<"2. Mostrar Alumno"<<endl;
  cout<<"3. Modificar Alumno"<<endl;
  cout<<"4. Borrar Alumno"<<endl;
  cout<<"5. Mostrar todos los alumnos"<<endl;
  cout<<"6. Modificar grupo"<<endl;
  cout<<"0. Salir del sistema"<<endl;

}



//AccederSistema
// Permite al usuario acceder al sistema mediante su usuario y credencial, ambas introducidas por teclado
int Profesor:: AccederSistema(string Usuario, string Credencial){

string linea;                               //Declaramos un fichero de lectura y un string para recorrerlo
  ifstream entrada;
  entrada.open("Profesores.bin", ios::in| ios::binary);       //Abrimos el fichero en binario
    if(entrada.is_open()){                                    // Comprobamos si se ha abierto el fichero
      while(getline(entrada,linea, ' ')){                     // Si el fichero se abre,  leemos hasta el primer espacio y lo guardamos en la variable linea
            getline(entrada,linea, ' ');                      // Realizaremos esto hasta que lea el usuario en la linea del fichero
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');
            getline(entrada,linea, ' ');

              if(linea==Usuario){                         // Si línea es igual al usuario introducido, vuelve a leer hasta el siguiente espacio

                getline(entrada,linea, ' ');

                  if(linea==Credencial){                  // Si linea es igual a la credencial introducida, vuelve a leer hasta el siguiente espacio

                      getline(entrada,linea, '\n');

                        if(atoi(linea.c_str())==1){       // Transformamos línea, que es de tipo string, a un entero, y si línea es igual 1, cargamos la funcion menuCoordinador()

                            menuCoordinador();

                            return 1;
                        }

                        else{                           // Si linea no es igual a 1, cargamos la función menuAyudante()

                            menuAyudante();

                            return 0;
                        }
                  }
              }
      else{                                           // Si el usuario introducido o la credencial no son iguales a las del fichero, no accede al menú

          getline(entrada,linea, '\n');

        }
      }
    }
}


//MostrarTodosProfesores
// Funcion que muestra todos los profesores que hay en el sistema
void Profesor:: MostrarTodosProfesores(){
  ifstream entrada;
  entrada.open("Profesores.bin", ios::in| ios::binary);       //Abrimos el fichero en binario
    if(entrada.is_open()){                                    // Comprobamos si se ha abierto el fichero
      while(getline(entrada,linea, ' ')){                     // Si el fichero se abre,  leemos hasta el primer espacio y lo guardamos en la variable linea
            cout<<linea<<' ';                                 // Imprimimos por pantalla la variable linea
          getline(entrada,linea, ' ');
            cout<<linea<<' ';                                 // Realizamos estos pasos hasta que lleguemos al rol del profesor que estamos leyendo
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, ' ');
            cout<<linea<<' ';
          getline(entrada,linea, '\n');
              if(atoi(linea.c_str())==1){                   // Si el rol del profesor es igual a 1, imprimimos "Coordinador" por pantalla
                cout<<"Coordinador"<<endl;
              }
              else{
                  cout<<"Ayudante"<<endl;                   // Si el rol del profesor es igual a 0, imprimimos "Ayudante" por pantalla
              }


        }
        entrada.close();                                  // Cerramos el fichero de entrada
      }
      else{
          cout << "El fichero no se abrió correctamente "<<endl;          // Si no se abre el fichero de lectura, aparece un mensaje de error
      }
  }




void Profesor:: BajaProfesor(string DNI){
  ifstream principal;         //Declaramos un fichero de lectura, un fichero de salida y un string para leer los datos
  ofstream secundario;
  string linea;
  principal.open("Alumnos.bin", ios::in | ios::binary);                 //Abrimos los ficheros, ambos en binario
  secundario.open("BackupAlumnos.bin", ios::out | ios:: binary);

    if(principal.is_open()){                                // Comprobamos si los ficheros se han abierto
        if(secundario.is_open()){
            while(getline(principal,linea,' ')){          //Si el fichero se abre, leemos hasta el primer espacio y lo guardamos en la variable linea.
          if(linea==DNI){                                 // Si la variable linea es igual al DNI del profesor que queremos dar de baja, recorre la linea hasta el final
              getline(entrada,linea,'\n');
          }
          else{                                           // Si la variable linea es distinta al DNI, escribimos dicha variable en un fichero secundario
              secundario<< linea <<' ';
            getline(entrada,linea,' ');                   // Leemos hasta el siguiente espacio y lo guardamos en la variable linea
              secundario << linea << ' ';
            getline(entrada,linea, ' ');                  //Realizamos esto hasta el final de la linea
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea <<' ';
            getline(entrada,linea, ' ');
              secundario << linea << ' ';
            getline(entrada,linea,'\n');
              secundario <<linea << endl;
          }
        }
      }
          else{                                            // Si no se abre el fichero secundario, se mostrará un mensaje de error
              cout<<"No se pudo dar de baja al profesor"<<endl;
          }

      entrada.close();                                    // Cerramos los ficheros
      secundario.close();
      rename("Temporal.bin","Profesores.bin");            // Renombramos el fichero secundario con el nombre del fichero principal
    }
      else{
            cout<<"Error al abrir el fichero"<<endl;
    }
}



//AltaProfesor
//Funcion que introduce los datos de un profesor en el sistema
void Profesor:: AltaProfesor(string DNI,string Nombre,string Apellido1, string Apellido2, int Edad, string Email, string Usuario, string Credencial, int Rol){      // Funciona
    string linea;                                               //Declaramos un fichero de lectura y un string para leer datos
    ifstream entrada;
    entrada.open("Profesores.bin", ios::in| ios::binary);       // Abrimos el fichero en binario
      if(entrada.is_open()){                                    // Comprobamos si se ha abierto el fichero
      entrada.seekg(0,entrada.end);                             // Colocamos el cursor al principio del fichero

            entrada << DNI << ' ';                              // Introducimos en el fichero las variables introducidas al principio de la funcion
            entrada << Nombre << ' ';
            entrada << Apellido1 << ' ';
            entrada << Apellido2 << ' ';
            entrada << Edad << ' ';
            entrada << Email << ' ';
            entrada << Usuario << ' ';
            entrada << CAgenda << ' ';
            entrada << Rol << ' ';

      }
      else{
          cout<<"Error al abrir el fichero"<<endl;
      }
}


/*
void Profesor::BorrarTodosProfesores(){
  ofstream entrada;
  ifstream secundario;
  entrada.open("Temporal.bin",ios::out| ios::binary);
  secundario.open("Profesores.bin",ios::in| ios::binary);
  if(entrada.is_open()){
    if(secundario.is_open()){
          rename("Temporal.bin","Profesores.bin");
        secundario.close();
    }
    else{
        cout<<"No se borraron los alumnos"<<endl;
    }
    entrada.close();
  }
    else{
      cout<<"El fichero no se abrió correctamente"<<endl;
  }
}
*/
