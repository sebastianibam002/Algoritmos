#include "charstack.hpp"

const int INITIAL_CAPACITY = 10;

CharStack::CharStack()
{
  capacity = INITIAL_CAPACITY;
  elements = new char[capacity];
  count = 0;
  
}

CharStack::~CharStack()
{
  delete[] elements;
}

int CharStack::size()
{
  return count;
}

void CharStack::clear()
{
  count = 0;
}

bool CharStack::empty()
{
  return count == 0;
}
char CharStack::top()
{
  if(empty())
    throw std::runtime_error("top: Attempting to get top from empty stack");

  return elements[count - 1];
}

void CharStack::expand_capacity()
{
  char *old_elem = elements;
  capacity *= 2;
  elements = new char[capacity];
  for(int i = 0; i < count; ++i)
    {
      elements[i] = old_elem[i];
    }

  delete[] old_elem;
}

void CharStack::push(char c)
{
  if(count == capacity) expand_capacity();
  elements[count++] = c;
}

char CharStack::pop()
{
  if(empty())
    throw std::runtime_error("pop: Attempting to pop an empty stack\n");

  return elements[--count];
}

