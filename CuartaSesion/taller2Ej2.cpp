#include <iostream>
#include <string>
#include <map>
using namespace std;


void printMapII(map<string, string> pMapa)
{
  map<string,string>::iterator it;
  it = pMapa.begin();
  while(it != pMapa.end())
    {
      
      cout<<it->first<<" : "<<it->second<<endl;
      it++;
      
    }

}

void printMap(map<string, string> pMapa)
{
  map<string, string>::iterator it;
  for(it = pMapa.begin(); it != pMapa.end(); it++)
    {
      cout<<it->first<<" : "<<it->second<<endl;
    }

  cout<<endl;
}


int main()
{
  
  map<string, string> miMapa;
  miMapa["locuaz"] = "Que habla mucho o demasiado";
  miMapa["astringente"] = "Que, en contacto con la lengua, produce en esta una sensación mixta entre la sequedad intensa y el amargor, como, especialmente, ciertas sales metálicas.";
  miMapa["capuz"] = "Capucha";
  miMapa["ajetreo"] = "Actividad intensa que implica movimientos incesantes. U. t. en sent. fig. Ajetreo de ideas.";

  cout<<"la defincion de astringente es: "<< miMapa["astringente"]<<endl;
  cout<<"la defincion de capuz es: "<< miMapa["capuz"]<<endl;    
  cout<<"la defincion de ajetreo es: "<< miMapa["ajetreo"]<<endl;
  cout<<"///////////////////////////////////////////////////"<<endl;
  miMapa.erase("locuaz");
  miMapa.erase("ajetreo");
  miMapa.erase("capuz");
  printMapII(miMapa);
  
  return 0;
}
