#include <iostream>
#include "vec2d.hpp"
  
int main(){
  Vector2D my_vec; //Declare object of type Vector2D

  //myVec.x = 2.; //ERROR attr. x is private!
  //cout << myVec.y << endl; //ERROR attr. y is private!

  my_vec.set_x(2);
  my_vec.set_y(1);
  cout << my_vec.get_y() << endl;
  cout << my_vec.norm() << endl; //O.K. norm() is public

  Vector2D other_vec;
  other_vec.set_x(1);
  other_vec.set_y(1);

  cout << my_vec*other_vec << endl;
  Vector2D v1 = 3*my_vec;
  cout << v1<<endl;
  
  return 0;
}
