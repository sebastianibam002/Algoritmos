#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main()
{
  list<unsigned int> listaPotencias;
  for(int i = 1; i <= 10; i++)
    {
      listaPotencias.push_back(pow(3, i));
    }

  //imprimir potencias

  while(!listaPotencias.empty())
    {
      cout<<listaPotencias.front()<<endl;
      listaPotencias.pop_front();
      
    }
}
