#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> myset;
  set<int>::iterator it;

  for(int i= 1; i <= 5; i++) myset.insert(i *10);

  cout<<"myset contains: ";
  for(it = myset.begin(); it != myset.end(); it++)
    cout<<' '<<*it;
  cout<<endl;

  return 0;

}
