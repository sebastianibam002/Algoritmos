#include "charlist.hpp"


bool CharList::empty()
{
  
  return back == nullptr;
  //posibilidad 2 return back == nullptr;
}

void CharList::push_back(char pChar)
{
  //le sumo uno al size porque se anadio un elemento
  size++;
  //necesito apartar el nuevo espacio en memorio y crear la celda
  Cell *nueva = new Cell;
  nueva->value = pChar;
  //apuntador a una celda
  nueva->next = back;
  //ahora back debe apuntar a este nuevo elemento
  back = nueva;
  
  
}

CharList::~CharList()
{
  while(!(empty()))
    {
      
      pop_back();
    }
  
}

char CharList::top()
{
  return back->value;
}

void CharList::pop_back()
{
  //eliminar el ultimo elemento de la lista

  if(!(empty()))
    {
      Cell *celda;
      //se mueve como tal el apuntador
      celda = back;
      //funciona porque, el next en este caso es el que esta atras del back
      /*
	Back   Back-> next
	1111   1111
	1  1 ->1  1 
	1111   1111 
	A2      A1


       */
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
 
