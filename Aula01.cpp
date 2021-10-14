#include <iostream> //BIBLIOTECA DE ENTRAIDA E SAIDA "I"nput, "O"utput

using namespace std;
int main() {
  
  //Tenho que usar o namespace que quero utilizar
  // No caso estou usando o std
  // Posso selecionar ela no cabeçario para não precisar escrever "std::" toda vez que for usar um comando

  // std::cout << "Olá Mundo !!\n";

  cout << "Olá Mundo sem std:: !!\n";
  cout << "Aula 01 de C++ ministrada pelo profº Oberlan\n";
 
  // Declarações de variáveis
  // <Tipo> <NomeDaVariavel>;

  int x, y;
  x = 2147483647; //Valor limite do int
  y = 10;
  long long z = 9223372036854775807; //Valor maximo do long long
  float pi = 3.14179265359;

  char c = 'u'; // Char armazena um caractere, precisa ficar com aspas simples
  string string = "UFES"; // String armazena frases, fica entre aspas duplas

  // Para imprimir

  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";
  cout << "z = " << z << "\n";
  cout << "pi = " << pi << "\n";
  cout << "Char a = " << x << "\n";
  cout << "String = " << string << "\n";

  cout << "\n\n\n\n\n";

  // Para fazer leitura de variável usamos 'cin >> <variavel>'

  cout << "Digite valor de x\n";
  cin >> x;
  cout << "x = " << x << "\n";
  cout << "Digite valor de x e y\n";
  cin >> x >> y;
  cout << "X = " << x << " Y = " << y << "\n";

  // Fim aula 01

	return 0;
}