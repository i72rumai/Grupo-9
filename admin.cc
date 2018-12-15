//FUNCION DE ADMINISTRADOR
//Creador de claves de profesor

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
  string codigo;
  string permisos;
  string code;

  cout<<"Introduce un código de 4 dígitos"<<endl;
  cin>>codigo;
  cout<<"Introduce los permisos, 1 COORDINADOR 0 AYUDANTE"<<endl;
  cin>>permisos;

  code=codigo+permisos;

  ofstream f("permisos.bin", ios::binary);

  if(f.is_open())
  {
   // f.write((string)code, sizeof(outfile<<code));
    f<<code;
    f.close();
  }
  else
  {
    cout<<"ERROR en la apertura del fichero"<<endl;
  }
}
