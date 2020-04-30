#include <iostream>
using namespace std;

template<typename T>

void heapsort(vector<T> &v)
{
  for(int i = v.size()/2; i>= 0; i--)
    {
      max_heapify(v, i, v.size());
    }

  //pop and order values
  for(int i = 0; i < v.size(); i++)
    {
      //para ir moviendo donde entra
      int sz = v.size()-(i+1);
      T el = v[0];
      v[0] = v[sz];
      v[sz] = el;
      max_heapify(v,0,sz);
    }

}
