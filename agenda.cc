//agenda.cc
//Contiene las funciones de la clase agenda

#include "grupo.h"
#include "agenda.h"

bool Agenda::BuscarAlumno(string dni)
{
  string linea; //Recorre el fichero
  ifstream f; //Declaramos el fichero

  f.open("clase.bin", ios::in | ios::binary);    //  Abrimos el fichero binario

  if(f.is_open())
  {
    while(getline(f,linea, ' '))
    {
	if(linea==dni)
	{
	  cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, ' ');
          cout<<linea<<' ';
          getline(f,linea, '\n');
	  cout<<linea<<endl;
	  f.close();
	  return true;
        }

        getline(f,linea,'\n');
    }
    f.close();
    return false;
  }
  //Comprobación de seguridad
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit(-1);
  }
}

void Agenda::ModificarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, string fechanac, string lider, string grupo)
{
   string  linea;   //Variable que recorre el fichero

   ifstream f;    //Fichero principal donde están todos los alumnos
   ofstream f2;   //Fichero temporal

   //Apertura de ficheros
   f.open("clase.bin",ios::in|ios::binary);
   f2.open("temporal.bin", ios::out | ios::binary);

   if(f.is_open() && f2.is_open())
   {
	while(getline(f,linea, ' '))
	{
	  if(linea==dni)
	  {
		f2 << dni <<' ';
		f2 << ApellidosNombre <<' ';
		f2 << telefono <<' ';
                f2 << email <<' ';
                f2 << dpostal <<' ';
                f2 << fechanac <<' ';
                f2 << lider <<' ';
                f2 << grupo <<'\n';
                getline(f,linea,'\n');
           }

           else
	   {
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea <<' ';
                getline(f,linea, ' ');
                f2 << linea << ' ';
                getline(f,linea,'\n');
                f2 <<linea << endl;
          }

	  f.close(); //Cerramos los ficheros
	  f2.close();
          remove("clase.bin"); //Eliminamos el fichero principal
          rename("temporal.bin", "clase.bin"); //Renombramos el fichero temporal y lo hacemos principal
      }

    }
    //Si falla al abrir los ficheros
    else
    {
        cout<<"Error al abrir el fichero"<<endl;
        exit(-1);
    }
}


void Agenda::BorrarAlumno(string dni)
{
  string linea;   //Declaramos un string para leer el fichero

  ifstream f;    //Declaramos un fichero de lectura
  ofstream f2;    //Declaramos un fichero de salida

  f.open("clase.bin", ios::in | ios::binary);   //Abrimos los ficheros
  f2.open("temporal.bin", ios::out | ios::binary);

  if(f.is_open() && f2.is_open())
  {
       while(getline(f,linea, ' '))
       {
	   //Si encuentra al alumno, no lo introduce y salta a la siguiente línea
           if(linea==dni)
	   {
               getline(f,linea,'\n');
           }

           else
	   {
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea <<' ';
               getline(f,linea, ' ');
               f2 << linea << ' ';
               getline(f,linea,'\n');
               f2 <<linea << endl;
           }
	   f.close();
	   f2.close();
           remove("clase.bin");
           rename("temporal.bin","clase.bin");
       }
  }
  //Comprobación de seguridad
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit (-1);
  }
}

void Agenda::InsertarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, string fechanac, string lider, string grupo)
{
  string linea;   //Declaramos un string para leer el fichero

  fstream f;    //Declaramos un fichero binario de lectura
  f.open("clase.bin", ios::in | ios::out | ios::binary);    //Abrimos el fichero binario

  if(f.is_open())
  {
    f.seekg(0,f.end);   //Posiciona el cursor en el último elemento para añadir el nuevo alumno al final

    // Se insertan los datos del alumno
    f << dni <<' ';
    f << ApellidosNombre <<' ';
    f << telefono <<' ';
    f << email <<' ';
    f << dpostal <<' ';
    f << fechanac <<' ';
    f << lider <<' ';
    f << grupo <<'\n';
   f.close();
  }
  //Comprobación de seguridad
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit (-1);
  }
}

void Agenda::MostrarBaseDatos()
{
  string linea; //Variable que recorre el fichero

  ifstream f;
  f.open("clase.bin", ios::in | ios::binary);

  if(f.is_open())
  {
    while(getline(f,linea, ' '))
    {
	cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, ' ');
        cout<<linea<<' ';
        getline(f,linea, '\n');
        cout<<linea<<endl;
     }
  f.close();
  }
  //Comprobación de seguridad
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
    exit(-1);
  }
}

void Agenda::CopiaSeguridad()
{
  string linea;

  ifstream f; //Fichero original
  ofstream f2; //Fichero copia de seguridad

  f.open("clase.bin", ios::in | ios::binary);
  f2.open("copiaseguridad.bin", ios::out | ios::binary);

  if(f.is_open() && f2.is_open())
  {
    while(getline(f,linea, ' '))
    {
	f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea <<' ';
        getline(f,linea, ' ');
        f2 << linea << ' ';
        getline(f,linea,'\n');
        f2 <<linea << endl;
    }
    f.close();
    f2.close();
  }
  //Comprobación de seguridad
  else
  {
    cout<<"ERROR en la creación de la copia de seguridad"<<endl;
  }
}

void Agenda::BorrarBaseDatos()
{
    ifstream f;   //Declaramos un fichero de lectura y uno de escritura
    ofstream f2;
    f.open("clase.bin",ios::out| ios::binary);   //Abrimos los ficheros binarios
    f2.open("nuevo.bin",ios::in| ios::binary);

    if(f.is_open() && f2.is_open())
    {
      rename("nuevo.bin", "clase.bin");
      f.close();
      f2.close();   //Se cierra el fichero
    }
    else
    {
      cout<<"ERROR en la apertura de ficheros"<<endl;
    }
  }
