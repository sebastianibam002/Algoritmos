#include<iostream>
using namespace std;
int maxNum(int *arreglo, const unsigned int tamano)
{
  int mayor = arreglo[0];
  for(unsigned int i = 0; i < tamano; i++)
    {
      if(arreglo[i] > mayor)
	mayor = arreglo[i];
    }


  return mayor;
 }

void swap(int &elementoUno, int &elementoDos)
{
  int variable = elementoDos;
  elementoDos = elementoUno;
  elementoUno = variable;
}


void organizar(int *arreglo, const unsigned int tamano)
{
  unsigned int pHasta = tamano;
  
  for(unsigned int i =  0; i < pHasta - 1; i++)
    {

      int min_id  = i;
      //mayor = maxNum(arreglo, tamano);
      //una vez encuentra el mayor hacer swap
      for(unsigned int j = i+1; j < tamano; j++)
	{
	  if(arreglo[j] < arreglo[min_id])
	    min_id = j;
	}
      swap(i, min_id);
    }
  
}


int main()
{

  const unsigned int tamano= 8;
  int myArray[] = {2,4,3,8,6,10,11,7};
  cout<<"mayorElemento: "<<maxNum(myArray, tamano)<<endl;
  //organizar(myArray, tamano);
  int a = 0;
  int b = 1;
  //swap(a, b);
  cout<<"A: "<<a<<" : "<< " b; "<<b<<endl;

  for(unsigned int i = 0; i < tamano; i++)
    {
      cout<<myArray[i]<<" ";
    }
  cout<<endl;
  return 0;
}
