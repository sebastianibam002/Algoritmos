#include <vector>
#include <iostream>
using namespace std;


int lin_suc(const vector<int> &ivec, int key) {
  //obtiene como parametro un vector y una key y retorna el indice del numero estrructamente mayor que la key en el vector
  int mayorElemento = 1e9;
  int indice = -1;
  for(unsigned int i = 0; i < ivec.size(); i++)
    {
      if(ivec[i] > key && ivec[i] <= mayorElemento)
	{
	  mayorElemento = ivec[i];
	  indice = i;
	  
	}
    }

  return indice;

  
}


int main() {
    int key;
    vector<int> tst = {0, 2, 4, 6, 8};
    
    // test 1
    key = 5;
    cout << "key: " << key << "lin_suc: " << lin_suc(tst, key) << endl;
   
    
    // test 2
    key = 4;
    cout << "key: " << key << "lin_suc: " << lin_suc(tst, key) << endl;
   
    
    // test 3
    key = 0;
    cout << "key: " << key << "lin_suc: " << lin_suc(tst, key) << endl;
   
    
    // test 4
    key = 9;
    cout << "key: " << key << "lin_suc: " << lin_suc(tst, key) << endl;
 
    
    return 0;
}
