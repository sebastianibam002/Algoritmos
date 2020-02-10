#include <iostream>


int identity(int *arreglo, int pSize)
{

  int indice = -1;
  for(int i = 0; i< pSize; i++)
    {
      if(i == arreglo[i])
	{
	  indice = i;
	}
    }


  return indice;
}

int main()
{
  //deisesnar un algoritmo que encuentre el indice que este anexado a un arrrgwl0
  int arreglo[] = {5,6,7,8,4,6,7,8};
  std::cout<<"El elemento cuyo indice es igual que su valor es: "<<identity(arreglo, 8)<<std::endl;

  return 0;
}

