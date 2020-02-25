#include <iostream>
#include <vector>
//#include "functions.hpp"
using namespace std;
#include <vector>
#include <iostream>
using namespace std;


int pred(const vector<int> &ivec, int key) {
  int strict_min = -1e9;
  int id = -1;

  int left = 0;
  int right = ivec.size()-1;
  while(left <= right){
    int mid = (right + left) / 2;
    cout<<"ivec[mid] "<<ivec[mid]<<" key: "<<key<< " strict_min: "<<strict_min<<endl;
    if(ivec[mid] < key && ivec[mid] >= strict_min){
      strict_min = ivec[mid];
      id = mid;
    }
    if(key > ivec[mid])
      left = mid+1;
    else
      right = mid-1;
    //cout << left << " " << right<<endl;
  }
  
  return id;
}





int main() {
    int key;
    vector<int> tst = {0, 2, 4, 6, 8};
    
    // test 1
    key = 5;
    cout << "key: " << key << " pred: " << pred(tst, key) << endl;
    
    // test 2
    key = 6;
    cout << "key: " << key << " pred: " << pred(tst, key) << endl;
    
    // test 3
    key = 0;
    cout << "key: " << key << " pred: " << pred(tst, key) << endl;
    
    // test 4
    key = 9;
    cout << "key: " << key << " pred: " << pred(tst, key) << endl;

    // test 5
    key = 1;
    cout << "key: " << key << " pred: " << pred(tst, key) << endl;
    
    return 0;
}
