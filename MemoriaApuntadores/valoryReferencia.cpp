#include <iostream>
using namespace std;
void foo(int &var)
{
  var++;
}


int main()
{
  int x = 3;
  foo(x);
  cout<<"foo: "<<foo<<endl;
  return 0;
}
