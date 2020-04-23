#include "hashmap.hpp"
#include<iostream>
using namespace std;

int main()
{

  HashMap<int> my_map;
  //cout<<my_map.size()<< " : "<<my_map.empty()<<endl;
  my_map.insert("a",33);
  my_map.insert("b", 44);
  my_map.insert("c", 55);
  my_map.insert("d", 66);
  my_map.insert("e", 77);
  //cout<<"insertando el ultimo"<<endl;
  my_map.insert("f",33);
  
  my_map.insert("g", 44);
  my_map.insert("h", 55);
  my_map.insert("i", 66);
  my_map.insert("j", 77);
  my_map.insert("z", 70);
  my_map.insert("w", 78);
  my_map.display();
  //my_map.clear();
  
  
}
