#include <iostream>
using namespace std;

struct Point{
  double x;
  double y;
};

int main()
{
  Point p;
  p.x = 0.;
  p.y = 1.;
  cout<<"("<<p.x<<","<<p.y<<")"<<endl;
  return 0;
}
