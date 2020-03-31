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
    void print();
    
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

  template<typename T>
  void MyQueue<T>::print()
  {
    Cell<T> *ptr = front;
    while(ptr != nullptr)
      {
	std::cout << ptr->val <<" ";
	ptr = ptr->next;
      }

    std::cout<<std::endl;
    
  }
 
  
}


namespace arrayqueue
{
  //es bueno definir una capacidasd inicail para nuestra cola, luego se declara como una constante esa capacidad a un numerodadoe n este caso 10,ques es de memoria
  const int INITIAL_CAPACITY = 10; 
  
  template<typename T>
  class MyQueue
  {
  private:
    T *array;
    int capacity;
    int back;
    int front;
    int count;

    void expand_capacity();
  public:
    MyQueue();
    ~MyQueue();

    bool empty();
    int size();
    T get_front();
    T get_back();
    void push(T c);
    void pop();
    void print();
  };

  //para separar memoria es con new
  //capacity es diferente al tamano de la cola
  template<typename T>
  MyQueue<T>::MyQueue()
  {
    capacity = INITIAL_CAPACITY;
    //separamos el espacio en memoria
    array = new T[capacity];
    back = front = 0;
    count = 0;
  }

  template<typename T>
  MyQueue<T>::~MyQueue()
  {
    //en este caso diferente al de la lista, si le colocamos los corchetes porque es como tal todo un arreglo lo que queremos eliminar
    delete[] array;
  }

  template<typename T>
  bool MyQueue<T>::empty()
  {
    //esta vacio
    return count == 0;
  }

  template<typename T>
  int MyQueue<T>::size()
  {
    return count;
  }

  template<typename T>
  T MyQueue<T>::get_front()
  {
    //se retora el elemento ubicado en el array front
    if(empty())
      {
	throw std::runtime_error("Attempting to access an element on an empty queue");
      }
    else
      {
	return array[front];
      }
  }

  template<typename T>
  T MyQueue<T>::get_back()
  {
    //se retorna back menos uno porque back esta un espacio adelante de su elemento como tal, no es como la cell que estaba en ese mismo lugar
    if(empty())
      {
	throw std::runtime_error("Attempting to access an element on a empty queue");
      }
    else
      {
	return array[back-1];
      }
  }
  template<typename T>
  void MyQueue<T>::push(T c)
  {
    //si el tamano del arreglo ya es igual a la capacidad, nada que hacer hay que expamndir esta
    if(count == capacity)expand_capacity();
    //se coloca en back el nuevo elemento
    array[back] = c;
    //lo que garantiza que si hay espacio de pops anteriores al inicio se pueda como tal almacenarce alla
    back = (back+1)%capacity;
    count++;
    
  }

  template<typename T>
  void  MyQueue<T>::pop()
  {
    if(empty())
      {
	throw std::runtime_error("Attempting to delete an element on an empty queue");
      }
    else
      {
	
	//voy a borrar el pimer elemento en la cola en realidad moverme uno
	front = (front+1)%capacity;
	count--;
      }
  }

  template<typename T>
  void MyQueue<T>::expand_capacity()
  {
    //guaro un apuntador que tenga esa antigua memoria
    T *old_array = array;
    int old_capacity = capacity;
    //duplico el tamano de memori
    capacity *= 2;
    //creo el nuevo array con esa memoria duplicada
    array = new T[capacity];
    //este es el caso ideal donde solo de debe mover cada elemento en su misma posicion
    if(back > front)
      {
	for(int i = 0; i < back;i++)
	  {
	    array[i] = old_array[i];
	  }
	
      }
    else
      {
	//primero para los elementos del final
	for(int i = 0; i < back; i++)
	  array[i] = old_array[i];
	int d = old_capacity - front;
	front = capacity - d;
	for(int i = front; i < capacity; i++)
	  array[i] = old_array[i-old_capacity];
      }
    delete[] old_array;
  }

  template<typename T>
  void MyQueue<T>::print()
  {
    std::cout<<"f:"<<front<<" b:"<<back<<std::endl;
    for(int i = 0; i < capacity; ++i)
      {
	if(back > front)
	  {
	    if(i >= front && i < back && ! empty())
	      std::cout<<array[i]<<" ";
	    else
	      std::cout<<"- ";
	  }
	else
	  {
	    if((i < back || i >= front) && !empty())
	      std::cout<<array[i]<<" ";
	    else
	      std::cout<<"- ";
	  }
      }
    std::cout<<std::endl;
  }
  

  
  
}

#endif
