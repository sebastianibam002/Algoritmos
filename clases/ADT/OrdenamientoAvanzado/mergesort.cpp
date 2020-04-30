#include <iostream>
using namespace std;
template <typename T>
void merge(vector<T>&v,int left, int right, vector<T>&tmp)
{
  int mid = (left +right) /2;
  int pl = left;
  int pr = mid;
  int pt = left;
  while(pl < mid&& pr < right)
    {
      if(v[pl] < v[pr])
	tmp[pt++] = v[pl++];
      else
	tmp[pt++] = v[pr++]; 
    }
  while(pl < mid)
    {
      tmp[pt++] = v[pl++];
    }
  while(pr < right)
    {
      tmp[pt++] = v[pr++];
    }
  for(int i = left; i < right; ++i)
    v[i] = tmp[i];
}
