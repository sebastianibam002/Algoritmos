#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


void insertion_sort(vector<int>& v){
  for(int i = 1; i < v.size(); ++i)
    {
      int a = i;
      int b = i -1;
      while(v[b] > v[a])
	{
	  swap(a,b,v);
	  a--;
	  b = a -1;
	}
    }
  
}


int main(){
  int times = 1000;
  int size = 1e3;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);
   double totTime =0;
  for(int i = 0; i < times; i++)
    {

      generate_ordered_vector(size, vec, rng, false);
      double timeInit = gettime();
      insertion_sort(vec);
      double timeStop = gettime();
      totTime += timeStop - timeInit;
      
    }

  cout<<"el tiempo promedio fue: "<<totTime/times<<endl;
  return 0;
}
