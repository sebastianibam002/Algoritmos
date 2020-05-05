#include "bheap.hpp"
using namespace std;

int main()
{
  Bheap<int> prueba;
  prueba.push(12);
  prueba.push(33);
  prueba.push(1);
  prueba.push(22);
  prueba.push(15);
  prueba.push(43);
  prueba.push(32);
  prueba.push(11);
  prueba.push(21);
  prueba.push(9);
  prueba.push(73);
  prueba.push(101);
  prueba.printHeap();
  prueba.pop();
  prueba.printHeap();
  prueba.verify();
  return 0;
}
