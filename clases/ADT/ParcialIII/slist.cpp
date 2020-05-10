//
//  slist.cpp
//  Created by Julian Rincon on 2020-05-05.
//

#ifdef slist_hpp
//#include <iostream>

// IMPLEMENTAR METODOS ACA ABAJO

// back y range_counting
template <typename T>
T List<T>::back() const {


    if (head == nullptr) {
        std::cout << "ERROR: peeking on empty List\n";
        std::exit(EXIT_FAILURE);
    }

    Node *curr = head;
    T data;
    while (curr != nullptr)
    {
    
      data = curr->data;
      curr = curr->next;
      
    }
    return data;
}


template<typename T>
int List<T>::range_counting(T begin, T end) const
{
  //me dan un rango de valores que puede tomar revisa todos los vagones de un tren y retorna el numero de vagones que tengan los pasajerosn en el rango cerrado desde begin hasta end
  Node *curr = head;
  int contador = 0;
  if(begin <= end)
    {
      while(curr != nullptr)
	{
	  //std::cout<<"data del curr"<<curr->data<<std::endl;
	  if(curr->data >= begin && curr->data <= end)
	    {
	      
	      contador++;
	    }
	  curr = curr->next;
      
	}

      return contador;
    }
  else
    {
      return -1;
    }
}


// NO PASARSE DE ESTE COMENTARIO


template <typename T>
List<T>::List() {
    count = 0;
    head = nullptr;
}


template <typename T>
List<T>::~List() {
    clear();
    head = nullptr;
}


template <typename T>
bool List<T>::empty() const {
    return count == 0;
}


template <typename T>
unsigned List<T>::size() const {
    return count;
}


template <typename T>
void List<T>::display() const {
    Node *curr = head;

    std::cout << "HEAD(" << size() << ") -> ";
    while (curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }
    std::cout << "nullptr\n";
}


template <typename T>
void List<T>::push_front(T item) {
    Node *node = new Node;
    node->data = item;

    if (head == nullptr)
        node->next = nullptr;
    else
        node->next = head;
    
    head = node;
    count++;
}





template <typename T>
T List<T>::front() const {
    if (head == nullptr) {
        std::cout << "ERROR: peeking on empty List\n";
        std::exit(EXIT_FAILURE);
    }
    return head->data;
}


template <typename T>
void List<T>::pop_front() {
    if (count == 1) {
        delete head;
        head = nullptr;
    } else {
        Node *node = head->next;
        delete head;
        head = node;
    }
    count--;
}


template <typename T>
void List<T>::clear() {
    while (!empty()) {
        pop_front();
    }
}


#endif /* slist_hpp */
