#include <iostream>
using namespace std;

void collatz(int n) {
  //Su
  //código
  //aquí

  if(n == 1)
    {
      cout<<1;
      
    }
  else if((n % 2) == 0)
    {
      cout<<n<<" ";
      collatz(n/2); 
    }
  else if((n % 2) == 1)
    {
      cout<<n<<" ";
      collatz(3*n + 1);
    }

 
}

  
int main() {
  collatz(6);
  cout << endl;
  
  return 0;
}
