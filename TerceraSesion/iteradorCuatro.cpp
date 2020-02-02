#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v= {1,2,3};
  vector<int>::iterator it;

  for(it = v.begin(); it != v.end(); it++)
    {
      if(it == v.begin() + 1)
	{
	  it = v.insert(it, 5);
	}
    }

  for(unsigned int i = 0; i< v.size(); i++)
    {
      cout<< v[i]<<" ";
    }
  
  cout<<endl;
  return  0;
}
