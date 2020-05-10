#include <string>
#include "binarytreeval.hpp"
using namespace std;


int main() {
    BST<string, int> my_tree;
    
    my_tree.insert("Grumpy", 4);
    my_tree.insert("Doc", 12);
    my_tree.insert("Sleepy", -32);
    my_tree.insert("Bashful", 21);
    my_tree.insert("Dopey", 0);
    my_tree.insert("Happy", -12);
    my_tree.insert("Sneezy", 1);
    
    my_tree.display();
    
    string name = "Dopey";
    if(!my_tree.find(name))
        cout << name << " is not in the tree.\n";
    else
        cout << name << " is in the tree!\n";
    
    my_tree.insert("Dopey", 100);
    my_tree.display();
    
    
    cout << "Value of Grumpy is " << my_tree.get("Grumpy") << endl;
    cout << "Value of Dopey is "<< my_tree.get("Dopey") << endl;
    
    
    my_tree.remove("Grumpy");
    my_tree.display();
    
    my_tree.remove("Doc");
    my_tree.display();
    
    my_tree.remove("Sleepy");
    my_tree.display();
    
    my_tree.remove("Bashful");
    my_tree.display();
    
    my_tree.remove("Happy");
    my_tree.display();
    
    my_tree.remove("Dopey");
    my_tree.display();
    
    my_tree.remove("Sneezy");
    my_tree.display();
    
    return 0;
}
