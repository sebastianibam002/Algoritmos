#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;


void printVec(vector<int> &v)
{
  for(unsigned int i= 0; i < v.size(); i++)
    {
      cout<<v[i]<<" ";
    }

  cout<<endl;
  
}
void bubble_sort_double(vector<int> &v)
{
  bool swap_used = true;
  while(swap_used)
    {
      swap_used = false;
      
      for(unsigned int i = 0; i < v.size()-1; ++i)
	{

	  
	  if(v[i] > v[i+1])
	    {
	      swap(i, i+1,v);
	      swap_used = true;
	      
	    }
	}

      //ya llegue de izquierda a derecha ahora la idea es devolverme del mismo modo


      
      swap_used = false;
    
      for(int i = v.size() -3; i >= 0; i--)
	{

	  
	  if(v[i+1] < v[i])
	    {
	     swap(i+1, i,v);
	     swap_used = true;
	     
	   }
	}

 
      
    }

  

  
  
}

int main()
{
  
  vector<int> numeros= {7,2,5,1,3,6,9,0};

  printVec(numeros);
  bubble_sort_double(numeros);
  printVec(numeros);
  
  
  return 0;
}
