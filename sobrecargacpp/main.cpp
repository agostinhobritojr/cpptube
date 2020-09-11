#include <stdio.h>
#include <iostream>

int imprime(int x){
  std::cout << x << std::endl;
}

int imprime(double x){
  std::cout << x << std::endl;
}

int imprime(char *x){
  std::cout << x << std::endl;
}

int main(){
  imprime(3);
  imprime(4.5);
  imprime("Agostinho");
  return 0;
}
