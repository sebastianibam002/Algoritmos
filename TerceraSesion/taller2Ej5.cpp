#include <iostream>
#include <string>
#include <set>
using namespace std;

void imprimirConjunto(set<string> pSet)
{
  set<string>:: iterator it;
  for(it =pSet.begin();  it !=  pSet.end(); it++)
    {
      cout<<*it<<endl;
    }
}
int main()
{
  set<string> conjunto;
  set<string>::iterator it;
  set<string>::iterator ot;
  string nombre = "";

  
  while(nombre != "parar")
    {
      cin>>nombre;
      conjunto.insert(nombre);
      conjunto.erase("parar");
    }

  //conjunto.erase("rodrigo");
  //imprimirConjunto(conjunto);

  it = conjunto.begin();
  ot = conjunto.end();
  ot--;
  cout<< " Y el primer elemnto es " << *it << endl;
  cout<<"el ultimo elemento es: "<< *ot<<endl;
  
  return 0;
}
