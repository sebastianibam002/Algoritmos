#include <iostream>
#include <map>
using namespace std;


void printMap(map<int, int> miMapa)
{

  cout<<"Keys:   ";
  int contador = 0;
  
  for(unsigned int i = 0; i < miMapa.size(); i++)
    {
      contador += 1;
      cout<<contador<<" ";
      
    }
  cout<<endl;

  contador = 0;
  cout<<"Values: ";
  
  for(unsigned int i = 0; i < miMapa.size(); i++)
    {
      contador += 1;
      cout<< miMapa[i]<<" ";
      //cout<<"hey"<<contador<<"//";
      
    }
  cout<<endl;
  
}

map<int, int> collatz(int pHasta)
{
  int contador = 0;
  map<int, int> retorno;
  while(true)
    {
      if(pHasta == 1)
	{
	  //cout<<"1" << " ";
	  retorno[contador] = 1;
	  return retorno;
	}
      else if(pHasta %2 == 0)
	{
	  retorno[contador] = pHasta;
	  pHasta /= 2;
	  //cout<< pHasta<< " ";
	  
	}
      else
	{
	  retorno[contador] = pHasta;
	  pHasta = pHasta*3 + 1; 
	  //cout<<pHasta<<" ";
	  
	}

      contador += 1;
    }
}

int main()
{
  map<int, int> mapa = collatz(6);
  printMap(mapa);
  //collatz(6) = ;
  return 0;
}
