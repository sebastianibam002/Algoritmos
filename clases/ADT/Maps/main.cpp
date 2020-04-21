#include<iostream>
#include"mymap.hpp"
#include <string>
using namespace std;
int main()
{

  MyMap<string, int> my_map;
  my_map.insert("a", 24);
  my_map.insert("c", 65);
  my_map.insert("h", -3);
  my_map.insert("k", 5);
  my_map.insert("l", 24);
  my_map.insert("m", 65);
  my_map.insert("n", 24);
  my_map.insert("s", 65);
  my_map.insert("t", 24);
  my_map.insert("u", 65);
  my_map.insert("v", 24);
  my_map.insert("w", 65);
  my_map.insert("k", 24);
  my_map.insert("y", 65);
  my_map.insert("z", 24);
  my_map.insert("3", 65);
  my_map.insert("4", 24);
  my_map.insert("5", 65);
  my_map.insert("6", 24);
  my_map.insert("7", 65);
  string s= "k";
  if(my_map.contains(s))
    {
      cout<<"value with key "<<s<<my_map.get(s)<<endl;
      my_map.remove(s);
    }
  if(my_map.contains(s)) cout<<"key "<<s <<" is in the map"<<endl;
  else cout<< "key "<<s<<" is no";
  return 0;
}
