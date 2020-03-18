#include <iostream>

using namespace std;

// passagem de parametro por referencia
// incluir '&' antes do nome da variavel
void funcao(int &x){
  cout << "end x = " << &x << endl;
  cout << "x = " << x << endl;
  x = 4;
  cout << "x = " << x << endl;
}

int main(){
  int y;
  y = 3;
  cout << "end y = " << &y << endl;
  cout << "y = " << y << endl;
  funcao(y);
  cout << "y = " << y << endl;
  return 0;
}
