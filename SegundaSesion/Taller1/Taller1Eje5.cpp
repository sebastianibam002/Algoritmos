#include <iostream>
#include <list>
using namespace std;
int main()
{
  list<int> myList;
  for(int i = 1; i <= 10; i++)
    {
      
      myList.push_back(i);

    }
  
  //determinar el tamano de la lista

  cout<<"tamano lista: " <<myList.size()<<endl;
  cout<<"vacia: "<<myList.empty()<<endl;
  cout<<"primer elemento: "<<myList.front()<<endl;
  cout<<"Ultimo elemento: "<<myList.back()<<endl;
  cout<<"eliminando primer y ultimo elemento..."<<endl;
  myList.pop_back();
  myList.pop_front();
  cout<<"primer elemento: "<<myList.front()<<endl;
  cout<<"Ultimo elemento: "<<myList.back()<<endl;
  cout<<"Insertando 0 como primer y ultimo elemento"<<endl;
  myList.push_back(0);
  myList.push_front(0);
  cout<<"primer elemento: "<<myList.front()<<endl;
  cout<<"Ultimo elemento: "<<myList.back()<<endl;
  
}
