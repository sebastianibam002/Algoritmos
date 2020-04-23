#include <iostream>
using namespace std;


struct nuevo{
  int hey;
};


int main()
{
  nuevo tipodos;
  
  nuevo* tipo = &tipodos;
  int num =33;
  tipo->hey = num;
  return 0;
}
