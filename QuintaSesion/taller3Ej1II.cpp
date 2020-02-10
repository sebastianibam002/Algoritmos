#include <iostream>
#include <vector>



void imprimirVector(const std::vector<int> &pVector)
{
  for(unsigned int i = 0; i <pVector.size(); i++)
    {
      std::cout<<i<<" ";
    }

  std::cout<<std::endl;
}
int main()
{
  //algoritmo para encontrar el elemento faltante

  std::vector<int> myVector{1,3,4,5,0};
  //primero lo voy a organizar
  imprimirVector(myVector);
  std::sort(myVector.begin(), myVector.end());
  imprimirVector(myVector);
  

  return 0;
}
