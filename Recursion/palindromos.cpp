#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;
bool isPalindrome(string str)
{
  int len = str.length();
  if(len <= 1)
    {
      return true;
    }
  else
    {
      return (str[0] == str[len -1]) && isPalindrome(str.substr(1, len -2));
    }
}

bool isSubstringPalindrome(string str, int p1, int p2)
{
  if(p1 >= p2)
    {
      return true;
      
    }
  else
    {
      return (str[p1] == str[p2]) && isSubstringPalindrome(str,p1+ 1, p2-1);
    }
}

bool isPalindromeDos(string str)
{
  return isSubstringPalindrome(str, 0, str.length());
}
int main()
{
  int momentoUno = gettime();
  bool resultado = isPalindrome("reconocer");
  int momentoDos = gettime();
  cout<<"reconocer es palindromo? "<<resultado<<endl;
  cout<<"se deomomro: "<<momentoDos - momentoUno<<endl;

  int momentoTres = gettime();
  bool resultadoDos = isPalindromeDos("adivinayateopinayanimilesoriginayanicetromedominayanimonarcasarepasonimulatocarretaacasonicotinayanicitavecinoanimacocinapedazogallinacedazotersonosretozadecanillagozadepanicocaminaonicevaticinayanitocinosacaaterracotaluminosaperasacranominayanimodemortecinayanigiroseliminayanipoetayanivida");
  int momentoCuatro = gettime();
  cout<<"reconocer es palindromo? "<<resultadoDos<<endl;
  cout<<"se deomomro: "<<momentoCuatro - momentoTres<<endl;

  return 0;
}
