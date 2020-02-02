#include <iostream>
#include <map>
using namespace std;

void printMapa(map<int, char> pMapa)
{

  map<int, char>::iterator it;
  for(it = pMapa.begin(); it != pMapa.end(); it++)
    {
      cout<<it->first<<"," <<it->second<<endl;
    }
  cout<<endl;
}

int main()
{
  map<int, char> miMapa;
  miMapa[1] = 'u';
  miMapa[2] = 'd';
  miMapa[3] = 't';
  miMapa[4] = 'c';
  miMapa[5] = 'c';
  pair<int, char> a(6,'s');
  pair<int, char> b(7,'s');
  miMapa.insert(a);
  miMapa.insert(b);
  printMapa(miMapa);
  
  //eliminar parejas por llave
  miMapa.erase(1);
  miMapa.erase(5);
  printMapa(miMapa);
  //acceder al valo rasociado a llave
  cout<<"El elemento asociado a la lla 2 es : "<<miMapa[2]<<endl;
  //el numero de elementos en un mapa es
  cout<<"el numero de elementos es: "<<miMapa.size()<<endl;
  
  return 0;
}
