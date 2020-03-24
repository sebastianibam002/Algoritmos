class Racional
{
private:
  int numerador;
  int denominador;

public:
  Racional();
  Racional(int p_Numerador, int p_Denominador);
  ~Racional();
  //Acceder a los valores
  int get_Numerador();
  int get_Denominador();
  //modificar los valores
  void set_Numerador(int p_Nuevo_Numerador);
  void set_Denominador(int p_Nuevo_Denominador);
  //operacion de insercion
  
  
}

friend ostream operator<<(ostream os, Racional a);
friend ostream operator>>()
