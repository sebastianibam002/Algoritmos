#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<char, int> myMap;

  myMap['a'] = 10;
  myMap['b'] = 20;
  myMap['c'] = 30;
  myMap['d'] = 40;

  for(char c= 'a'; c < 'e'; c++ )
    cout<<myMap[c]<<endl;


  return 0;
}
