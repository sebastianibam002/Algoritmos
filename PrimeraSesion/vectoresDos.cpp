#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> myvector;
  int sum(0);//otra manera de inicializar es colocandolo entre parentesis

  //se pasa al igual que el arreglo con & y el *

  myvector.push_back(100);
  myvector.push_back(200);
  myvector.push_back(300);
  //mientras el vector tenga algun elemento
  while (!myvector.empty())
    {
      
      sum += myvector.back();
      myvector.pop_back();
    }

  cout<<"The element of myvector add up and to " << sum << '\n';
}
