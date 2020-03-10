#include <iostream>
using namespace std;
int main()
{
  /*
  int val = 1024;
  //int *p1, p2;
  int &ref = val;
  cout<<ref<<endl;

  val = 33;
  cout<<ref<<endl;


  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;
  cout<<*p1<<endl;
  */
  int i = 42;
  int *p;
  int *&r = p;
  r = &i;
  *r = 4;
  cout<< p << " "<<r <<" "<< &i<<endl;

  cout<< *p<<" "<<*r<<" "<< i<<endl;
				 

  return 0;
}
