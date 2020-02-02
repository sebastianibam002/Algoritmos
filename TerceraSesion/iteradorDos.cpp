#include <iostream>
#include <vector>
using namespace std;

int main()
{
  const int size= 4;
  vector<int> v(size,1);
  vector<int>::iterator it;
  cout<<"Without iterator = ";
  for(int i = 0; i < size; i++)
    {
      cout<<v[i]<<" "; 
    }
  cout<<"\nWith iterators = ";
  for(it= v.begin(); it != v.end(); it++)
    {
      cout<< *it << " ";
    }


  return  0;
}
