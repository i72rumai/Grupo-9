//Grupo.h

#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Grupo{  // Clase Grupo
private: //Parte privada
    string liderg_;
    string nmiembros_;
    string numero_;

public: // Parte publica
Grupo(){};// Constructor

  Grupo(string liderg, string numero, string nmiembros=0)// Declaramos las variables del constructor
  {
    liderg_=liderg; // Se igualan las variables privadas con las del constructor
    nmiembros_=nmiembros;
    numero_=numero;
  };

	inline void setNumero(string numero){numero_=numero;};
	inline string getNumero(){return numero_;};

	inline void setLiderg(string liderg){liderg_=liderg;};
	inline string getLiderg(){return liderg_;};

	inline void setNmiembros(string nmiembros){nmiembros_=nmiembros;};
	inline string getNmiembros(){return nmiembros_;};

//FUNCIONES
void BorrarGrupo(int numero);
void MostrarGrupo(int numero);
int ContarMiembros(int numero);
void ModificarIntegrantes(string DNI, int numero,int nMiembros);
void ModificarLider(string DNI,int numero);
};

#endif
