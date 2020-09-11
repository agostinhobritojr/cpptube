#include <stdio.h>

int imprime(int x){
  printf("%d\n", x);
}

int imprime(double x){
  printf("%lf\n", x);
}

int imprime(char *x){
  printf("%s\n", x);
}

int main(){
  imprime(3);
  imprime(4.5);
  imprime("Agostinho");
  return 0;
}
