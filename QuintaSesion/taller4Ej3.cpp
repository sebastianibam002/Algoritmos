#include <iostream>
#include <vector>
using namespace std;


int min(vector<int> &v)
{

  int minElement = v[0];
  for(unsigned int i = 0; i < v.size(); i++)
    {
      
      if(v[i] < minElement)
	{

	  minElement = v[i];
	}
    }


  return minElement;
  
}


int max(vector<int> &v)
{

  int maxElement = v[0];
  for(unsigned int i = 0; i < v.size(); i++)
    {
      
      if(v[i] > maxElement)
	{

	  maxElement = v[i];
	}
    }


  return maxElement;
  
}


int main()
{
  vector<int> myVector = {20,11,-2, 0, 4, -11};

  cout<<"menor elemento del vector es: "<<min(myVector)<<endl;
  cout<<"mayor elemento del vector es: "<<max(myVector)<<endl;
  return 0;
}


