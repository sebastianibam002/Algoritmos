#include <iostream>
using namespace std;
int main()
{

  const unsigned int N = 10;
  int myArray[N];
  for(unsigned int i = 0; i < N; i++)
    {
      myArray[i] = 10 * i;
    }

  for(unsigned int i = 0; i < N; i++)
    {
      cout<<myArray[i]<<" ";
    }

  
  cout<<endl;
  cout<<&myArray[0]<<" ? "<<&myArray<<endl;
  return 0;
}
