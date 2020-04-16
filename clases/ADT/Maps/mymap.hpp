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
  void clear();
  void insert(KT key, VT value);
  VT get(KT key);
  bool contains(KT key);
  void remove(KT key);

}
