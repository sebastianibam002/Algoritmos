#include <iostream>
#include <string>
using namespace std;

string inverse(string pString, unsigned int pHasta)
{
  if((pString.length()-1) == pHasta)
    {
      return pString;
      
    }
  else
    {
      pHasta++;
      char elemento = pString[pHasta];
      pString.erase(pString.begin(), pString.begin() + pHasta - 1);
      cout<<pString<<" elemento: "<< elemento << " hasta: "<< pHasta<<endl;
      return elemento + inverse(pString, pHasta);
    }
}

int main()
{
  cout<<"inversa sebas: "<<inverse("sebas", 0)<<endl;
  return 0;
}
