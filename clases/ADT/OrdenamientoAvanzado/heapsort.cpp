#include <iostream>
#include <vector>
using namespace std;

//para acceder a los diferentes nodos
int left(int id);
int right(int id);
int parent(int id);
//max heapify
template<typename T>
void max_heapify(vector<T>&pV, int pInicio, int pFinal);
//heapsort
template<typename T>
void heapsort(vector<T> &v);
//main
int main()
{
  /*
  vector<int> prueba;
  prueba.push_back(2);
  prueba.push_back(8);
  prueba.push_back(6);
  prueba.push_back(3);
  prueba.push_back(1);
  */
  vector<int> prueba;
  prueba.push_back(5);
  prueba.push_back(2);
  prueba.push_back(16);
  prueba.push_back(4);
  prueba.push_back(7);  
  for(unsigned int i = 0; i< prueba.size(); i++)
    {
      cout<<prueba[i]<<" ";
    }
  cout<<endl;
  heapsort(prueba);
  for(unsigned int i = 0; i< prueba.size(); i++)
    {
      cout<<prueba[i]<<" ";
    }
  cout<<endl;
  return 0;
}

int left(int id)
{
  return 2*id; 
}

int right(int id)
{
  return (2*id)+1;
}

int parent(int id)
{
  return int(id/2);
}


template<typename T>
void max_heapify(vector<T>&pV, int pInicio, int pFinal)
{
  int id = pInicio + 1;
  int l = left(id) - 1;
  int r = right(id) - 1;
  int largest;
  //cout << i << " " << l << " " << r << endl; 
  if(l < pFinal && pV[l] > pV[pInicio])
    largest = l;
  else
    largest = pInicio;
  if(r < pFinal && pV[r] > pV[largest])
    largest = r;
  if(largest != pInicio){
    //swap
    T c = pV[pInicio];
    pV[pInicio] = pV[largest];
    pV[largest] = c;
    //recursive call
    max_heapify(pV, largest, pFinal);
  }
}


template<typename T>
void heapsort(vector<T> &v)
{
  for(int i = v.size()/2; i>= 0; i--)
    {
      max_heapify(v, i, v.size());
    }

  //pop and order values
  for(int i = 0; i < v.size(); i++)
    {
      //para ir moviendo donde entra
      int sz = v.size()-(i+1);
      T el = v[0];
      v[0] = v[sz];
      v[sz] = el;
      max_heapify(v,0,sz);
    }

}

