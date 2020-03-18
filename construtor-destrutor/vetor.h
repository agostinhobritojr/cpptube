#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  // metodo construtor default (padrao)
 // Vetor();

  // metodo construtor com argumentos
  Vetor(float mx=0, float my=0);

  // destrutor
  ~Vetor();

  void setX(float mx);
  void setY(float my);
  float getX(void);
  float getY(void);
};

#endif // VETOR_H
