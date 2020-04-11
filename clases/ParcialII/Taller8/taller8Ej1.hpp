#ifndef _TALLER8EJ1_HPP_
#define _TALLER8EJ1_HPP_

#include <stdexcept>
#include <iostream>
using namespace std;
class Racional
{
private:
  int numerador;
  int denominador;

  

public:
  Racional();//constructor sin parametros
  Racional(int p_num, int p_den);
  ~Racional();//destructor
  int get_numerador();
  int get_denominador();
  void set_numerador(int p_valor);
  void set_denominador(int p_valor);
  void print();
  Racional operator=(Racional p_new);
  //le voy a sumar un entero a la fraccion
  Racional operator+=(Racional p_valor);
  void simplificar();
  
  
};



//se definen los metodos afuera para que sean simetricos
ostream& operator<<(ostream& os, Racional& a);
Racional operator+(Racional mi_Valor, Racional p_valor);

#endif


