#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

void  bubble_sort(vector<int>& v){
  bool swap_used = true;
  while(swap_used)
    {
      swap_used = false;
      for(int i = 0; i <v.size() -1; ++i)
	{
	  if(v[i] > v[i+1])
	    {
	      swap(i,i+1, v);
	      swap_used = true;
	    }
	}
    }
}


int main(){
  int times = 100;
  int size = 1e3;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);
  double totTime =0;
  for(int i = 0; i < times; i++)
    {

      generate_vector(size, vec, rng);
      double timeInit = gettime();
      bubble_sort(vec);
      double timeStop = gettime();
      totTime += timeStop - timeInit;
      
    }

  cout<<"El tiempo promedio: "<<totTime/size<<endl;
  
  return 0;
}
