#include <stdio.h>
// Variáveis globais
int num_01 = 0, num_02 = 0;

// Prototipo de funcao
void Altera_01();
void Altera_02();

// Funcao main()
int main() {
  int x = 0, y = 0;
  // Altera variaveis globais na main()
  num_01 = 10;
  num_02 = 20;

  printf("Valor num_01 na main(): %d.\n", num_01);
  printf("Valor num_02 na main(): %d.\n", num_02);

  Altera_01();  // Chamada da funcao Altera_01()
  Altera_02();  // Chamada da funcao Altera_02()

  return 0;
}  // Funcao main()
// Funcao Altera_01()
void Altera_01() {
  // Altera variaveis globais na Altera_01()
  num_01 = -3;
  num_02 = -35;
  printf("Valor num_01 na Altera_01(): %d.\n", num_01);
  printf("Valor num_02 na Altera_01(): %d.\n", num_02);
}  // Funcao Altera_01()
// Funcao Altera_02()
void Altera_02() {
  // Altera variaveis globais na Altera_02()
  num_01 = 300;
  num_02 = 125;
  printf("Valor num_01 na Altera_02(): %d.\n", num_01);
  printf("Valor num_02 na Altera_02(): %d.\n", num_02);
}  // Funcao Altera_02()
