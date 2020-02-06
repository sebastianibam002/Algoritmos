#include <iostream>
#include <string>
#include <vector>
using namespace std;

void imprimirPos(vector<string> pVector)
{
	for(unsigned int i = 0; i< pVector.size(); i++)
	{
	  cout<< i <<":" <<pVector[i]<<endl;
	}

}
int mayorCaracter(vector<string> pVector, unsigned int pHasta)
{
	string mayorValor = pVector[0];
	unsigned int indice = 0;
	for(unsigned int i = 0; i< pHasta; i++)
	{
		if(pVector[i]  > mayorValor)
		{
			mayorValor = pVector[i];
			indice= i;	
		}
	}
	return indice;
}

void colocarFinal(vector<string> &pVector, unsigned int pIndice)
{
	if(pIndice < pVector.size())
	{
		string elemento = "";
		elemento = pVector[pIndice];
		pVector.erase(pVector.begin()+pIndice, pVector.begin()+ 1 +pIndice);
		pVector.push_back(elemento);
	}
	else
	{
		cout<<pIndice<<endl;
	}
}

void rotarVector(vector<string> &pVector)
{
	int valor = pVector.size() -1;
	for(unsigned int i = 0 ; i < pVector.size(); i++)
	{
		colocarFinal(pVector, valor);
		valor--;
	}

}
void organizador(vector<string> &pVector)
{

	imprimirPos(pVector);
	unsigned int hasta = pVector.size();
	for(unsigned int i = 0; i < pVector.size();i++)
	{
		unsigned int indiceMayor = mayorCaracter(pVector, hasta);
		colocarFinal(pVector, indiceMayor);
		hasta -= 1;
		//cout<<"indiceMayor: "<<"hasta: "<<hasta<<endl;
	}
	//rotarVector(pVector);
	imprimirPos(pVector); 
}
int main()
{
  vector<string> frutas = {"manzana", "pera", "banano", "guayaba"};
  organizador(frutas);
  return 0;
}
