#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  // construtor default
  Vetor();
  // construtor com argumentos
  Vetor(float mx, float my);
  // construtor de copia
  Vetor(const Vetor& v);

  // destrutor
  ~Vetor();
  Vetor soma(Vetor v1);
  void print();
};

#endif // VETOR_H
