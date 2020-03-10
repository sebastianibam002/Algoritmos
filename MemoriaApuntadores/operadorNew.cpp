#include <iostream>
using namespace std;
int main()
{

  int *ip = new int;
  *ip = 42;
  delete ip;
  return 0;
}
