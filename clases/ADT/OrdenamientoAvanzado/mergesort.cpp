#include <iostream>
#include <vector>
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

template<typename T>
void mergeSort(vector<T>&v, int left, int right, vector<T>&tmp)
{
  int mid = (left +right) /2;
  if(left < mid)
    {
      mergeSort(v, left, mid, tmp);
      mergeSort(v, mid, right, tmp);
      merge(v, left, right, tmp);
    }
}

template<typename T>
void mergeSort(vector<T> &v)
{
  vector<T> tmp(v.size(),0);
  mergeSort(v, 0, v.size(), tmp);
}

int main()
{

  vector<int> prueba;
  prueba.push_back(7);
  prueba.push_back(4);
  prueba.push_back(2);
  prueba.push_back(5);
  prueba.push_back(3);
  for(unsigned int i = 0;i < prueba.size(); i++)
    cout<<prueba[i]<<" ";
  cout<<endl;
  mergeSort(prueba);
  for(unsigned int i = 0;i < prueba.size(); i++)
    cout<<prueba[i]<<" ";
  cout<<endl;  
  
  return 0;
}
