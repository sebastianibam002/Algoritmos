#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swapMod(int i, int j, vector<int>& v, vector<string> &v2){
  //aca se tiene  hasta este puntouna temporal que me almacena el primer valor
  string tempString = v2[i];
  int temp = v[i];
  //cambios el valor de i por el de j
  v[i] = v[j];
  //hago lo mismo en el de las strings
  v2[i] = v2[j];  
  v[j] = temp;
  v2[j] = tempString;
}

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



int main() {
  string a[] = {"Tesla", "Lovelace", "Hipatia", "Caldas", "Neumann", "Casur303", "Casur666"};
  int b[] = {3, 8, 6, 1, 1, 2, 12};
    
  vector<string> rooms(a, a+sizeof(a)/sizeof(string));
  vector<int> numcls(b, b+sizeof(b)/sizeof(int));

  router_speedup(rooms, numcls, 3);

  int uno = 6;
  int dos = 0;
  
  
  for(int i = 0; i < rooms.size(); ++i)
    cout << rooms[i] << " ";
  cout << endl;

  for(int i = 0; i < numcls.size(); ++i)
    cout << numcls[i] << " ";
  cout << endl;
  
  return 0;
}
