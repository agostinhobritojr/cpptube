#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(){
  x = y = 0;
  cout << "Construtor padrao" << endl;
}

Vetor::Vetor(float mx, float my){
  x = mx; y = my;
  cout << "Construtor com argumentos" << endl;
}

Vetor::Vetor(const Vetor &v){
  x = v.x; y = v.y;
  cout << "Construtor de copia" << endl;
}

Vetor::~Vetor(){
  cout << "Destrutor" << endl;
}

Vetor Vetor::soma(Vetor v1){
  Vetor ret;
  ret.x = x+v1.x;
  ret.y = y+v1.y;
  return ret;
}

// (3,4)
void Vetor::print(){
  cout << "(" << x << "," << y << ")" << endl;
}
