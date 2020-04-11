#include "taller8Ej1.hpp"
using namespace std;
int main()
{

  Racional numero;
  
  numero.set_numerador(2);
  numero.set_denominador(6);
  cout<<numero<<endl;

  Racional second(1,3);
  

  cout<<numero<<endl;

  cout<<"prueba dos"<<endl;
  Racional resultado = numero + second;
  cout<<numero<< "+"<<second<<"="<<resultado<<endl;
 
    

  return  0;
}
