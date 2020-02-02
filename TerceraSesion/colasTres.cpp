#include<iostream>
#include<queue>
using namespace std;

int main()
{
  queue<int> myQueue;
  myQueue.push(12);
  myQueue.push(75);
  myQueue.back() -= myQueue.front();
  cout<<"muqueue.back() is now"<<myQueue.back()<<endl;

  return 0;
}
