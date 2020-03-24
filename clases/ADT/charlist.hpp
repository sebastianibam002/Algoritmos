#ifndef _CHARLIST_HPP
#define _CHARLIST_HPP

#include <stdexcept>
//cell que es lo que esta dentro de una CharList
struct Cell
{
  char value;
  Cell *next;
};


class CharList
{
private:
  int size;
  Cell *back;
   

public:
  //esto es otra manera de inicilizar los atributos
  CharList(): back(nullptr), size(0) {}
  ~CharList();

  //Retorna true si la lista esta vacia, false de lo contrario
  bool empty();
  //inserta un elemento al final
  void push_back(char pChar);
  //borra el ultimo elemento
  void pop_back();
  //muestra el elemento del inicio
  char top();
  
};

#endif
