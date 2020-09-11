// diretiva de compilacao condicional
#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x,y;
public:
  void setX(float x_);
  void setY(float y_);
  float getX(void);
  float getY(void);
  // sobrecargas de produto
  float operator*(Vetor2d v0); // produto escalar
  Vetor2d operator*(float a); // produto POR escalar

};

#endif // VETOR2D_H











