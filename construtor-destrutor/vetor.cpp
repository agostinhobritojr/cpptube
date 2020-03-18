#include "vetor.h"
#include <iostream>

using namespace std;

/*Vetor::Vetor(){
  x = y = 0;
  cout << "construtor padrao" << endl;
}*/

Vetor::Vetor(float mx, float my){
  x = mx; y = my;
  cout << "construtor com argumentos" << endl;
}

Vetor::~Vetor(){
  cout << "destrutor da classe" << endl;
}

void Vetor::setX(float mx){
  x = mx;
}

void Vetor::setY(float my){
  y = my;
}

float Vetor::getX(){
  return x;
}

float Vetor::getY(){
  return y;
}
