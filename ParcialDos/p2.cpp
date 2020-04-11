void router_speedup (vector<string> &rooms, vector<int> &numcls, int range){
  //Su
  //código
  //aquí
  //recordar que coinciden es por indice

  for(int i = 0; i <= range; ++i)
    {
      int max_id = i;
      for(int j = i+1; j < numcls.size(); ++j)
	{
	  if(numcls[j] > numcls[max_id])
	    max_id = j;
	}
      //swapMod(i, max_id, numcls, rooms);
      string tempString = rooms[i];
      int temp = numcls[i];
      //cambios el valor de i por el de j
      numcls[i] = numcls[max_id];
      //hago lo mismo en el de las strings
      rooms[i] = rooms[max_id];  
      numcls[max_id] = temp;
      rooms[max_id] = tempString;
    }
  
  //return v[k-1];
}
