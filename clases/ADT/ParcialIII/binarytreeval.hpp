#ifndef _BINARYTREE_HPP
#define _BINARYTREE_HPP

#include <stdexcept>
#include <iostream>

template <typename keyType, typename valType>
struct BSTNode {
  keyType key;
  valType value;
  BSTNode<keyType,valType> *left;
  BSTNode<keyType,valType> *right;
  BSTNode<keyType,valType> *parent;
};

template <typename keyType, typename valType>
class BST {
private:
  BSTNode<keyType,valType> *root;

  void insert_node(BSTNode<keyType,valType>* &node,
		   BSTNode<keyType,valType> *p,
		   keyType k, valType v);
  void display_node(BSTNode<keyType,valType> *node, int count);
  void destroy_recursive(BSTNode<keyType,valType>* node);
  BSTNode<keyType,valType>* find_node(BSTNode<keyType,valType>* node,
				      keyType k);
  BSTNode<keyType,valType>* minimum(BSTNode<keyType,valType> *node);
  BSTNode<keyType,valType>* maximum(BSTNode<keyType,valType> *node);
  BSTNode<keyType,valType>* predecessor(BSTNode<keyType,valType> *node);
  BSTNode<keyType,valType>* successor(BSTNode<keyType,valType> *node);
  BSTNode<keyType,valType>* remove_node(BSTNode<keyType,valType>* &node,
					keyType k);
  
public:
  BST() { root = nullptr; }
  ~BST() { destroy_recursive(root); }
  
  bool empty() { return root == nullptr; }
  /**/
  void insert(keyType k, valType v) { insert_node(root, nullptr, k, v); }
  /**/
  void display();
  BSTNode<keyType,valType>* find(keyType k) { return find_node(root, k); }
  BSTNode<keyType,valType>* remove(keyType k) { return remove_node(root, k); }
  /**/
  valType get(keyType k);
  /**/
};


/**/
template <typename keyType, typename valType>
void BST<keyType,valType>::insert_node(BSTNode<keyType,valType>* &node,
				       BSTNode<keyType,valType> *p,
				       keyType k, valType v) {

  if(node == nullptr)
    {
      //es la opcion donde el node que es el root sea igual a nullptr
      node = new BSTNode<keyType,valType>;
      node->key = k;
      node->value = v;
      node->left = nullptr;
      node->right = nullptr;
      node->parent = p;
      
    }
  else
    {
      //si la llave nueva es diferente a la ultima entonces
      if(k != node->key)
	{
	  if(k < node->key)
	    {
	      //en el caso de que la nueva llave sea menor
	      insert_node(node->left, node, k, v);
	    }
	  else
	    {
	      //en el caso de que la llave sea mayor
	      insert_node(node->right, node, k, v);
	    }
	}
      else
	{
	  //en el caso de que la llave sea igual se debe reemplzar el valor
	  BSTNode<keyType, valType> *anterior = find(k);
	  anterior->value = v;
	}
    }
  
}

template <typename keyType, typename valType>
valType BST<keyType,valType>::get(keyType k) {

  BSTNode<keyType, valType> *ret= find(k); 
  if(ret == nullptr)
    {
      throw std::runtime_error("cannot get an nonexistence element from the tree");
    }
  else
    {
      return ret->value;
    }
  
}
/**/

template <typename keyType, typename valType>
void BST<keyType,valType>::display_node(BSTNode<keyType,valType> *node, int count) {
   if(node != nullptr){
    count++;
    display_node(node->left, count);
    std::cout << count-1 << ":(" << node->key << ","
	      << node->value << ") ";
    display_node(node->right, count);
  }
}

template <typename keyType, typename valType>
void BST<keyType,valType>::display() {
  int count = 0;
  display_node(root, count);
  std::cout << std::endl;
}

template <typename keyType, typename valType>
void BST<keyType,valType>::destroy_recursive(BSTNode<keyType,valType>* node) {
  if(node != nullptr){
    destroy_recursive(node->left);
    destroy_recursive(node->right);
    delete node;
  }
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::find_node(BSTNode<keyType,valType> *node, keyType k) {
  if(node == nullptr) return nullptr;
  if(node->key == k) return node;
  if(node->key < k)
    return find_node(node->right, k);
  else
    return find_node(node->left, k);
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::minimum(BSTNode<keyType,valType> *node) {
  while(node->left != nullptr)
    node = node->left;
  return node;
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::maximum(BSTNode<keyType,valType> *node) {
  while(node->right != nullptr)
    node = node->right;
  return node;
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::predecessor(BSTNode<keyType,valType> *node) {
  if(node->left != nullptr)
    return maximum(node->left);
  //If no left child predecessor might one of the ancestors
  BSTNode<keyType,valType>* p = node->parent;
  while(p != nullptr && node == p->left){ //while I'm left child
    node = p;
    p = node->parent;
  }
  return p;
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::successor(BSTNode<keyType,valType> *node) {
  if(node->right != nullptr)
    return minimum(node->right);
  //If no right child successor might one of the ancestors
  BSTNode<keyType,valType>* p = node->parent;
  while(p != nullptr && node == p->right){ //while I'm right child
    node = p;
    p = node->parent;
  }
  return p;
}

template <typename keyType, typename valType>
BSTNode<keyType,valType>* BST<keyType,valType>::remove_node(BSTNode<keyType,valType>* &node, keyType k) {
  BSTNode<keyType,valType>* n = find_node(node, k);
  if(n != nullptr){
    BSTNode<keyType,valType>* p = n->parent;
    
    //Case 1: No children
    if(n->left == nullptr && n->right == nullptr){
      //
      //std::cout<<"Case1\n";
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
      //std::cout<<"Case2\n";
      //
      BSTNode<keyType,valType>* c;
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
      //std::cout<<"Case3\n";
      //
      BSTNode<keyType,valType>* s = successor(n);
      keyType new_key = s->key;
      p = remove_node(s->parent, s->key);
      n->key = new_key;
    }

    return p;
  }
  return nullptr;
}


#endif
