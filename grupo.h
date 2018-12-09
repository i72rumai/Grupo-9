//grupo.h
//Esta clase recoge los datos de los grupos de la base de datos

#ifndef GRUPO_H
#define GRUPO_H
#include <iostream>
#include <string>

class Grupo
{
  private:
    int numero_;
    std::string liderg_;
    int nmiembros_;
    std::string miembros_[];
  public:
    Grupo(int numero, std::string liderg="", int nmiembros=1, std::string miembros={""})
      {
        numero_=numero;
      };

    inline void setNumero(int numero){numero_=numero;};
    inline int getNumero();

    inline void setLiderg(std::string liderg){liderg_=liderg;};
    inline std::string getLiderg(){return liderg_;};

    inline void setNMiembros(int nmiembros){nmiembros_=nmiembros;};
    inline int getNMiembros(){return nmiembros_;};

};

#endif
