#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<double> cola;
  for(int i = 0; i< 12; i++)
    {
      cola.push(i);
    }
  int hasta;
  hasta = int(cola.size() /2);
  for(int i = 0; i < hasta; i++)
    {
      
      cola.pop();
    }

  cout<<"mitad: "<<cola.front()<<endl;
  return 0;
}
