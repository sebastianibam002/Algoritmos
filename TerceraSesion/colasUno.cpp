#include<iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> first;
  queue<int> second(first);
  cout<<"size of first: "<<first.size()<<endl;
  cout<<"size of second: "<<second.size()<<endl;

  return 0;
  
}
