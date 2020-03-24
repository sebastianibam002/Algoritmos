#include "vector2d.hpp"
#include <iostream>
using namespace std;

int main()
{
  Vector2D myVec;
  myVec.set_x(11.1);
  myVec.set_y(2.5);
  cout<<myVec.norm()<<endl;

  return 0;
}
