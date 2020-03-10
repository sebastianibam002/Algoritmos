#include <iostream>
using namespace std;
int main()
{
  //int *p = list;
  //int k = 2;
  int myArray[] = {1,2,3,4,5,6,7,8,9,10};
  cout<<*(myArray-1)<<endl;

  int list[] = {0,1,2,3,4};
  int *p = list;
  cout<< "p: "<< p <<endl;
  cout<< "p++: "<< p++ <<endl;
  cout<< "p: "<< p <<endl;
  int *q = list;
  cout<< "q: "<<q<<endl;
  cout<<"++q: "<<++q<<endl;
  cout<<"q: "<< q <<endl;

  return 0;
}
