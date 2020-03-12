#ifndef _DYNARRAY_HPP
#define _DYNARRAY_HPP
class DynArray
{
private:
  int *array;
  int size;

public:
  DynArray(int s);
  ~DynArray();



  void set_element(int pos, int val);
  int get_element(int pos);
  int getsize();
  bool operator==(DynArray&a);
  DynArray& operator=(DynArray& v);
};

DynArray operator+(DynArray& arreglo_dos);
#endif
