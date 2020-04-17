#include<iostream>
#include"mymap.hpp"
#include <string>
using namespace std;
int main()
{

  MyMap<int, string>prueba;
  prueba.insert(1,"a");
  prueba.insert(2,"b");
  prueba.insert(3,"c");
  prueba.insert(4,"d");
  prueba.insert(5,"b");
  prueba.insert(6,"d");
  prueba.insert(7,"a");
  prueba.insert(8,"b");
  prueba.insert(9,"c");
  prueba.insert(10,"a");
  prueba.insert(11,"b");
  prueba.insert(12,"c");
  
  return 0;
}
