#include <iostream>

using namespace std;

int pot(int n, int k)
{
  if(k == 0 && n != 0)
    {
      return 1;
    }

  else if(n == 0 && k == 0)
    {
      return -1;
    }
  else
    {
      k--;
      return n *pot(n, k);
    }
  
}


int main()
{
  cout<<"2 elevado a la 3: "<<pot(0,0)<<endl;
  return 0;
}
