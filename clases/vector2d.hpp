#ifndef _VECTOR2D_HPP
#define _VECTOR2D_HPP

class Vector2D
{
private:
  double x;
  double y;
public:
  Vector2D() : x(0.0), y(0.0){}
  ~Vector2D();

  double norm();
  void set_x(double p_value);
  void set_y(double p_value);
};



#endif
