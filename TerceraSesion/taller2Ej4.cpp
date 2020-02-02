#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> setUno;
  set<int>::iterator it;
  it = setUno.begin();
  for(int i = 0; i< 10; i++)setUno.insert(i);
  //eliminar elementos
  setUno.erase(8);
  //crear el iterador
  
  setUno.erase(it, it++);
  cout<<"esta vacio? "<<setUno.empty()<<endl;
  cout<<"El elemento 8 esta? "<<setUno.count(8)<<endl;


  return 0;
}
