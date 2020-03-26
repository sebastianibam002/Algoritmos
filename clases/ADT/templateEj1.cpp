#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
  return a+ b;
}


int main()
{

  double x = 3.2325, y = 5.2222;
  cout<<"la suma de x y y; "<< add<double>(x,y)<<endl;
  return 0;
}
