#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &miVector)
{
  for(unsigned int i = 0; i < miVector.size(); i++)
    {
      cout << miVector[i] <<' ';
    }
  cout<<endl;
  
  
}

int main()
{
  //creacion de vector
  vector<int> miVector;
  for(int i = 0; i < 10; i++)
    miVector.push_back(i);

  

  //determinar el tamano del vector nombreVector.size() y append nombreVector.push_back(elemento)
  cout<<"El tamano del vector es: " << miVector.size()<<endl;
  //determinar si el vector esta vacio
  bool valor = 0;
  if(miVector.empty())
    valor = 1;
 
  cout <<"El vector esta vacio? " << valor << ":" << miVector.empty()<<endl;

  //para acceder a la posiucion i

  cout<<miVector[1]<<endl;
 
  for(int i = 0; i < miVector.size(); i++)
   
    cout<<"El elemento en la posicion: " <<i << " es " << miVector.at(i)<<endl;
  //acceder a primer y ultimo elemento

  cout<<"El ultimo elemento: "<< miVector.back()<<endl;
  cout<<"El primer elemento es : " <<miVector.front()<<endl;

  // eleminar elementos en x posicion

  int pos = 3;
  cout<< "miVector previo: "<<endl;
  for(int i = 0; i < miVector.size(); i++)
    cout<< ' ' <<miVector[i];

  miVector.erase(miVector.begin() + pos - 1);


  cout<< "miVector despues: "<<endl;
  for(int i = 0; i < miVector.size(); i++)
    cout<< ' ' <<miVector[i];

  cout<<endl;


  //Insertar valor en cierta posicion
  int x = 1;
  cout<<"previo a insertar"<<endl;
  printVec(miVector);
  miVector.insert(miVector.begin() + x, 10);
  cout<<"Insertado"<<endl;
  printVec(miVector);

  //Agregar y eleminar elementos al final
  miVector.push_back(11212);
  printVec(miVector);
  miVector.pop_back();
  printVec(miVector);

  


}
