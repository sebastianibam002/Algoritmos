#include <iostream>
#include "charlist.hpp"

using namespace std;

int main()
{
  CharList my_list;
  for(int i = 65; i < 78; ++i)
    {
      my_list.push_back(char(i));
    }
  
  while(!(my_list.empty()))
    {
      cout<<my_list.top()<<" ";
      my_list.pop_back();
    }
  cout<<endl;
  
  cout<<my_list.empty()<<endl;

  //error para ver si esta funionando correctamente el trhow
  //my_list.pop_back();
 
  return 0;
}
