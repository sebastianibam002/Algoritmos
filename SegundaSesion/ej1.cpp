#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> first;
  list<int> second(4,100);
  list<int> third(second);


  int myints[] = {16,2,77,29};
  list<int> fourth(myints, myints + sizeof(myints) / sizeof(int));

  //for(int i = 0; i <= myints.)


  list<int> mylist;
  mylist.push_back(77);
  mylist.push_back(22);

  mylist.front() -= mylist.back();
  cout<<"mylist.front() is now "<<mylist.front() << '\n';

  return 0;
}
