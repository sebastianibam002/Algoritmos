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

  /*
  for(char c = 'a'; c < 'e'; c++)
    cout<<myMap[]
  */
  for(it = myMap.begin(); it != myMap.end(); it++)
    {
      cout<<it->first<<"," <<it->second<<endl;
    }
  return 0;
}
