#ifndef __VEC2D_HPP
#define __VEC2D_HPP

#include <cmath>
//se incluye la libreria
#include <iostream>
using namespace std;

class Vector2D { //Name of the class
private:
  double x; //attribute
  double y; //attribute
public:
  Vector2D(); //constructor
  ~Vector2D(); //destructor
  
  double get_x();
  double get_y();
  void set_x(double X);
  void set_y(double Y);
  Vector2D& operator=(Vector2D& v);
  
  double norm(); //method
};

double operator*(Vector2D& v1, Vector2D& v2);
Vector2D operator*(Vector2D& v, double d);
Vector2D operator*(double d, Vector2D& v);
// retorna un objeto ofstram por referencoa, permite ofstrem& le paso
ostream& operator<<(ostream& os, Vector2D& v);

#endif
