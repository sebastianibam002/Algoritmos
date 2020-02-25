#include <iostream>
#include <stack>
#include <queue>
using namespace std;



void invert(queue<int>& Q)
{
  //recibe como parametroos una cola que contiene variables de tipo entero y no retorna nada, modifica la cola de manera que sus elementos queden invertidos
  stack<int> retorno;
  while(!Q.empty())
    {
      retorno.push(Q.front());
      Q.pop();
    }
  
  while(!retorno.empty())
    {
      Q.push(retorno.top());
      retorno.pop();
    }
  
  
}

int main() {
  queue<int> q;
  for(int i = 0; i < 10; ++i){
    q.push(10*i);
    cout << q.back() << " ";
  }
  cout << endl;

  invert(q);

  for(int i = 0; i < 10; ++i){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  
  return 0;
}
