#include <iostream>
using namespace std;

char *deep_copy(char *ch, const unsigned int tamano)
{
  char arreglo[tamano];

  for(unsigned int i = 0; i < tamano; i++)
    {
      
      arreglo[i] = &(ch[i]);
      cout<<arreglo[i]<<endl;
    }
  return arreglo;
}

int main()
{
  unsigned int sz= 5;
  char arregloI[5] = {'a', 'b', 'c', 'd','e'};
  deep_copy(arregloI, sz);
  return 0;
}
