#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
  queue<int> potencias;
  for(int i = 0; i <= 10; i++)
    {
      potencias.push(pow(3, i));

    }
  cout<<"el objeto al tope es: "<<potencias.front()<<endl;
  while(!potencias.empty())
    {

      cout<<potencias.front()<<endl;
      potencias.pop();
    }
  return 0;
}
