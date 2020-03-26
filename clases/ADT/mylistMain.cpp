#include <iostream>
#include "mylist.hpp"

int main()
{
  MyList <int>lista;
  for(unsigned int i = 0; i <= 10; i++)
    lista.push_back(i);

  while(!(lista.empty()))
    {
      std::cout<<lista.top()<<" ";
      lista.pop_back();
    }
  std::cout<<std::endl;

  lista.top();
  return 0;
}
