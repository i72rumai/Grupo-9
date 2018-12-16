//grupo.cc

#include "Grupo.h"
#include "Alumno.h"
#include "Agenda.h"
#include "Persona.h"

using namespace std;


void Grupo:: BorrarGrupo(int numero)
{

  Alumno aux;   //Variable auxiliar
  string lectura;   //Variable que recorre el fichero
  ifstream principal;   //Fichero lectura
  ofstream temporal;    //Fichero escritura
  principal.open("clase.bin", ios::in| ios::binary);    //Se abre el fichero principal
  temporal.open("Temporal.bin",ios::out|ios::binary);     //Se abre el fichero temporal
  int borrar;

  if(principal.is_open() && temporal.is_open())//Si los ficheros están abiertos se hace lo siguiente(Por si hay algún fallo al abrirlo)
    {
      //LECTURA
      while(getline(principal,lectura, ' '))
      {
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        temporal << lectura << ' ';
        getline(principal,lectura, ' ');
        //FIN LECTURA
        if(atoi(lectura.c_str())==numero)   //Borra el numero del grupo introducido
        {
          aux.setNumero(0);
          borrar=aux.getNumero();
          temporal<<borrar<<' ';
        }
        else
        {
          temporal << lectura << ' ';
        }
          getline(principal,lectura, '\n');
          temporal << lectura <<endl;
      }

      principal.close();// Se cierra el fichero principal
      temporal.close();// Se cierra el fichero temporal
      remove("clase.bin");
      rename("Temporal.bin", "clase.bin");//Cambiamos el nombre al temporal para que se convierta en el pricipal
    }

  }

    else// Si no se abre el fichero
    {
      cout<<"Error al abrir fichero"<<endl;
    }
}


void Grupo:: MostrarGrupo(int numero)
{
    string dni,ApellidosNombre,email,telefono,DPostal,FechaNac,grupo,lectura; // Declaración de variables
    ifstream principal; // Fichero lectura
    principal.open("clase.bin", ios::in| ios::binary);  //Se abre el fichero principal

      if(principal.is_open())    // Si el fichero está abierto se hace lo siguiente(Por si hay algún fallo al abrirlo)
      {
          //LECTURA
          while(getline(principal,dni, ' '))//Lee hasta el espacio y se almacena en dni
          {
            getline(principal,ApellidosNombre, ' ');// Lee hasta el espacio y se almacena en ApellidosNombre
            getline(principal,email, ' ');// Lee hasta el espacio y se almacena en email
            getline(principal,telefono, ' ');// Lee hasta el espacio y se almacena en telefono
            getline(principal,DPostal, ' '); // Lee hasta el espacio y se almacena en DPostal
            getline(principal,FechaNac, ' '); // Lee hasta el espacio y se almacena en FechaNac
            getline(principal,grupo,' '); // Lee hasta el espacio y se almacena en grupo
            getline(principal,lectura, '\n');// Lee hasta el espacio y se almacena en lectura
            //FIN LECTURA
            if(atoi(grupo.c_str())==numero)   // Miramos si el grupo introducido está ya en el fichero
            {
                //Imprimimos los datos del grupo
                cout<<dni<<" ";
                cout<<ApellidosNombre<<" ";
                cout<<email<<" ";
                cout<<telefono<<" ";
                cout<<DPostal<<" ";
                cout<<FechaNac<<" ";
                cout<<grupo<<" ";
                cout<<lectura<<endl;
            }
          }
            principal.close();//Se cierra el fichero principal
      }
        else      // Si no se abre el fichero
        {
          cout<<"Error al abrir el fichero"<<endl;
        }
}


int Grupo::ContarMiembros(int numero)
{

    string lectura; //Variable que recorre el fichero
    int nMiembros=0;    //Contará el numero de miembros que se hay en el fichero
    ifstream principal;   //Fichero principal
    principal.open("clase.bin", ios::in| ios::binary);    //Se abre el fichero principal

      if(principal.is_open())  //Si el fichero se abre se realiza lo siguiente
      {
        //LECTURA
        while(getline(principal,lectura, ' '))
        {
              getline(principal,lectura, ' ');
              getline(principal,lectura, ' ');
              getline(principal,lectura, ' ');
              getline(principal,lectura, ' ');
              getline(principal,lectura, ' ');
              getline(principal,lectura, ' ');
              //FIN LETCURA
              if(atoi(lectura.c_str())==numero)
              {
                  nMiembros++;//Si el grupo introducido está en el fichero, nMiembros aumenta
              }
              getline(principal,lectura,'\n');
        }
      principal.close();    //Se cierra el fichero principal
    }
  return nMiembros;   //Retorna el numero de miembros del grupo
}


void Grupo::ModificarIntegrantes(string DNI, int numero,int nMiembros)
{
  int eleccion;
  cout<<"1.Añadir integrante 2.Borrar integrante"<<endl;
  cin>>eleccion;
  if(eleccion==1)
  {
    //Añadir integrante
    Alumno aux;
    string lectura;   //Variable que recorre el fichero
    ifstream principal;   //Fichero principal
    ofstream temporal;    //Fichero temporal
    int añadir;
    principal.open("clase.bin", ios::in| ios::binary);    //Abrimos el fichero principal
    temporal.open("Temporal.bin", ios::out | ios::binary);//Abrimos el fichero temporal

    if(principal.is_open() && temporal.is_open())//Si los ficheros están abiertos se hace lo siguiente(Por si hay algún fallo al abrirlo)
    {
            if(nMiembros<=3) //Si los miembros del grupo son 3 o menos, se puede añadir el integrante
            {
                  while(getline(principal,lectura, ' '))
                  {
                    if(lectura==DNI) //Si el Dni introducido se encuentra en el fichero
                    {
                      //LECTURA
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      aux.setNumero(numero);
                      añadir=aux.getNumero(); //Añade al alumno
                      temporal<<añadir<<' ';
                      getline(principal,lectura, '\n');
                      temporal << lectura <<endl;
                      //FIN LECTURA
                      cout<<"¡Acción realizada con exito!"<<endl;//Mensaje exito
                    }

                    else
                    {

                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                        temporal << lectura << ' ';
                      getline(principal,lectura, '\n');
                        temporal << lectura <<endl;
                      cout<<"¡Acción realizada con exito!"<<endl;//Mensaje exito
                  }
                }
            }

            if(nMiembros>3)   //Si el numero de miembros es mayor que 3 no se añade más integrantes
            {
              cout<<"No se ha podido añadir más integranes, grupo lleno"<<endl;
            }
            principal.close();// Se cierra el fichero principal
            temporal.close();// Se cierra el fichero temporal
            remove("clase.bin");
            rename("Temporal.bin", "clase.bin");//Cambiamos el nombre al temporal para que se convierta en el pricipal
        }
            else  // Si no se abre el fichero
            {
              cout<<"Error al abrir el fichero"<<endl;
            }
      }
      if(eleccion==2)
      {
        //Borrar integrante
        Alumno aux;
        string lectura;   //Variable que recorre el fichero
        fstream principal;    //Fichero principal
        ofstream temporal;    //Fichero temporal
        int borrar;
        principal.open("clase.bin", ios::in | ios::binary);   //Abrimos ambos ficheros
        temporal.open("Temporal.bin",ios::out|ios::binary);

        if(principal.is_open() && temporal.is_open())//Si los ficheros están abiertos se hace lo siguiente(Por si hay algún fallo al abrirlo)
        {
          while(getline(principal,lectura, ' '))
          {
              if(lectura==DNI)  //Si el Dni introducido se encuentra en el fichero
              {
                      //LECTURA
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      temporal << lectura << ' ';
                      getline(principal,lectura, ' ');
                      aux.SetGrupo(0); //Borra al alumno del grupo
                      borrar=aux.GetGrupo();
                      temporal<<borrar<<' ';
                      getline(principal,lectura, '\n');
                      temporal << lectura <<endl;
                      //FIN LECTURA
                      }
                    else
                    {
                      temporal << lectura << ' ';
                      getline(principal,lectura, '\n');
                      temporal << lectura <<endl;
                    }
                }
                principal.close();// Se cierra el fichero principal
                temporal.close();// Se cierra el fichero temporal
                remove("clase.bin");
                rename("Temporal.bin", "clase.bin");//Cambiamos el nombre al temporal para que se convierta en el pricipal
              }

            }

              else{   //Si el fichero no se abre
                cout<<"El fichero no se abrió correctamente"<<endl;
              }
        }
        if(eleccion!=1 && eleccion!=2)
        {
          cout<<"No existe esa elección"<<endl;
        }
      }
}

   void Grupo:: ModificarLider(string DNI,int numero)
   {
      string lectura, p;    //Variable para recorrer los ficheros
      ifstream principal;//Fichero principal
      ofstream temporal;//Fichero temporal
      principal.open("clase.bin", ios::in|ios::binary);     //Se abre el fichero principal
      temporal.open("Temporal.bin", ios::out | ios::binary);// Se abre el fichero temporal
        if(principal.is_open() && temporal.is_open()){
          while(getline(principal,lectura,' '))
          {
              if(lectura==DNI)//Si el Dni introducido se encuentra en el fichero
              {
                //LECTURA
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura, ' ');
                  temporal << lectura << ' ';
                getline(principal,lectura,'\n');
                    p="True";
                    temporal << p <<endl;
                    //FIN LECTURA
              }

              else
              {
                //LECTURA
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
                temporal << lectura << ' ';
              getline(principal,lectura, ' ');
              //FIN LECTURA
                if(atoi(lectura.c_str())==numero)
                {
                  temporal << lectura << ' ';
                getline(principal,lectura,'\n');
                    p="False";
                    temporal << p <<endl;
                }
                else
                {
                  temporal << lectura << ' ';
                  getline(principal,lectura, '\n');
                  temporal << lectura << endl;

                }
              }
            }
          }
          else
          {
              cout<<"Error al modificar lider"<<endl;
              exit(-1);
          }
          principal.close();// Se cierra el fichero principal
          temporal.close();// Se cierra el fichero temporal
          remove("clase.bin");
          rename("Temporal.bin", "clase.bin");//Cambiamos el nombre al temporal para que se convierta en el principal
      }
                else
                {
                  cout<<"Error al abrir el fichero"<<endl;
                }
}
