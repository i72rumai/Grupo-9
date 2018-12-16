//Grupo.cc
//Contiene las funciones de la clase grupo

#include "grupo.h"
#include "agenda.h"

//BuscarAlumno
//Busca un alumno en la base de datos, si existe lo muestra y retorna true, si no, retorna false
bool Agenda::BuscarAlumno(string dni)
{
  string linea; //Variable que lee cada dato del fichero binario
  ifstream f; //Declaramos el fichero

  f.open("Alumnos.bin", ios::in | ios::binary);    //  Abrimos el fichero binario

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

//Modificar alumno
//Crea un archivo secundario y traspasa todos los datos de un fichero a otro, si encuentra al alumno que se desea cambiar, se introducen sus datos
void Agenda::ModificarAlumno(string dni,string ApellidosNombre,string telefono, string email, string dpostal, string fechanac, string lider, string grupo)
{
   string  linea;   //Variable que lee cada dato del fichero

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

	  f.close(); //Cerramos ambos ficheros
	  f2.close();
          remove("clase.bin"); //Elimnamos el fichero original
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



//Borrar Alumno
//Busca un alumno por DNI y lo borra de la base de datos
void Agenda::BorrarAlumno(string dni)
{
  string linea;   //Declaramos un string para leer el fichero

  ifstream f;    //Declaramos un fichero de lectura
  ofstream f2;    //Declaramos un fichero de salida

  f.open("alumnos.bin", ios::in | ios::binary);   //Abrimos ambos ficheros
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




//Insertar Alumno
//Añade un nuevo alumno a la base de datos
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

//MostrarBaseDatos
//Muestra todos los alumnos de la base de datos
void Agenda::MostrarBaseDatos()
{
  string linea; //Variable que lee cada elemento del fichero

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

//CopiaSeguridad
//Crea una copia de seguridad de todos los alumnos de la base de datos
void Agenda::CopiaSeguridad()
{
  string linea;

  ifstream f; //Fichero original
  ofstream f2; //Fichero copia de seguridad

  f.open("clase.bin", ios::in | ios::binary);
  f.open("copiaseguridad.bin", ios::out | ios::binary);

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

//BorrarBaseDatos
//Borra todos los alumnos de la base de datos
void Agenda::BorrarBaseDatos()
{
    ifstream f;   //Declaramos un fichero de lectura y uno de salida
    ofstream f2;
    f.open("clase.bin",ios::out| ios::binary);   //Abrimos ambos ficheros binarios
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
