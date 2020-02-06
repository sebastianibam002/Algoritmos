
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
int retVocal(string pString)
{
	//obtiene como parametro la string a analizar y retorna el numero de vocales que existen en esa string
	char arregloVocales[5] = {'A', 'E', 'I', 'O', 'U'};
	int contador = 0;
	for(int i = 0; i <= pString.length(); i++)
	{
		for(int e = 0; e < 5; e++)
		{
			if(toupper(pString[i]) == arregloVocales[e])
			{
				contador += 1;
			}
		}
	}
	
	return contador;
}

int retDigi(string pString)
{
	char arregloDigitos[10] = {'1','2','3','4','5','6','7','8','9','0'};
	int contador = 0;
	for(int i = 0; i <= pString.length(); i++)
	{
		for(int e = 0; e < 5; e++)
		{
			if(pString[i] == arregloDigitos[e])
			{
				contador += 1;
			}
		}
	}
	
	return contador;
	
}

string minusculas(string pString)
{
	string retorno = "";
	 
	for(int i = 0; i<= pString.length(); i++)
	{
		retorno += tolower(pString[i])
	}
	
	return retorno;
}

void minusculas(string &pString)
{
	
	pString = tolower(pString);
}

*/
string elimBlank(string pString)
{
	for(int i = 0; i < pString.length(); i++)
	{
		if(pString[i]== ' ')
		{
		  pString.erase(pString.begin() + i, pString.begin() + 1+ i);
		}
	}

	return pString;
}

int main()
{
  
  cout<<elimBlank("hola bo")<<endl;
  return 0;
}
