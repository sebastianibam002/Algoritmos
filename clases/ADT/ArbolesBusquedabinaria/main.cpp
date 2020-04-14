#include "binarytree.hpp"
#include <string>
using namespace std;

int main()
{
  /*
  
  BST<string> myTree;

  myTree.insert("Grumpy");
  myTree.insert("Bashful");
  myTree.insert("Doc");
  myTree.insert("Dopey");
  myTree.insert("Happy");
  myTree.insert("Sneezy");
  myTree.insert("Sleepy");
  myTree.display();
  string name = "Dopey";
  myTree.test("Sneezy");
  
  */
  
  BST<int> myTree;
  myTree.insert(30);
  myTree.insert(16);
  myTree.insert(40);
  myTree.insert(1);
  myTree.insert(20);
  myTree.insert(36);
  myTree.insert(-1);
  myTree.insert(2);
  myTree.insert(17);
  myTree.insert(32);
  myTree.insert(4);
  myTree.insert(15);
  myTree.display();
  myTree.test(15);
  myTree.test(32);
  
  return 0;
}
