#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> myvector(10);
  unsigned int sz = myvector.size();

  for (unsigned int i = 0; i < sz; i++)
    myvector[i] = i;

  cout<<"myvector contains: ";
  for (unsigned int i = 0;i < sz; i++)
    cout<< ' ' << myvector[i];
  cout <<'\n';

  

  return 0;
}
