#include<iostream>
#include<queue>
using namespace std;

int main()
{
  queue<int> myQueue;
  for(unsigned int i= 0; i < myQueue.size(); i++)
    {
      myQueue.push(i);
    }
  cout<<"el tamano de la cola es: "<<myQueue.size()<<endl;
  cout<<"la cola esta vacia? "<<myQueue.empty()<<endl;
  cout<<"el elemento en el frente de la cola es: "<<myQueue.front()<<endl;
  myQueue.pop();
  cout<<"el elemento en el frente de la cola es: "<<myQueue.front()<<endl;
  cout<<"agregando elemento al final de la cola...."<<endl;
  myQueue.push(2);
  cout<<"el elemento al final es: "<<myQueue.back()<<endl;
  return 0;
}
