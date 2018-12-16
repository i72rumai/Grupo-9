
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
ifstream temp("temporal.bin", ios::binary);// creo el temporal
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ESTA PARTE CREO QUE SE PUEDE DESCARTAR PORQUE REALMENTE NO SE HACE NADA
ficherobinario.open("clase.bin"); // se supone que ha sido creado anteriormente, así que solo lo abro
temp.open("temporal.bin");  //abro el temporal
ficherobinario.close(); //los cierro
temp.close();
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
remove("clase.bin");//elimino el principal
rename("temporal.bin","clase.bin");//le cambio el nombre al temporal por el principal
}
