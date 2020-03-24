#ifndef _CHARSTACK_HPP
#define _CHARSTACK_HPP
#include <stdexcept>

class CharStack
{

private:
  char *elements;
  int capacity;
  int count;

  public:
  CharStack();
  ~CharStack();

  int size();
  void clear();
  bool empty();
  char top();
  void expand_capacity();
  void push(char c);
  char pop();
};
#endif
