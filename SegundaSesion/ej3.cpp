#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main()
{
  vector<int> myVector(2,200);
  list<int> myList(2,200);
  stack<int> first;
  stack<int, vector<int>> second(myVector);
  stack<int, list<int>> third(myList); 
  cout<<"size of first: "<<first.size()<<endl;
  cout<<"size of second: "<<second.size()<<endl;
  cout<<"size of the third: "<<third.size()<<endl;
  //Push/pop
  stack<int> myStack;
  for(int i = 0; i < 5; i++) myStack.push(i);
  cout<<"Popping out elements..";
  while(!myStack.empty())
    {
      cout<<' '<<myStack.top();
      myStack.pop();
    }
  cout<<endl;
  return 0;
  
}
