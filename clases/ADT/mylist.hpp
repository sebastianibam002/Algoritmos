#ifndef _MYLIST_HPP
#define _MYLIST_HPP

#include <stdexcept>
//cell que es lo que esta dentro de una CharList

template <typename T>
struct Cell
{
  T value;
  Cell<T> *next;
};


template<typename T>
class MyList
{
private:
  int size;
  Cell<T> *back;
   

public:
  //esto es otra manera de inicilizar los atributos
  MyList(): back(nullptr), size(0) {}
  ~MyList();

  //Retorna true si la lista esta vacia, false de lo contrario
  bool empty();
  //inserta un elemento al final
  void push_back(T pChar);
  //borra el ultimo elemento
  void pop_back();
  //muestra el elemento del inicio
  T top();
  
};

template<typename T>
bool MyList<T>::empty()
{
  
  return back == nullptr;
  //posibilidad 2 return back == nullptr;
}
template<typename T>
void MyList<T>::push_back(T pChar)
{
  //le sumo uno al size porque se anadio un elemento
  size++;
  //necesito apartar el nuevo espacio en memorio y crear la celda
  Cell<T> *nueva = new Cell<T>;
  nueva->value = pChar;
  //apuntador a una celda
  nueva->next = back;
  //ahora back debe apuntar a este nuevo elemento
  back = nueva;
  
  
}

template<typename T>
MyList<T>::~MyList()
{
  while(!(empty()))
    {
      
      pop_back();
    }
  
}

template<typename T>
T MyList<T>::top()
{
  if(empty())
    {
      throw std::runtime_error("Attempting to acces an element on an empty list"); 
    }
  return back->value;
}

template<typename T>
void MyList<T>::pop_back()
{
  //eliminar el ultimo elemento de la lista

  if(!(empty()))
    {
      Cell<T> *celda;
      //se mueve como tal el apuntador
      celda = back;
      //funciona porque, el next en este caso es el que esta atras del back
      back= back->next;

      delete celda;
      //ahora el valor se eliminia
      size--;
    }
  else
    {
      throw std::runtime_error("pop: Attempting to pop on an empty list");
    }
}
 


#endif
