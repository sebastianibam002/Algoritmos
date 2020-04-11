#include "polygon.hpp"

/*
 * Implementaciones aquí
*/


RegularPolygon::RegularPolygon(int p_num_sides, unsigned int p_long_side)
{
  n_sides = p_num_sides;
  side_len = p_long_side; 
  
}

RegularPolygon::~RegularPolygon(){}

int RegularPolygon::get_n_sides()
{
  return n_sides;
}

unsigned int RegularPolygon::get_side_len()
{
  return side_len;
  
}

unsigned int RegularPolygon::perimeter()
{
  return (n_sides * side_len);
}

double RegularPolygon::area()
{
  const double pi = std::acos(-1);
  return (n_sides * (std::pow(side_len, 2))) / (4* std::tan(pi/n_sides));
}
RegularPolygon operator+(RegularPolygon poly_1, RegularPolygon poly_2)
{
    RegularPolygon poly_3(poly_1.get_n_sides() + poly_2.get_n_sides(), (poly_1.get_side_len() + poly_2.get_side_len())/2);

    return poly_3;
}

RegularPolygon RegularPolygon::operator=(RegularPolygon polyP)
{
  n_sides = polyP.get_n_sides();
  side_len = polyP.get_side_len();

  return polyP;
}

RegularPolygon RegularPolygon::operator*(int i, RegularPolygon& p)
{
  RegularPolygon p2(i * n_sides, side_len);
  return p2;
  
}

RegularPolygon RegularPolygon::operator*( RegularPolygon& p, int i)
{
  RegularPolygon p2(i * n_sides, side_len);
  return p2;
  
}
