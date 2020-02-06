#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

long double aproxPi(unsigned int pLong)
{
  //esta funcion le ingresan como parametro el numero de terminos que quiere que tenga el usuaeio
  long double retorno = 0;
  bool negativo = false;
  pLong *= 2;
  for(unsigned int i = 0; i <= pLong; i++)
    {

      //cout<< "i%2: " << i << " : "<<i%2<<endl;
      if(i % 2 != 0)
	{
	  //significa que es impar ahora debo cambiar el signo
	  
	  if(negativo)
	    {
	      retorno -= 1/double(i);
	      cout<<i<< ":"<<1/double(i)<< ":"<<retorno<<endl;
	      negativo = false;
	      
	    }
	  else
	    {
	      retorno += 1/double(i);
	      cout<<i<< ":"<<1/double(i)<< ":"<<retorno<<endl;
	      negativo = true;
	    }
	  
	}
    }

  return 4*retorno;

}

int main()
{

  ofstream ofs("compute_pi.dat", ios::app);
  if(ofs.good())
    {
      string msg ="Numero De Terminos    |     Aproximacion      |  Diferencia con acos(-1) \n"; 
      ofs << msg;
      ofs << "-----------------------------------------------------------------------------------------";
      
      
      //para anadir cada una de las columnas
      for(unsigned int i = 0; i <= 20; i++)
	{
	  //comenzar a colocar los valores
	  long double valor = aproxPi(i);
	  string message = to_string(i)+ "          |"+to_string(valor) + to_string(valor - acos(-1))+ "\n"; 
	  ofs << message; 
	}
    }

  ofs.close();
  
  cout<<"hasta 4: "<< aproxPi(10000)<<endl;
  
}
