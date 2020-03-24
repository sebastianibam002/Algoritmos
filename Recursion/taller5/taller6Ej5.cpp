/*
 *                                   (ABCD)
 *         A(BCD)                 B(ACD)       C(BAD)        D(BCA)
 *    AB(CD)     AC(BD)   AD(CB)    ........
 * ABC(D)  ABD(C)   .........   
 */


#include <iostream>
#include <string>
using namespace std;

string goes_first(string s, char c) {
  unsigned int i = s.find(c);
  if(i < s.length()){
    s[i] = s[0];
    s[0] = c;
  }
  return s.substr(1,s.length()-1);
}

void permutations(string fix, string perm) {
  if(perm.length() == 0){
    cout <<"fix: " <<fix << endl;
  }else{
    for(int j = 0; j < perm.length(); j++){
      
      char first = perm[j];
      cout<<"j: "<<j<<" first: "<<perm[j]<<" permleng:"<<perm.length() <<endl;
      string new_perm = goes_first(perm, first);
      cout<<"the new perm: "<<new_perm<<endl;
      permutations(fix+first, new_perm);
    }
  }
}

void permute_str(string s) {
  permutations("",s);
}



int main() {
  string s = "ABCDE";

  permute_str(s);
  
  return 0;
}
