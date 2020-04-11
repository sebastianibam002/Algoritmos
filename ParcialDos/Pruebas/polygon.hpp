#ifndef _POLYGON_HPP
#define _POLYGON_HPP

#include <cmath>

/*
 *Interfases aquí
 */

class RegularPolygon
{
private:
  int n_sides;
  unsigned int side_len;

public:
  //constructor
  RegularPolygon(int p_num_sides, unsigned int p_long_side);
  //destructor
  ~RegularPolygon();
  int get_n_sides();
  unsigned int get_side_len();
  unsigned int perimeter();
  double  area();
  RegularPolygon operator=(RegularPolygon polyP);



  
};

RegularPolygon operator+(RegularPolygon poly_1, RegularPolygon poly_2);
RegularPolygon operator*(int i, RegularPolygon &p);
RegularPolygon operator*(RegularPolygon &p, int i);

#endif
