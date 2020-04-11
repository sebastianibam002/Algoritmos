//una funcion recursiva que toma un entero mayor o igual a cero y debe retornar la suma de cada uno de sus digitos
#include <iostream>
using namespace std;


int digit_sum(int p_valor)
{
  //cout<<(p_valor)/10<<endl;
  
 
  if(p_valor == 0)
    {
      return 0;
    }
  else
    {
      //resultado += p_valor %10;
     
      //cout<<"resultado: " <<resultado<<endl;
      return  p_valor%10 + digit_sum(p_valor/10);
      
    }
}

int main()
{
  cout<<digit_sum(1)<<endl;;
  return 0;
}
