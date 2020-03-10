#include <iostream>
using namespace std;
int main()
{
  //toca siempre con apuntadores
  double *dynArray = new double[3];
  //tres espacios para double consecutivos y accedo a ellos como si fuese un arrgelo
  dynArray[0] = dynArray[1] = dynArray[2] = 0.0;

  for(int i = 0; i < 3; ++i)
    cout << dynArray[i]<< " ";
  cout<<endl;
  delete[] dynArray;
  return 0;
}
