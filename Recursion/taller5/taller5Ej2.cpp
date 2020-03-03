#include <iostream>
#include <string>
using namespace std;

string inverse(string pString)
{

  
  if(pString.length() <=  1)
    {

      
      return pString;
      
    }
  else
    {
      int end = pString.length()-1;
      char inicio = pString[0];
      pString[0] = pString[pString.length()-1];
      pString[pString.length()-1] = inicio;
      cout<<"end: "<<pString[end]<<" inicio: "<<pString[0]<<endl;
      return pString[0]+ inverse(pString.substr(1,end-1)) + pString[end];
    }
}

int main()
{
  cout<<"inverse: "<<inverse("sabes")<<endl;
  
  return 0;
}
