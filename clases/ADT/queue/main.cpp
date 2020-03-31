#include "myqueue.hpp"
using namespace std;

int main()
{
  /*
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
  */


  listqueue::MyQueue<int> queue1;
  for(int i = 3; i < 8; ++i)
    {
      queue1.push(i);
    }
  cout<<queue1.size()<<endl;
  queue1.print();
  for(int i = 0; i < 3; i++)
    queue1.pop();
  cout<<queue1.size()<<endl;
  queue1.print();
  for(int i = 9; i <15; ++i)
    {
      queue1.push(i);
    }
  cout<< queue1.size()<<endl;
  queue1.print();
  for(int i = 16; i < 18; i++)
    {
      queue1.push(i);
    }
  cout<<queue1.size()<<endl;
  queue1.print();
  for(int i = 18; i < 19; i++)
    {
      queue1.push(i);
    }
  cout<<queue1.size()<<endl;
  queue1.print();
  while(!queue1.empty())
    queue1.pop();

  cout<<queue1.size()<<endl;
  queue1.print();
  
  return 0;
}
