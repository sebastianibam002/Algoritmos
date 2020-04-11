#include "binarytree.hpp"
using namespace std;

int main()
{
  BST<int> myTree;

  myTree.insert(3);
  myTree.insert(6);
  myTree.display();
  return 0;
}
