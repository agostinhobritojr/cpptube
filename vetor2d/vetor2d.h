// diretiva de compilacao condicional
#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x,y;
public:
  void setX(float x_);
  void setY(float y_);
  float getX(void);
  float getY(void);
  // sobrecargas de produto
  float produto(Vetor2d v0); // produto escalar
  Vetor2d produto(float a); // produto POR escalar
  // sobrecargas diferenciadas apenas
  // pelo tipo de retorno nao permitidas em C++
  //
  //bool produto(Vetor2d v1);
};

#endif // VETOR2D_H

// Vetor3d (vetor3d.h)
// #include "vetor2d.h"

// main (main.cpp)
// #include "vetor2d.h"
// #include "vetor3d.h"

// tabela de simbolos
// VETOR2D_H









