#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


void printVec(vector<int> &v)
{
  for(unsigned int i = 0; i <v.size(); i++)
    {
      cout<<v[i]<<" ";
    }
  cout<<endl;
}
int slow_selection(int k, vector<int>&v)
{

  //unsigned int lastElement = v.size();
  for(int i = 0; i < k -1; i++)
    {
      int min_id = i;
      int max_id = i;
      
      for(unsigned int j = i + 1; j <v.size(); ++j)
	{

	  
	  if(v[j] < v[min_id])
	    {
	      min_id = j;
	    }

	  if(v[j] > v[max_id])
	    {
	      max_id = j;
	    }

	  
	}
      int tamano = v.size() -1;
      swap(i, min_id, v);
      swap(tamano, max_id, v);

    }

  return v[k-1]; 
}

int main()
{
  
  vector<int>vec = {1,10,2,5,7, 20};

  cout<<slow_selection(6,vec)<<endl;
  printVec(vec);
  return 0;
}
