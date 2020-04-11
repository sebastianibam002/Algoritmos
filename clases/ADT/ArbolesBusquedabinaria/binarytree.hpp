#ifndef _BINARYTREE_HPP
#define _BINARYTREE_HPP
#include <iostream>

template <typename T>
struct BSTNode
{
  //tiene un valor
  T key;
  //hijo izquierdo
  BSTNode<T> *left;
  //hijo derecho
  BSTNode<T> *right;
};

template <typename T>
class BST
{

private:
  //tenemos la raiz
  BSTNode<T> *root;
  void display_node(BSTNode<T>* p_node);
public:
  BST(){root = nullptr;}

  //crea un nodo, y derecho e izquiedo apunta a nullptr
  void insert(T p_key);
  void display();
  bool empty();
  
};

template<typename T>
void BST<T>::insert(T p_key)
{
  //creamos un nodo al inicio
  BSTNode<T> *new_node = new BSTNode<T>;
  new_node->key = p_key;
  new_node->left = nullptr;
  new_node->right = nullptr;
  
  if(empty())
    {
      root = new_node;
    }
  else
    {
      //si es mayor, se deja por la derecha
      if(root->key < new_node->key)
	{
	  root->right = new_node;
	}
      else
	{
	  root->left = new_node;
	}
      
    }
}

//empty
template<typename T>
bool BST<T>::empty()
{
  return root == nullptr;
}

//muestra el arbol como nos esta quedando
template<typename T>
void BST<T>::display_node(BSTNode<T> *p_node)
{
  //recursion
  
  if(p_node != nullptr)
    {
      if(p_node->left != nullptr)
	{
	  display_node(p_node->left);
	}
      std::cout<<p_node->key<<" ";
 
      if(p_node->right != nullptr)
	{
	  display_node(p_node->right);
	}
    }
}

template<typename T>
void BST<T>::display()
{
  //wraper para no accer al root desde afuera
  display_node(root);
  std::cout<<std::endl;
}
#endif
