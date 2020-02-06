#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


int binary_search(int X, const vector<int>& v){
  int left = 0, right =v.size() -1;
  while(left <= right)
    {
      int mid = (right+left)/2;
      if(v[mid] == X)
	return mid;
      else
	{
	  if(X > v[mid])
	    left = mid+1;
	  else
	    right = mid -1;
	}
    }

  return -1;
}

int main(){
  int times = 100;
  int size = 1e6;
  int X = 999999;//size-1;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);

  double tot_time = 0;
  for(int n = 0; n < times; ++n){
    //Generate the random vector
    generate_ordered_vector(size, vec, rng, false);
    //print vector
    //print_vector(vec);
    
    //get initial time
    double tstart = gettime();
    
    //Search for X in vec
    int pos = binary_search(X, vec);
    
    //final time
    double tstop = gettime();
    tot_time += tstop-tstart;
    
    if(pos < 0)
      cout << X << " is not contained in the vector\n";
    else
      cout << X << " was found at position " << pos << "\n";

  }
  cout << "Time taken = " << tot_time / times << endl;
  
  return 0;
}
