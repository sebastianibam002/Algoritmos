#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> myset;
  for(int i = 1; i <5; i++)
    {
      myset.insert(i *3);
    }

  for(int i = 0; i < 10; i++)
    {
      cout<<i;
      //devuelve 0 si no esta y 1 si si esta
      if(myset.count(i) != 0)
	{
	  cout<<" is an element of myset."<<endl;
	 
	}
      else
	{
	  cout<<" is not an element of myset."<<endl;
	}
    }


  return 0;
}
