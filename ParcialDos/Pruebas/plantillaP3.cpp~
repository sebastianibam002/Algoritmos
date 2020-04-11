#include <iostream>
#include "polygon.hpp" 
using namespace std;


int main() {
  RegularPolygon polya(4,1);
  RegularPolygon polyb(3,1);

  //RegularPolygon polyc = polya + polyb;
  cout << polya.get_n_sides() << " , " << polya.get_side_len() << endl;

  cout<< polya.perimeter()<<endl;
  cout<<polya.area()<<endl;

  RegularPolygon polyc = polya + polyb;
  cout<<polyc.area()<<endl;
  //RegularPolygon polyd = 3 * polyb;
  //cout << polyd.get_n_sides() << " , " << polyd.get_side_len() << endl;
  
  return 0;
}
