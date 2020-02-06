#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void printVec(vector<unsigned int> vec)
{
  for(int i = 0; i < vec.size(); i++)
    cout<<vec[i] << ' ';

  cout<<endl;
}


int main()
{
  vector<unsigned int> vectorDos;

  for(int i = 0; i< 10; i++)
    vectorDos.push_back(pow(3,i));

  printVec(vectorDos);
  for(int i = 0; i < vec.size(); i++)
    {
      int contador = 0;
      
      if(vec[i] < 100)
	{
	  vec.erase(vec.begin() + contador)
	}
    }
  

  return 0;
}
