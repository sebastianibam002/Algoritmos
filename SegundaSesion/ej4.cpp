#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool is_parenthesis(char pChar)
{

  bool retorno = false;
  if(pChar == ')' || pChar == ']' || pChar == '}' || pChar == '(' || pChar == '[' || pChar == '{')
    {
      retorno = true;
    }

  return retorno;
}
bool is_pair(char pTop, char pNew)
{
  //revisa si el nuevo elemento es capaz de sacarlo
  bool retorno = false;
  switch(pTop)
    {
    case '(':
      if(pNew == ')')
	{
	  retorno = true;
	}
      break;
    case '[':
      if(pNew == ']')
	{
	  retorno = true;
	}
      break;
    case '{':
      if(pNew == '}')
	{
	  retorno = true;
	  
	}
      break;
     
    }

  return retorno;
}

int main()
{
  string code = "if)((a[3] =={2,4,1}) and has_element(b))";
  stack<char> p;

  for(unsigned int i = 0; i < code.length(); i++)
    {
      char c = code.at(i);
      if(is_parenthesis(c))
	{
	  if(!p.empty() && is_pair(p.top(), c))
	    {
	      p.pop();
	    }
	  else
	    {
	      if(c=='(' || c == '[' || c == '{')
		{
		  p.push(c);
		}
	      else
		{
		  cout<<"Closing unopened parenthesis"<<endl;
		  return -1;
		}
	    }
	}
    }
  return 0;
}
