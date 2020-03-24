#include <iostream>
#include "charstack.hpp"
using namespace std;


int main()
{
  CharStack my_stack;
  for(int i = 65; i < 78; i++)
    my_stack.push(char(i));


  cout<< my_stack.top()<<endl;
  int sz = my_stack.size();
  for(int i = 0; i < sz; i++)
    cout<< my_stack.pop()<<" ";
  cout<<endl;


  //CharStack my_stack_vacio;

  //cout<<"elemento arriba: "<<my_stack.top()<<endl;;

  return 0;
}
