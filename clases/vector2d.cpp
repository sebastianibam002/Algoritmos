#include "vector2d.hpp"
#include <cmath>



Vector2D::~Vector2D(){}

double Vector2D::norm()
{
  return sqrt(x*x +y*y);
}

void Vector2D::set_x(double p_value)
{
  x = p_value;
}

void Vector2D::set_y(double p_value)
{
  y = p_value;
}
