
float median(stack<float>& S) {
  //esta funcion recibe como parametros un stack conteniendo flotantes y retorna la mediana de esta en una variable de tipo flotante
  int medio = 0;
  int contador = 0;
  float primerElem = 0;

  medio = S.size()/2;
  
  if(S.size() % 2 == 0)
    {
      
      
      while(!S.empty())
	{
	  if(medio == (contador+1))
	    {
	      primerElem = S.top();
	      S.pop();
	      return (primerElem + S.top()) / 2;
	    }
	  contador += 1;
	  S.pop();
      
	}

    }
  else
    {
     
     
      while(!S.empty())
	{
	 
	  if(medio == contador)
	    {
	    
	      return S.top();
	    }
	  contador += 1;
	  S.pop();
	  
	}
    
    }
  
  
  
  return -1;
}
