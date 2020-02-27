#include <iostream>
#include "functions.hpp"
using namespace std;

int fibonacci(int n)
{
  if(n < 2)
    {
      return n;
    }
  else
    {
      return fibonacci(n- 1) + fibonacci(n-2);
    }
}



int additiveSeq(int f0, int f1, int n)
{
  if(n == 0) return f0;
  else if(n == 1) return f1;
  else
    {
      return additiveSeq(f1, f0+f1, n-1);
    }
}

int secFib(int n)
{
  return additiveSeq(0,1,n);
}
int main()
{

  double momentoUno = gettime();
  int resultado = fibonacci(64);
  double momentoDos = gettime();
  cout<<"numero: "<< resultado<<endl;
  cout<<"tiempo: "<<momentoDos - momentoUno<<endl;
  //forma mas eficiente
  double momentoTres = gettime();
  int resultadoDos = secFib(64);
  double momentoCuatro = gettime();
  cout<<"numero: "<<resultadoDos<<endl;
  cout<<"tiempo: "<<momentoCuatro - momentoTres<<endl;
  return 0;
}
