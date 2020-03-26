#include <iostream>
#include "taller9Ej1.hpp"
using namespace std;

int main()
{
  Stack <char>myStack;
  for(unsigned int i = 65; i < 91; i++)
    {
      int a = char(i);
      myStack.push(a);
      cout<<myStack.pop()<<" ";
    }
  cout<<endl;
  
  cout<<"la lista esta vacia?: "<<myStack.empty()<<endl;
  //cout<<"el primero elemento: "<<myStack.peek()<<endl;
  //ecout<<"pop el ultimo elemento: "<<myStack.pop()<<endl;
  return 0;
}
