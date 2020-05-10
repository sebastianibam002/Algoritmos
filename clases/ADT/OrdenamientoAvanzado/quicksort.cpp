#include<iostream>
#include <vector>
using namespace std;





template <typename T>
int partition(vector<T> &v, int left, int right)
{
  //x es el que al final quedara en la mitad
  int x = v[right -1];
  //i es con el que se van llevando los grandes a la derecha y los pequenos a la izquierda
  int i = left-1;
  for(int j = left; j<right-1;++j)
    {
      if(v[j] <= x)
	{
	  
	  i++;
	  //el swap
	  T c = v[j];
	  v[j] = v[i];
	  v[i] = c;
	  
	}
    }

  T c = v[i+1];
  v[i+1] = v[right-1];
  v[right-1] = c;
  return i+1;
}

//parte hasta que quede un solo elemento
template <typename T>
void quicksort(vector<T>& v, int left, int right)
{
  if(left <right)
    {
      int id = partition(v, left, right);
      quicksort(v, left, id);
      quicksort(v, id+1, right);
    }
}

template<typename T>
void quicksort(vector<T>& v)
{
  quicksort(v, 0, v.size()); 
}


int main()
{


  vector<int> numeros;
  numeros.push_back(3);
  numeros.push_back(6);
  numeros.push_back(1);
  numeros.push_back(4);
  numeros.push_back(5);

  for(unsigned int i = 0; i < numeros.size(); i++)
    {
      cout<<numeros[i]<<" ";
    }
  cout<<endl;

  quicksort(numeros);
  
  for(unsigned int i = 0; i < numeros.size(); i++)
    {
      cout<<numeros[i]<<" ";
    }
  cout<<endl;
  return 0;
}
