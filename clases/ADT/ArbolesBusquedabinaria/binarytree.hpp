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
  //nodo padre
  BSTNode<T> *parent;
  
};

template <typename T>
class BST
{

private:
  //tenemos la raiz
  BSTNode<T> *root;
  void display_node(BSTNode<T>* p_node, int count);
  void insert_node(BSTNode<T> *&node, T k, BSTNode<T>*p);
  //no accedemos nunca desde afuera
  //node desde donde comenzamos a destruir recursivamente
  void destroy_recursive(BSTNode<T> *node);
  BSTNode<T>* find_node(BSTNode<T> *node, T k);
  //Minimo y maximo
  BSTNode<T>* minimum(BSTNode<T> *t);
  BSTNode<T>* maximum(BSTNode<T> *t);

public:
  BST(){root = nullptr;}
  ~BST(){destroy_recursive(root);} //destructor 
  //crea un nodo, y derecho e izquiedo apunta a nullptr
  
  void display();
  bool empty();
  /*--------------*/
  void test(T val);
  void insert(T k){insert_node(root,k, nullptr);}
  BSTNode<T>* find(T k){return find_node(root, k);}
  //Predecesor y sucesor
  BSTNode<T> *predecessor(BSTNode<T> *pNode); //le doy un nodo y me deberia retorna el predecesor de este
  BSTNode<T> *successor(BSTNode<T> *pNode);

  //Removiendo Nodos
  BSTNode<T>* remove_node(BSTNode<T> *node, T k);

};

template <typename T>
BSTNode<T>* BST<T>::remove_node(BSTNode<T>* node, T k) {
  BSTNode<T>* n = find_node(node, k);
  if(n != nullptr){
    BSTNode<T>* p = n->parent;
    
    //Case 1: No children
    if(n->left == nullptr && n->right == nullptr){
      //
      std::cout<<"Case1\n";
      //
      if(p == nullptr){ //if node is root
	root = nullptr;  
      }else{
	if(n == p->left) //if n is left child
	  p->left = nullptr;
	else
	  p->right = nullptr;
      }
      delete n;
    }
    
    //Case 2: One child
    else if(n->left == nullptr || n->right == nullptr){
      //
      std::cout<<"Case2\n";
      //
      BSTNode<T>* c;
      if(n == p->left){ //if n is left child
	if(n->left != nullptr) //if child was left
	  c = n->left;
	else //if child was right
	  c = n->right;
	if(p != nullptr) p->left = c;
      }else{ //if n is right child
	if(n->left != nullptr) //if child was left
	  c = n->left;
	else //if child was right
	  c = n->right;
	if(p != nullptr) p->right = c;
      }
      c->parent = p;
      delete n;
    }

    //Case 3: Two children
    else{
      //
      std::cout<<"Case3\n";
      //
      BSTNode<T>* s = successor(n);
      T new_key = s->key;
      p = remove_node(s->parent, s->key);
      n->key = new_key;
    }

    return p;
  }
  return nullptr;
}


template<typename T>
BSTNode<T> *BST<T>::predecessor(BSTNode<T> *pNode)
{
  //continua mientras siga siendo hijo izquierdo de su padre
  if(pNode->left != nullptr)
    {
      return maximum(pNode->left);
    }
  else
    {
      while(((pNode->parent)->left == pNode) && (pNode->parent) != nullptr)
	{
	  pNode = pNode->parent;
	}

      return pNode->parent;
    }
}

template<typename T>
BSTNode<T> *BST<T>::successor(BSTNode<T> *pNode)
{
  if(pNode->right != nullptr)
    {
      return minimum(pNode->right);
    }
  else
    {
      while(((pNode->parent)->right == pNode) && (pNode->parent) != nullptr)
	{
	  pNode = pNode->parent;
	}

      return pNode->parent;
    }

}

template<typename T>
BSTNode<T> *BST<T>::minimum(BSTNode<T> *t)
{

  /*
  //mientras que el de la izquierda sea diferente de nullptr
  while(t->left != nullptr)
    //t ahora se va cambiando al nodo que tiene a la izquierda asi va moviendose
    t = t->left;

  return t;
  */
  

  if(t->left == nullptr)
    {
      return t;
    }
  else
    {
      minimum(t->left);
    }
}

template<typename T>
BSTNode<T> *BST<T>::maximum(BSTNode<T> *t)
{
  //mismo principio de minimo pero ahora hacia la derecha con maximun
  /*
  while(t->right != nullptr)
    {
      t = t->right;
    }
  return t;
  */

  if(t->right == nullptr)
    {
      return t;
    }
  else
    {
      maximum(t->right);
    }
}




template<typename T>
void BST<T>::insert_node(BSTNode<T> *&node, T k, BSTNode<T> *p)
{

  if(node == nullptr)
    {
      node = new BSTNode<T>;
      node->key = k;
      node->left = nullptr;
      node->right = nullptr;
      node->parent = p;
    }
  else
    {
      if(k != node->key)
	{
	  if(k < node->key)
	    {
	      insert_node(node->left, k, node);
	    }
	  else
	    {
	      insert_node(node->right, k, node);
	    }
	}
    }

  

}

template<typename T>
void BST<T>::test(T val)
{

  //std::cout<<"Lowest element: "<<minimum(root)->key<<std::endl;
  //std::cout<<"Highest element: "<<maximum(root)->key<<std::endl;
  //std::cout<<"El predecessor de: "<<val<<" es "<<predecessor(find(val))->key<<std::endl;
  //std::cout<<"El sucessor de: "<<val<<" es "<<sucessor(find(val))->key<<std::endl;
  remove_node(find_node(root, val), val);
  
}



//empty
template<typename T>
bool BST<T>::empty()
{
  return root == nullptr;
}

//muestra el arbol como nos esta quedando
template<typename T>
void BST<T>::display_node(BSTNode<T> *p_node, int count)
{
  //recursion
  count++;
  if(p_node != nullptr)
    {

      display_node(p_node->left, count);	
      std::cout<< "("<<count -1<< ")"<<p_node->key<<" ";
      display_node(p_node->right, count);
	
    }
}

template<typename T>
void BST<T>::destroy_recursive(BSTNode<T> *node)
{
  if(node != nullptr)
    {
      destroy_recursive(node->left);
      destroy_recursive(node->right);
      delete node;
    }
}

template<typename T>
BSTNode<T> * BST<T>::find_node(BSTNode<T> *node, T k)
{
  if(node == nullptr) return nullptr;
  if(node->key == k) return node;
  if(node->key < k)
    return find_node(node->right, k);
  else
    return find_node(node->left, k);
}



template<typename T>
void BST<T>::display()
{
  //wraper para no acceder al root desde afuera
  int contador = 0;
  display_node(root, contador);
  std::cout<<std::endl;
}
#endif
