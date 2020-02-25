int lin_suc(const vector<int> &ivec, int key) {
  //obtiene como parametro un vector y una key y retorna el indice del numero estrructamente mayor que la key en el vector
  int mayorElemento = 1e9;
  int indice = -1;
  for(unsigned int i = 0; i < ivec.size(); i++)
    {
      if(ivec[i] > key && ivec[i] <= mayorElemento)
	{
	  mayorElemento = ivec[i];
	  indice = i;
	  
	}
    }

  return indice;

  
}
