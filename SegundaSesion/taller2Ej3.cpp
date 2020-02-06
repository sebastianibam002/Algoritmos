#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

string str2Mor(string pString)
{
  string retorno ="";
  map<char, string> miMapa;
  miMapa['A'] = ".-";
  miMapa['B'] = "-...";
  miMapa['C'] = "-.-.";
  miMapa['D'] = "-..";
  miMapa['E']= ".";
  miMapa['F']= "..-.";
  miMapa['G'] = "--.";
  miMapa['H']= "....";
  miMapa['I']= "..";
  miMapa['J']= ".---";
  miMapa['K']= "-.-";
  miMapa['L']= ".-..";
  miMapa['M']= "--";
  miMapa['N']= "-.";
  miMapa['O']= "---";
  miMapa['P']= ".--.";
  miMapa['Q']= "--.-";
  miMapa['R']= ".-.";
  miMapa['S']= "...";
  miMapa['T']= "-";
  miMapa['U']= "..-";
  miMapa['V']= "...-";
  miMapa['W']= ".--";
  miMapa['X']= "-..-";
  miMapa['Y']= "-.--";
  miMapa['Z']= "--..";
  miMapa['1']= ".----";
  miMapa['2']= "..---";
  miMapa['3']= "...--";
  miMapa['4']= "....-";
  miMapa['5']= ".....";
  miMapa['6']= "-....";
  miMapa['7']= "--...";
  miMapa['8']= "---..";
  miMapa['9']= "----.";
  miMapa['0']= "-----";

  for(unsigned int i = 0; i < pString.size(); i++)
    {
      
      if(miMapa.count(toupper((pString[i]))) != 0)
	{
	  //la letra existe en el alfabeto de este texto
	  
	  retorno += miMapa[toupper(pString[i])] + ' ';
	}

    }

  return retorno;

}

//funcion que genera una queue de estrings

vector<string> separadorEs(string pString)
{


  int variable = 0;
  int variableII = 1;
  unsigned int lon = 0;
  vector<string> retornar;
  //cout<<pString.substr(0, pString.find(" "))<<endl;
  retornar.push_back(pString.substr(0, pString.find(" ")));
  
  while(true)
  {

    if(pString.find(" ", variable) != string::npos)
      {
	variable = pString.find(" ", variable) +1;
	variableII = pString.find(" ", variable);
	lon = variableII - variable;
	//pString.substr(variable, lon)<<endl;
	retornar.push_back(pString.substr(variable, lon));
	
      }
    else
      {
	break;
      }

  }

  return retornar;

}
   



string mor2Str(string pString)
{

  string retorno ="";
  map<string, char> miMapa;
  miMapa[".-"] = 'a';
  miMapa["-..."] = 'b';
  miMapa["-.-."] = 'c';
  miMapa["-.."]= 'd';
  miMapa["."]= 'e';
  miMapa["..-."]= 'f';
  miMapa["--."]= 'g';
  miMapa["...."]= 'h';
  miMapa[".."]= 'i';
  miMapa[".---"]= 'j';
  miMapa["-.-"]= 'k';
  miMapa[".-.."]= 'l';
  miMapa["--"]= 'm';
  miMapa["-."]= 'n';
  miMapa["---"]= 'o';
  miMapa[".--."]= 'p';
  miMapa["--.-"]= 'q';
  miMapa[".-."]= 'r';
  miMapa["..."]= 's';
  miMapa["-"]= 't';
  miMapa["..-"]= 'u';
  miMapa["...-"]= 'v';
  miMapa[".--"]= 'w';
  miMapa["-..-"]= 'x';
  miMapa["-.--"]= 'y';
  miMapa["--.."]= 'z';
  miMapa[".----"]= '1';
  miMapa["..---"]= '2';
  miMapa["...--"]= '3';
  miMapa["....-"]= '4';
  miMapa["....."]= '5';
  miMapa["-...."]= '6';
  miMapa["--..."]= '7';
  miMapa["---.."]= '8';
  miMapa["----."]= '9';
  miMapa["-----"]= '0';

  vector<string> miVector;
  vector<string>::iterator it;
  miVector = separadorEs(pString);
  
  
  for(it = miVector.begin(); it != miVector.end(); it++)
    {
      string cadena = *it;
      //cout<<"cadena: "<<cadena<<endl;
      
      retorno += toupper(miMapa[cadena]);
	
    }
  


  
  return retorno;

}

bool morOStr(string pString)
{
  bool retorno = false;
   if(pString[0] == '-' || pString[0] =='.')
    {
      retorno = true;
    }

   return retorno;
}


int main()
{
  string texto ="";

  
  
  cout<<"Traductor de/a clave Morse "<<endl;;
  while(texto != "<enter>")
    {

      cout<<">";
      getline(cin, texto);

      
      bool indicativo = morOStr(texto);

      if(indicativo)
	{
	  //cout<<"morsw"<<endl;
	  cout<<mor2Str(texto);
	}
      else
	{
	  cout<<str2Mor(texto);
	  //cout<<"texto"<<endl;
	}

      //cout<<indicativo<<endl;
      
      cout<<endl;
      
    }
 

  // cout<<"hola mundo"<<mor2Str(".... --- .-.. .- -- ..- -. -.. ---")<<endl;
  
  return 0;
}
