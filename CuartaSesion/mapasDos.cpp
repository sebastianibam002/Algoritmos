#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<char, int> myMap;
  map<char, int>::iterator it;
  myMap['a'] = 10;
  myMap['b'] = 20;
  myMap['c'] = 30;
  myMap['d'] = 40;
  if(myMap.count('c'))
    cout<<"Element with key 'c' exists"<<endl;
  it = myMap.find('c');
  cout<<"Element "<<it->first<<" is "<<it->second<<endl; 
  return 0;
}
