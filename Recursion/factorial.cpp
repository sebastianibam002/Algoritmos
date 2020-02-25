#include <iostream>
using namespace std;

int factorial(int n)
{
  int result = 1;
  for(int i = 1; i<= n; i++)
    {
      result *= i;
    }

  return result;
  
}

//recursivo

int factorialR(int n)
{

  if(n == 0)
    //Paso base retorna un
    return 1;
  else
    //Reduccion, ir restandole uno es 
    return n* factorial(n-1);
  //llamada iterativa
  
}



int main()
{

  cout<<"factorial sin recursion es: "<<factorial(9)<<endl;
  return 0;
}
