//profesor.cc

#include "profesor.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

Profesor::Profesor()
{
  CAgenda_;
  rol_;
}

void Profesor::Buscaralumno()
{
  fstream ficherobinario;
  char marca[3];

  ficherobinario.open("alumnos.bin", ios::in | ios::binary);//compruebo si lo he podido abrir

  if(ficherobinario.is_open())
  {
    ficherobinario.seekg()
  }
}
int Dados::getDado1()
{
  contador1_++;
  return d1_;
}

int Dados::getDado2()
{
  contador2_++;
  return d2_;
}

bool Dados::setDado1(int x)
{
  if(x<7 && x>0)
  {
    d1_=x;
    if(i1_==-1)
    {
      i1_=0;
      moverVector1();
    }
    ultimos1_[i1_]=d1_;
    i1_--;
    return true;
  }

    return false;

}

bool Dados::setDado2(int x)
{
  if(x<7 && x>0)
  {
    d2_=x;
    if(i2_==-1)
    {
      i2_=0;
      moverVector2();
    }
    ultimos2_[i2_]=d2_;
    i2_--;
    return true;
  }

    return false;

}

int Dados::getSuma()
{
  return d1_+d2_;
}

int Dados::getDiferencia()
{
  if(d1_>d2_)
  {
  return d1_-d2_;
  }
  if(d1_<d2_)
  {
  return d2_-d1_;
  }
  if(d1_==d2_)
  {
    return d1_-d2_;
  }
}

int Dados::getLanzamientos1()
{
  return contador1_;
}

int Dados::getLanzamientos2()if(d1_>d2_)
  {
  return d1_-d2_;
  }
  if(d1_<d2_)
  {
  return d2_-d1_;
  }
}
{
  return contador2_;
}

int Dados::getMedia1()
{
  if(media1_=0)
  {
    return 0;
  }
  else
  {
    media1_=(media1_/contador1_);
  }
  return media1_;
}

int Dados::getMedia2()
{
  if(media2_=0)
  {
    return 0;
  }
  else
  {
    media2_=media2_/contador2_;
  }
  return media2_;
}

void Dados::getUltimos1(int v1[5])
{
  int i;
  for(i=0; i<5; i++)
  {
    v1[i]=ultimos1_[i];
  }

}

void Dados::getUltimos2(int v2[5])
{
  int i;
  for(i=0; i<5; i++)
  {
    v2[i]=ultimos2_[i];
  }

}

void Dados::moverVector1()
{
  ultimos1_[4]=ultimos1_[3];
  ultimos1_[3]=ultimos1_[2];
  ultimos1_[2]=ultimos1_[1];
  ultimos1_[1]=ultimos1_[0];
  ultimos1_[0]=-1;
}

void Dados::moverVector2()
{
  ultimos2_[4]=ultimos2_[3];
  ultimos2_[3]=ultimos2_[2];
  ultimos2_[2]=ultimos2_[1];
  ultimos2_[1]=ultimos2_[0];
  ultimos2_[0]=-1;
}
