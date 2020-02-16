#include <iostream>
#include <vector>
#include <algorithm>


void printAr(int *arreglo, unsigned int tamano)
{
  for(unsigned int i = 0; i < tamano; i++)
    {
      std::cout<<*(arreglo+i)<<" ";
    }

  std::cout<<std::endl;
}

int mediana(int *arreglo, unsigned int tamano)
{
  //recibe como parametros el apuntador del arreglo y el tamano de este y retorna la mediana

  if(tamano % 2 == 0)
    {
      // std::cout<<arreglo[int(tamano/2)-1]<<" "<<arreglo[int(tamano/2)]<<std::endl;
      return (arreglo[int(tamano/2) -1] + arreglo[int(tamano/2)]) / 2;
    }
  else
    {
      return arreglo[tamano/2];
    }
  
}

double  media(int *arreglo, unsigned int tamano)
{
  double media = 0;

  for(unsigned int i = 0; i < tamano; i++)
    {
      media+=*(arreglo +i);
    }

  
  return media/tamano;
}
int main()
{

  //generar un vector cuyos valores sea definidos como
  const unsigned int tam = 6;
  int arreglo[tam] = {8,6,9,5,2,10};
  printAr(arreglo, tam);
  std::sort(arreglo, arreglo + tam);
  printAr(arreglo, tam);
  std::cout<<"la mediana es: "<<mediana(arreglo, tam)<<std::endl;
  std::cout<<"la media es: "<<media(arreglo, tam)<<std::endl;

  return 0;
}
