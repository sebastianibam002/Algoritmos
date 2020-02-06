#include <iostream>
#include <vector>

int main()
{
  //se escribe <int> de esta manera
  std::vector<int> first; //tamano cero
  std::vector<int> second(4,100);
  std::vector<int> third(second); //copia de otro vector


  int myints[] = {16,2,77,29,30};
  
  std::vector<int> fourth(myints, myints + sizeof(myints) / sizeof(int)); //arranque en la direccion myints hasta el final del arreglo

  std::cout <<"The contents of fourth are: ";
  for(unsigned int i = 0; i < fourth.size(); i++)
    std::cout << ' ' <<fourth[i];
  std::cout << '\n';


  return 0;
}
