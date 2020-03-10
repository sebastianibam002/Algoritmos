#include <iostream>
#include <cmath>
using namespace std;
class Vector2D
{
private:
  double x;
  double y;
  
public:
  Vector2D();
  Vector2D(double, double);
  ~Vector2D();
  

 
  double norm();
  void set_x(double);
  void set_y(double);
  double get_x();
  double get_y();
  
};
  
  Vector2D::Vector2D()
  {
    
    
    x= 0.;
    y = 0.;
    
  }

Vector2D::Vector2D(double pX, double pY)
  {
    
    
    x= pX;
    y = pY;
    
  }


Vector2D::~Vector2D(){}
double Vector2D::norm()
{
  return sqrt(x*x +y*y);
}

void Vector2D::set_x(double pX)
{
  x = pX;
}

void Vector2D::set_y(double pY)
{
  y = pY;
}
double Vector2D::get_x()
{

  return x;
}
double Vector2D::get_y()
{
  return y;
}

int main()
{
  Vector2D myVec(2,10);
  cout<<"x: "<< myVec.get_x()<<endl;
  cout<<"y: "<< myVec.get_y()<<endl;
  cout << "normal: "<<myVec.norm()<<endl;
  //cambio ahora sus valores
  myVec.set_x(44);
  myVec.set_y(55);
  cout<<"Se cambiaron los valores"<<endl;
  cout<<"x: "<< myVec.get_x()<<endl;
  cout<<"y: "<< myVec.get_y()<<endl;  
  
  cout << "normal: "<<myVec.norm()<<endl;

  return 0;
  
  

  
}
