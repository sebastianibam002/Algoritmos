#include <iostream>
#include <set>
using namespace std;


bool sebset(set<int> &a, set<int> &b)
{
  //pasarlos por referencia para no oucpar mas memoria
  set<int>::iterator itA;
  set<int>::iterator itB;
  bool retorno = false;
 
  for(itA =a.begin(); itA != a.end(); itA++)
    {
      if(b.count(*itA) == 1)
	{
	  retorno = true;
	}
      else
	{
	  retorno = false;
	  break;
	}
      
    }

  return retorno;
}
int main()
{
  set<int> primerElemento;
  for(int i = 0; i< 10; i++)primerElemento.insert(i);
  set<int> subSet;
  for(int i = 0; i< 5; i++)subSet.insert(i);
  cout<<sebset(subSet, primerElemento)<<endl;
  return 0;
}
