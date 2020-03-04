#include <iostream>
using namespace std;

int trianguloPascal(int n, int k)
{
  //Row = n /entry = k

  if(k == 0 || n == k)
    {
      return 1;
      
    }
  else
    {
     
      return  trianguloPascal(n -1, k-1) + trianguloPascal(n-1, k);
    }
}

int main()
{
  cout<<""<<trianguloPascal(4,2)<<endl;
  return 0;
}
