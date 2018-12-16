
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
ifstream origen("clase.bin", ios::binary);
ofstream destino("Copiaseguridad.bin",ios::binary);

char byte;
while( !origen.eof() && !origen.fail() )
{
origen.read((char *) &byte, sizeof(char));
 if (origen.good())
  {
destino.write((char *) &byte, sizeof(char));
  }
}
destino.close();
origen.close();
return 0;
}
