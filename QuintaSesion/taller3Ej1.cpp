#include <iostream>
#include <vector>
using namespace std;

void imprimirVector(vector<unsigned int> pVector)
{

  for(unsigned int i = 0; i < pVector.size(); i++)
    {
      cout<<pVector[i]<<" ";
    }
  cout<<endl;
}
int encontrarMayor(vector<unsigned int>& pVector)
{

  unsigned int mayor = 0;
  for(unsigned int i = 0; i < pVector.size(); i++)
    {
      if(mayor > pVector[i])
	{
	  mayor = pVector[i];
	}
    } 

  return mayor;
  
}

void mandarAtras(vector<unsigned int> &pVector, int indice)
{
  
  pVector.push_back(encontrarMayor(pVector));
  pVector.erase(pVector.begin() + indice);
}

void organizador(vector<unsigned int>& pVector)
{

  int indiceMayor = 0;
  unsigned int mayor = 0;
  unsigned int hasta = pVector.size();
  for(unsigned int i = 0; i < hasta; i++)
    {
      //encuentra el mayor y lo coploca al final y vario es el hasta
      for(unsigned int i = 0; i < hasta; i++)
	{
	  if(mayor > pVector[i])
	    {
	      mayor = pVector[i];
	      indiceMayor = i;
	    }

	  mandarAtras(pVector,indiceMayor);
	  hasta--;
	} 

      
    }
}

int elementoFaltante(vector<unsigned int> pVector)
{
  unsigned int contador = 0;

  organizador(pVector);
  imprimirVector(pVector);
  for(unsigned int i = 0; i < pVector.size(); i++)
    {
      //cout<<i<<" : "<<pVector[i]<<endl; 
      if((i+1) != pVector[i])
	{
	  contador = i +1;
	  break;
	}
    }

  return contador;
}


int main()
{
  vector<unsigned int> miVector = {1,2,3,4,6,7};
  imprimirVector(miVector);
  cout<<"el elemento faltante es: "<<elementoFaltante(miVector)<<endl;
  //imprimirVector(miVector);
  return 0;
}

//hacelro con una lista d etamano size del vector
