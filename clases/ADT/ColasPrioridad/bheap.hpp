#ifndef _BHEAP_HPP
#define _BHEAP_HPP

#include<iostream>

const int INITIAL_CAPACITY = 10;
template<typename T>
class Bheap
{

private:
  T *array;
  int capacity;
  int count;

  //llegamos al limite de  nuestra capacidad
  void expandCapacity();
  int parent(int i);
  int left(int i);
  int right(int i);
  //es el metodo queu se asegura que quede siempre ordenado
  void max_heapify(int i);
public:
  Bheap();
  ~Bheap();

  bool empty();
  int size();
  void push(T x);
  T pop();

  void printHeap();
  
};


template<typename T>
Bheap<T>::Bheap()
{
  //se separa la memoria
  capacity = INITIAL_CAPACITY;
  array = new T[capacity];
  count = 0;
}

template<typename T>
Bheap<T>::~Bheap()
{
  delete[] array;
}

template<typename T>
bool Bheap<T>::empty()
{
  return count == 0;
}
template<typename T>
int Bheap<T>::size()
{
  return count;
}

template<typename T>
int Bheap<T>::parent(int i)
{
  return int(i/2);
}

template<typename T>
int Bheap<T>::left(int i)
{
  return 2*i;
}

template<typename T>
int Bheap<T>::right(int i)
{
  return (2*i) + 1;
}


template<typename T>
void Bheap<T>::expandCapacity()
{
  T *old_array = array;
  int old_capacity = capacity;
  capacity = capacity*2;
  array = new T[capacity];
  for(int i = 0; i< old_capacity; i++)
    {
      array[i] = old_array[i];
    }
}

template<typename T>
void Bheap<T>::push(T x)
{
  //se agrega como si fuese una cola normal
  if(count != capacity)
    {
      array[count] = x;
      //se le suma al count
      count++;
      
      //std::cout<<"el valor ingresado: "<<count<<std::endl;
      //ahora el heapify ya con el count modificado
      for(int i = int(count/2); i >= 0; i--)
	max_heapify(i);
    }
  else
    {
      expandCapacity();
      array[count] = x;
      //se le suma al count
      count++;
      
      //std::cout<<"el valor ingresado: "<<count<<std::endl;
      //ahora el heapify ya con el count modificado
      for(int i = int(count/2); i >= 0; i--)
	max_heapify(i);
    }
  
}


template<typename T>
T Bheap<T>::pop()
{
  //elimina el de alfrente y mueve al arrreglo en uno
  T ultimo = array[0];
  
  for(int i = 0; i < count; i++)
    {
      //muevo todos los elementos uno hacia adelante
      array[i] = array[i+1];

    }

  count--;
  for(int i = 0; i < count; i++)
    {
      max_heapify(i);
    }

  return ultimo;
}




template<typename T>
void Bheap<T>::max_heapify(int i)
{
  int id = i + 1;
  int l = left(id) - 1;
  int r = right(id) - 1;
  int largest;
  //cout << i << " " << l << " " << r << endl; 
  if(l < count && array[l] > array[i])
    largest = l;
  else
    largest = i;
  if(r < count && array[r] > array[largest])
    largest = r;
  if(largest != i){
    //swap
    T c = array[i];
    array[i] = array[largest];
    array[largest] = c;
    //recursive call
    max_heapify(largest);
  }
}

template<typename T>
void Bheap<T>::printHeap()
{
  for(unsigned int i= 0; i < count; i++)
    {
      std::cout<<array[i]<<" ";
    }
  std::cout<<std::endl;
}


#endif
