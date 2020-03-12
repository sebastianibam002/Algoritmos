#include <iostream>

#include "dynarray.hpp"
using namespace std;
int main()
{

  const unsigned int tamano = 100;
  DynArray array_nuevo(tamano);
  DynArray array_dos(tamano);
  DynArray array_tres(3);
  for(unsigned int i = 0; i < tamano; i++)
    {
      array_nuevo.set_element(i, i*10);
      array_dos.set_element(i, i*10);
    }

  
  
  //arrayNuevo.set_element(0,20);
  cout<<array_nuevo.getsize()<<endl;
  cout<<array_nuevo.get_element(0)<<endl;

  for(unsigned int i = 0; i < tamano; i++)
    cout<<array_nuevo.get_element(i)<<" ";
  cout<<endl;


  cout<<"array uno es igual a dos: "<<(array_nuevo == array_dos)<<endl;
  cout<<"array uno es igual a tres: "<<(array_nuevo == array_tres)<<endl;
  DynArray cuatro(100) = array_nuevo + array_tres;
  for(unsigned int i = 0; i < tamano; i++)
    {
      cout<<cuatro.get_element(i)<<" ";
    }
  cout<<endl;
  return 0;
}
