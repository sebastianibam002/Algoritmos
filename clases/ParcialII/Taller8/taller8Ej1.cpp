
#include "taller8Ej1.hpp"

Racional::Racional()
{
  numerador =  0;
  denominador = 1;
}

Racional::Racional(int p_num, int p_dem)
{
  if(p_dem == 0)
    {
      throw std::runtime_error("the denominator can't be 0");
    }
  else
    {
      numerador = p_num;
      denominador = p_dem;
    }
}

Racional::~Racional(){}

int Racional::get_numerador()
{
  return numerador;
}

int Racional::get_denominador()
{
  return denominador;
}

void Racional::set_numerador(int p_valor)
{
  numerador = p_valor;
}

void Racional::set_denominador(int p_valor)
{
  if(p_valor == 0)
    {
      throw std::runtime_error("the denominator can't be 0");
    }
  else
    {
      denominador = p_valor;
    }
}

void Racional::print()
{
  std::cout<<"["<<numerador<<"]"<<std::endl<<"["<<denominador<<"]"<<std::endl;
}

Racional Racional::operator=(Racional p_new)
{
  numerador = p_new.get_numerador();
  denominador = p_new.get_denominador();
  return p_new;
  
  
}


//encontrar el gcd con algoritmo de euclides
int gcd(int num, int den)
{
  long gcd, tmp, rest;
  gcd = abs(num);
  tmp = den;
  while(tmp > 0)
    {
      rest = gcd % tmp;
      gcd = tmp;
      tmp = rest;
    }
  return gcd;
}


//simplificacion

void Racional::simplificar()
{
  //encuentra el gcd si lo hay y luego divide ambos valores por este

  int value = gcd(numerador, denominador);
  if(value !=  0)
    {
      numerador = numerador/ value;
      denominador = denominador/value;
    }
  

}




//suma con otro racional
Racional Racional::operator+=(Racional p_valor)
{
  
  numerador *= p_valor.get_denominador();
  //cout<<"numerador: "<<numerador<<" denominador: "<<denominador<<endl;
  p_valor.set_numerador(denominador* p_valor.get_numerador());
  numerador = numerador + p_valor.get_numerador();
  denominador *= p_valor.get_denominador();
  //cout<<"numerador: "<<numerador<<" denominador: "<<denominador<<endl;
  
  simplificar();
  
  this -> numerador = numerador;
  this-> denominador = denominador;
  return *this;
}



//operador para el cout
ostream& operator<<(ostream& os, Racional& a)
{
  os << "(" << a.get_numerador()<<"/"<< a.get_denominador()<< ")";

  
  
  return os; 
}

Racional operator+(Racional mi_valor, Racional p_valor)
{
  Racional resultado;
  resultado.set_numerador((mi_valor.get_numerador()*p_valor.get_denominador()) + (mi_valor.get_denominador() * p_valor.get_numerador()));

  resultado.set_denominador(mi_valor.get_denominador()* p_valor.get_denominador());

  resultado.simplificar();


  return resultado;
}

