#include <iostream>
#include "vetor2d.h"

int main(){
  Vetor2d v2, v3, v4;

  v2.setX(3);  v2.setY(4);
  v3.setX(-1); v3.setY(10);

  // produto escalar
  float result;
  result = v2+v3; // + -> .operator+()
  std::cout << "escalar = " << result << std::endl;

  // produto POR escalar
  v4 = v2*2;
  std::cout << "(" << v4.getX() << "," << v4.getY()
            << ")" << std::endl;
  return 0;
}
