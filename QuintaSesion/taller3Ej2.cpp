#include <iostream>
#include <vector>
#include <string>
using namespace std;


void two_smallest(vector<string>&arr)
{
  //de un vector de string retorna el mas pequeno y el segundo mas peuqno
  string menor = "■";
  for(unsigned int i= 0; i < arr.size(); i++)
    {
     
      if(arr[i] < menor)
	{
	  menor = arr[i];
	}
    }

  //ya encontro elmas pequeno ahora necesita el segundo mas pequeno
  string menorII = "■";
  for(unsigned int i= 0; i < arr.size(); i++)
    {

      
      if(arr[i] < menorII && arr[i] > menor)
	{
	  menorII = arr[i];
	}
    }

  cout<<"el elemento mas peuqno es: "<<menor<<" el segundo mas pequeno es: "<<menorII<<endl;
  
}

int main()
{

  vector<string> miVector{"arbol", "laico", "pauperrimo", "exacto", "casa", "zapato"};
  two_smallest(miVector);
  return 0;
}
