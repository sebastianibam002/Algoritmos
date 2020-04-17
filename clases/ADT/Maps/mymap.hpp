#ifndef _MYMAP_HPP
#define _MYMAP_HPP

#include <stdexcept>
#include <iostream>
const int INITIAL_CAPACITY = 10;


template<typename KT, typename VT>
struct KeyValuePair
{
  KT key;
  VT value;
  
};

template<typename KT, typename VT>
class MyMap
{
private:
  KeyValuePair<KT, VT> *array;
  int capacity;
  int count;

  void expand_capacity();
  int find(KT key);
  
  
public:
  MyMap();
  ~MyMap();

  int size();
  bool empty();
  //void clear();
  void insert(KT key, VT value);
  VT get(KT key);
  bool contains(KT key);
  void remove(KT key);

};



template<typename KT, typename VT>
void MyMap<KT, VT>::insert(KT key, VT value)
{

  int index = find(key);
  if(index < 0)
    {
      //std::cout<<"hey"<<std::endl;
      if(count == capacity) expand_capacity();
      index = count++;
      array[index].key = key;
    }
  array[index].value = value;
}


template<typename KT, typename VT>
MyMap<KT,VT>::MyMap()
{
  array = new KeyValuePair<KT, VT>[INITIAL_CAPACITY];
  capacity = INITIAL_CAPACITY;
  count = 0;
  
  
}
template<typename KT, typename VT>
MyMap<KT, VT>::~MyMap()
{
  delete[] array;
}

template<typename KT, typename VT>
bool MyMap<KT,VT>::empty()
{
  return count == 0;
}
template<typename KT, typename VT>
int MyMap<KT, VT>::size()
{
  return count;
}

template<typename KT, typename VT>
void MyMap<KT, VT>::expand_capacity()
{

  //creo un arreglo con el doble de capacidad
  
  int old_capacity = capacity;
  KeyValuePair<KT, VT> *oldArray = array;
  capacity *=2;
  array = new KeyValuePair<KT, VT>[capacity];
  //std::cout<<"me llaman"<<std::endl ;
  for(unsigned int i = 0; i < old_capacity; i++)
    {
      //copio toda la informacion del antiguo a este
      array[i]= oldArray[i]; 
    }

  delete[] oldArray;
  
}


template<typename KT, typename VT>
int MyMap<KT, VT>::find(KT key)
{
  
  for(unsigned int i = 0;i < capacity; i++)
    {
      if(array[i].key == key)
	{
	  std::cout<<"encontre el indice"<<std::endl;
	  return i;
	}
    }

  return -1;
}

template<typename KT, typename VT>
bool MyMap<KT, VT>::contains(KT key)
{
  if(find < 0)
    {
      return false;
    }
  return true;
}

template<typename KT, typename VT>
VT MyMap<KT, VT>::get(KT key)
{

  int elemento = find(key);
  if(elemento > -1)
    {
      return array[elemento].value;
    }
  else
    {
      throw std::runtime_error("Attempting to access an element that doesn't exist");
    }
}

#endif

