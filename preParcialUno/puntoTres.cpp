#include <iostream>
#include <vector>
using namespace std;

int anti_peak(const vector<int> &vec, unsigned int pDesde)
{
  for(unsigned int i = pDesde; i < vec.size(); i++)
    {
      cout<<"i: "<<vec[i]<<" i+1: "<< vec[i+1]<<" i+2: "<<vec[i+2]<<endl;
      if(vec[i] >= vec[i + 1] && vec[i+ 1] <= vec[i +2])
	return i +1;
    }


  return -1;
}


int main()
{
  vector<int> myVector = {7,2,5,6,5,1};
  vector<int> myVectorII = {1,5,4,1,1,5,7,8};

  cout<<"Ejemplo 1: "<<anti_peak(myVector, 1)<<endl;
  cout<<"Ejemplo 2: "<<anti_peak(myVectorII, 3)<<endl; 

  return 0;
}
