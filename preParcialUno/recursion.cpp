#include <iostream>
#include <vector>
using namespace std;

int collatz(int num)
{
  while(num != 1)
    {
      if(num == 1)
	{
	  cout<<num<<endl;
	  return 1;
      
	}
      else if(num %2 == 0)
	{
	  num = num /2;
	  cout<<num<<endl;
	  return collatz(num);
	}
      else
	{
	  num = 3 * num + 1;
	  cout<<num<<endl;
	  return collatz(num);
	}
    }
   


}
int main()
{

  cout<<collatz(6)<<endl;

  return 0;
}
