
#include <iostream>
#include <stdexcept>

template<typename dataType>
struct Cell
  {
    dataType data;
    Cell<dataType> *link;
  };


template <typename dataType>
class Stack
{

  
private:
    

  
  Cell<dataType> *stack;
  int count;

  //void deepCopy(const Stack<datatype> &src);


public:
  Stack(): stack(nullptr), count(0){}
  ~Stack();
  int size();
  bool empty();
  void clear();
  void push(dataType ch);
  dataType pop();
  dataType peek();
};




//TODO: Destructor

template<typename dataType>
Stack<dataType>::~Stack()
{
  clear();
}
 

template<typename dataType>
int Stack<dataType>::size()
{
  return count;
}

template<typename dataType>
bool Stack<dataType>::empty()
{
  return stack == nullptr;
}


template <typename dataType>

void Stack<dataType>::clear()
{
  while(!(empty()))
    {
      pop();
    }
}




template <typename dataType>
void Stack<dataType>::push(dataType ch)
{
  //debe anadir un elemento al stack
  //segun la deificion de stack quiere decir que el primero que entra es el primero que sale
  Cell<dataType> *nuevoElemento = new Cell<dataType>;
  //ahora debo introducirle el nuevo elemento
  
  nuevoElemento->data = ch;
  //std::cout<<nuevoElemento->data<<std::endl;
  nuevoElemento->link = stack;
  stack = nuevoElemento;
  count++;
  
}
template <typename dataType>
dataType Stack<dataType>::pop()
{

  if(!empty())
    {//debo borrar el elemento stack para poder continuar, voy a crear el temporal
      Cell<dataType> *temporal = new Cell<dataType>;
      temporal = stack;
      dataType elemento = stack->data;
      delete stack;
      stack = temporal->link;
      count--;
      return elemento;
    }
  throw std::runtime_error("Attempting to pop on an empty stack");
}

template <typename dataType>
dataType Stack<dataType>::peek()
{
  if(empty())
    throw std::runtime_error("Attemmting to acces an element on an empty stack");
  return stack->data;
}


