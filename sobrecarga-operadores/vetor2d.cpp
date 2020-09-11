#include "vetor2d.h"

void Vetor2d::setX(float x_){
 /* if(x_ > 0){
    x = x_;
  }else{
    x = 0;
  }
  */
  x = x_;
}

void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getX(void){
  return x;
}

float Vetor2d::getY(){
  return y;
}

float Vetor2d::operator *(Vetor2d v0){
  float escalar;
  escalar = x*v0.x + y*v0.y;
  return escalar;
}

Vetor2d Vetor2d::operator *(float a){
  Vetor2d ret;
  ret.x = x*a; ret.y = y*a;
  return ret;
}






