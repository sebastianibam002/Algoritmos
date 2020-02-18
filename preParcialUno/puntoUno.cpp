#include <iostream>
#include <vector>
using namespace std;


float dispble(vector<float> consumo, float cupo_tot)
{
  float total;
  
  for(unsigned int i = 0; i < consumo.size(); i++)
    {
      total += consumo[i];
    }

  return cupo_tot - total;
}

float transcc(vector<float> consumo, float cupo_tot)
{

  float total;
  unsigned int indice = 0;
  for(unsigned int i = 0; i < consumo.size(); i++)
    {
     
      total += consumo[i];
      cout<<"total: "<<total<<endl;
      if(total > cupo_tot)
	{
	  indice = i;
	  break;
	}
      
      
    }

  if(total < cupo_tot)
    {
      return -1;
    }

  return indice -1;

  
}


int main()
{
  vector<float> consumo = {6.6, 1.1, 4.4, 2.2};
  float cupo_tot = 16.8;
  cout<<"ultima transcc: "<<transcc(consumo, cupo_tot)<<endl;


  return 0;
}
