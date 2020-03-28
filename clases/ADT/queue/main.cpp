#include "myqueue.hpp"
using namespace std;

int main()
{

  //ir probando las cosas poco a poco
  listqueue::MyQueue<int> myCola;

  
  for(int i = 0; i < 10;i++)
    {
      myCola.push(i);
    }


  while(!(myCola.empty()))
    {
      cout<<myCola.get_front()<<" ";
      myCola.pop();
    }
  cout<<endl;
  
  return 0;
}
