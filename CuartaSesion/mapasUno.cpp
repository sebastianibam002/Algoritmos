#include <iostream>
#include <map>
using namespace std;

int main()
{

  map<char, int> first;
  first['a'] = 10;
  first['b'] = 30;
  first['c'] = 50;
  first['d'] = 70;
  cout<<"the value of the enement with key 'b' is"<<first['b']<<"\n";

}
