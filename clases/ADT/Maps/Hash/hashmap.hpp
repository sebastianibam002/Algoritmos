#ifndef _HASHMAP_HPP
#define _HASMAP_HPP
#include <string>
#include<iostream>

const int INITIAL_SIZE = 5;

template<typename VT>
struct KeyValueNode
{
  std::string key;
  VT value;
  KeyValueNode<VT> *next;
};

template <typename VT>
class HashMap
{
private:
  KeyValueNode<VT> **table;
  int table_size;
  int count;
  //para volver a organizar
  void reHash();
  //hacer el reHash
  int hash_fun(std::string key);
  KeyValueNode<VT>* search_bucket(int i, std::string key);
  
public:
  HashMap();
  ~HashMap();

  int size();
  bool empty();
  
  void insert(std::string pKey, VT value);
  void display();
  void clear();
  /*
  
  VT get(std::string key);
  bool contains(std::string key);
  void remove(std::string key);
  
  
  void display();
  
  */

};


template<typename VT>
void HashMap<VT>::reHash()
{

  int old_table_size = table_size;
  KeyValueNode<VT> **old_table = table;
  table_size = 2*table_size;
  table = new KeyValueNode<VT>*[table_size];
  for(int i = 0; i < table_size;++i) table[i] = nullptr;
  count = 0;
  //un cursor para ir recorriendolo
  KeyValueNode<VT> *cursor;
  //creo la nueva tabla
  
  
  for(int i = 0; i < old_table_size; ++i)
    {
      cursor = old_table[i];
      while(old_table[i] != nullptr)
	{
	  insert(cursor->key, cursor->value);
	  cursor = cursor->next;
	  delete old_table[i];
	  old_table[i] = cursor;
	}
    }
  delete[] old_table;

}

template<typename VT>
HashMap<VT>::~HashMap<VT>()
{
  clear();
  delete[] table;
}


template<typename VT>
void HashMap<VT>::clear()
{

  
  for(int i = 0; i < table_size; ++i)
    {
      clear_bucket(table[i]);
      table[i] = nullptr;
      //std::cout<<table[i]<<std::endl;
      
    }

 

  // std::cout<<"borrado terminado"<<std::endl;
  
  /*
    OPCION PROFE
  KeyValueNode<VT> *cursor;
  for(int i = 0; i < table_size; ++i)
    {
      cursor = table[i];
      while(table[i] != nullptr)
	{
	  cursor = cursor->next;
	  delete table[i];
	  table[i] = cursor;
	}

      std::cout<<table[i]<<std::endl;
    }
  count = 0;
  */
}

template<typename VT>
void clear_bucket(KeyValueNode<VT>* pNodo)
{
  KeyValueNode<VT>* temp;
  
  if(pNodo != nullptr)
    {
      // std::cout<<pNodo->key<<std::
      temp = pNodo->next;
      delete pNodo;
      
      clear_bucket(temp);
    }
  
}



//constructor
template<typename VT> 
HashMap<VT>::HashMap()
{
  
  table_size = INITIAL_SIZE;
  table = new KeyValueNode<VT>*[INITIAL_SIZE];
  for(int i = 0; i < table_size; i++)
    { 
      table[i] = nullptr;
    }
  count = 0;
}

template<typename VT>
int HashMap<VT>::size()
{
  return count;
}

template<typename VT>
bool HashMap<VT>::empty()
{
  return count==0;
}

template<typename VT>
int HashMap<VT>::hash_fun(std::string key)
{
  int index = 0;
  for(char c : key)
    index+= c;
  return index % table_size;
}

template<typename VT>
void HashMap<VT>::insert(std::string pKey, VT value)
{
  
  
  int entra  = hash_fun(pKey);
  //std::cout<<"insertandp el 6"<<std::endl;
  KeyValueNode<VT>* esta = search_bucket(entra, pKey);
  //
  //std::cout<<"es nullptr: "<< esta<<std::endl;
  
  if(esta == nullptr && count < (2*table_size))
    {
      KeyValueNode<VT>*temporal = new KeyValueNode<VT>;
      temporal->value = value;
      temporal->key = pKey;
      //el next ahora es el primero del tabl
      temporal->next = table[entra];
      //lo introduzco al inicio del bucket
      table[entra]= temporal;
      count++;
    }
  else if(esta == nullptr && count == (2* table_size))
    {
      //hay que hacer el rehash
      reHash();
      insert(pKey, value);
    }
  else
    {
      //remplaza
      
      esta->value=value;
    }
  //table[entra] = temp;
  
  
}

template<typename VT>
KeyValueNode<VT>* HashMap<VT>::search_bucket(int i, std::string key)
{

  KeyValueNode<VT>* elemento = new KeyValueNode<VT>;
  if(table[i] != nullptr)
    {
      
      elemento->key = table[i]->key;
      elemento->value = table[i]->value;
      elemento->next = table[i]->next;
      
      while(elemento != nullptr)
	{
	  
	  if(elemento->key == key)
	    return elemento;
	  elemento = elemento->next;
	  
	}
    }


  return nullptr;
}

template <typename VT>
void HashMap<VT>::display()
{
  std::cout<<count<<" elements:\n";
  KeyValueNode<VT>* cursor;
  for(int i = 0; i <table_size; ++i)
    {
      cursor = table[i];
      while(cursor != nullptr)
	{
	  std::cout<<"("<<cursor->key<< ","<<cursor->value<<")";
	  cursor =cursor->next;
	}
      std::cout<<std::endl;
    }
}
#endif
