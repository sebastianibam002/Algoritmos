#include <iostream>
using namespace std;
int main ()
{
  int numero = 5;
  int *apuntador;
  apuntador = &numero;
  cout<<*apuntador << " : " <<apuntador<<endl;
  cout<<*(apuntador+1) << " : " <<apuntador+1<<endl;
  return 0;
}
