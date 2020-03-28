#ifndef _MYQUEUE_HPP
#define _MYQUEUE_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
struct Cell
{
  T val;
  Cell<T> *next;
};

//es una caja donde se pueden agrupar cosas y llamarlos desde los programas
//mismo  nombre en diferente namespace
namespace listqueue
{
  
  //se hace la primera version con listas
  template <typename T>
  class MyQueue
  {
  private:
    //doa apuntadores y un entero count que nos diga cuantos elementos hay
    Cell<T> *front;
    Cell<T> *back;
    int count;

  public:
    MyQueue():back(nullptr), front(nullptr), count(0){}
    ~MyQueue();
    bool empty();
    int size();
    void push(T p_valor);
    void pop();
    T get_front();
    T get_back();
    void clear();
    
  };

  
  template<typename T>
  MyQueue<T>::~MyQueue()
  {
    clear();
  }

  template<typename T>
  bool MyQueue<T>::empty()
  {
    return(back==nullptr && front==nullptr);
		  
  }
  template <typename T>
  int MyQueue<T>::size()
  {
    return count;
  }
  template <typename T>
  void MyQueue<T>::push(T p_valor)
  {
    //necesito que entre por atras es
    Cell<T> *NuevoElemento = new Cell<T>;
    NuevoElemento-> val = p_valor;
    NuevoElemento->next = nullptr;
    
    
    
    if(empty())
      {
 
	front = NuevoElemento;
	back = NuevoElemento;
	
      }
    else
      {
	back->next = NuevoElemento;
	back = NuevoElemento;
      }

    count++;
    
  }
  template <typename T>
  void MyQueue<T>::pop()
  {
    if(empty())
      {
	//este es un caso que se descarta porque la lista esta vacia y no se le puede hacer un pop como tal a una lista vacia
	throw std::runtime_error("Trying to pop on an empty queue");
      }
    else
      {
	if(size() == 1)
	  {
	    //en el caso que yo tengo solo un elemento en la lista y ambos quedan borrados

	    //elimino el frente con todo lo que este contenga
	    delete front;
	    //como buena practica de programacion se dejan apuntando a nada
	    front = nullptr;
	    back = nullptr;
	    
	    
	  }
	else
	  {
	    //fronto ahora va a a ser el siguiente
	    //creo una celda temporal
	    Cell<T> *temp = new Cell<T>;
	    //la celda temporal va a ser igual que front
	    temp = front;
	    //elimino aquello que exista dentro del apuntador front
	    delete front;
	    //front ahora va a ser al siguiente elemento que se accede a trav esdel temporal next
	    front = temp->next;
	  }
	//le quito a uno al tamano ya que se elimino un elemento 

	count--;
      }

    
    
  }

  template<typename T>
  T MyQueue<T>::get_front()
  {
    if(!(empty()))
      {
	return front->val;
      }
    else
      {
	throw std::runtime_error("trying to access an element on an empty list");
      }
      
  }

  template<typename T>
  T MyQueue<T>::get_back()
  {
    if(!(empty()))
      {
	return back->val;
      }
    else
      {
	throw std::runtime_error("trying to accces an element on an empty list");
      }
  }

  template<typename T>
  void MyQueue<T>::clear()
  {
    while(!(empty()))
      {
	pop();
      }
  }
 
  
}


namespace arrayqueue
{
  const int a = 5;
}

#endif
