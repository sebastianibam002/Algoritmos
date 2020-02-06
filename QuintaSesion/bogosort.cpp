#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


bool is_sorted(const vector<int>& v){
  for(int i = 0; i < v.size()-1; ++i){
    if(v[i] > v[i+1])
      return false;
  }
  return true;
}

void shuffle(vector<int>& v, minstd_rand0& rng){
  //two random numbers
  int num1 = int(v.size() * ( double(rng()) / rng.max() ));
  int num2 = int(v.size() * ( double(rng()) / rng.max() ));

  //swap the elements
  swap(num1, num2, v);
}

void bogosort(vector<int>& v, minstd_rand0& rng){
  while(!is_sorted(v))
    {
      shuffle(v,rng);
    }
}


int main(){
  int times = 1;
  int size = 100;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);
  double totTime = 0;
  for(int i= 0; i < times; i++)
    {
      
      generate_norepeat_vector(size, vec, rng);
      print_vector(vec);
      double InBegin = gettime();
      bogosort(vec, rng);
      double tStop = gettime();
      totTime += tStop -InBegin;
      print_vector(vec);
      
      
    }


  cout<<"promedio de tiempo: "<< totTime/times<<endl;
  return 0;
}
