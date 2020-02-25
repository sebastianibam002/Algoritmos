
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

