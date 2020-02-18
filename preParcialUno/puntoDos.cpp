#include <iostream>
#include <map>
using namespace std;


void printMap(map<int, int> miMapa)
{

  cout<<"Keys:   ";
  int contador = 0;
  
  for(unsigned int i = 0; i < miMapa.size(); i++)
    {
      contador += 1;
      cout<<contador<<" ";
      
    }
  cout<<endl;

  contador = 0;
  cout<<"Values: ";
  
  for(unsigned int i = 0; i < miMapa.size(); i++)
    {
      contador += 1;
      cout<< miMapa[i]<<" ";
      //cout<<"hey"<<contador<<"//";
      
    }
  cout<<endl;
  
}

map<int, int> collatz(int n)
{

  map<int, int> myMap;
  int contador = 0;
  
   do{
     //cout<<"contador: "<<contador <<"n: "<<n<<endl;
      myMap[contador] = n;
      cout<<myMap[contador]<<endl;
      if(n %2== 0)
	n = int(n/2);
      
      else
	n = int(n*3) +1;
      
      
      contador += 1;

      

   }while(n != 1);
   //contador += 1;
   //myMap[9] = 1;
   //cout<<myMap.size()<<endl;
  

  
  return myMap;
}

int main()
{
  map<int, int> mapa = collatz(6);
  printMap(mapa);
  return 0;
}
