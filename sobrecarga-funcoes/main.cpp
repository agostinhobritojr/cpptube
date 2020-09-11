#include <iostream>

int imprime(int x){
  std::cout << "print int: " << x << "\n";
}
int imprime(double x){
  std::cout << "print double: " << x << "\n";
}
int imprime(char *x){
  std::cout << "print char*: " << x << "\n";
}

int main()
{
  imprime(3);
  imprime(4.5);
  imprime("Agostinho");
  return 0;
}
