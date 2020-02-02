#include<iostream>
#include<queue>
using namespace std;

int main()
{
  queue<int> myQueue;
  int myInt;

  cout<<"Enter some integers (0 to end): "<<endl;
  do
    {

      cin>>myInt;
      myQueue.push(myInt);
    }while(myInt);

  cout<<"queue contains: ";
  while(!myQueue.empty())
    {
      cout<<' '<<myQueue.front();
      myQueue.pop();
    }

  
  cout<<"\n";
  return 0;


}
